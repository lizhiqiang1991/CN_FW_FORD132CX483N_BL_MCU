#include "task.h"
#include "hal_uart.h"

uint8_t gu8undo_num = 0;
queue_task_def gtqueue_manager;
task_recorder_def gttask_recorder[TASK_NUM];

uint8_t Task_Current_Event_Get(void)
{
	return gtqueue_manager.ttask[gtqueue_manager.u8current_point].u8event;
}
//-------------------------------------------------------------------------------------------------------------------------
//                                           Task Assigner
//-------------------------------------------------------------------------------------------------------------------------
void Task_AssignedPriority(void)
{
    uint8_t u8row = 0;
    uint8_t u8counter = 0;
    task_recorder_def trecorder_temp;
    

	for(u8row = 0; u8row < gu8undo_num; u8row++)
	{
		for(u8counter = (u8row + 1); u8counter < gu8undo_num; u8counter++)
		{
			if((gttask_recorder[u8row].ttask[gttask_recorder[u8row].u8current_point].u8level + gttask_recorder[u8row].u8discard_time) <
			   (gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8current_point].u8level + gttask_recorder[u8counter].u8discard_time))
			{
				trecorder_temp = gttask_recorder[u8row];
				gttask_recorder[u8row] = gttask_recorder[u8counter];
				gttask_recorder[u8counter] = trecorder_temp;
			}
		}
	}

    for(u8counter = 0; u8counter < TASK_NUM; u8counter++)
    {
        if(gttask_recorder[u8counter].u8task_num != 0)
        	gttask_recorder[u8counter].u8discard_time++;
    }
}
//-------------------------------------------------------------------------------------------------------------------------
uint8_t Task_ExcludeDone(void)
{
    uint8_t u8exclude_num = 0;
    uint8_t u8row = 0;
    uint8_t u8counter = 0;
    task_recorder_def trecorder_temp;

    for(u8row = 0; u8row < TASK_NUM - 1; u8row++)
    {
        for(u8counter = (u8row + 1); u8counter < TASK_NUM; u8counter++)
        {
            if(gttask_recorder[u8row].u8task_num == 0)
            {
                if(gttask_recorder[u8counter].u8task_num != 0)
                {
                    trecorder_temp = gttask_recorder[u8row];
                    gttask_recorder[u8row] = gttask_recorder[u8counter];
                    gttask_recorder[u8counter] = trecorder_temp;
                }
            }
        }
    }
    for(u8row = 0; u8row < TASK_NUM; u8row++)
    {
        if(gttask_recorder[u8row].u8task_num == 0)
            u8exclude_num++;
    }
    return u8exclude_num;
}
//-------------------------------------------------------------------------------------------------------------------------
uint8_t Task_AssignedTask(void)
{
    uint8_t u8exclude_num = 0;
    uint8_t u8return;
    
    u8exclude_num = Task_ExcludeDone();
    gu8undo_num = TASK_NUM - u8exclude_num;

    if(gu8undo_num != 0U)
    {
		Task_AssignedPriority();
    	u8return = TASK_TRUE;
    }
    else
    {
    	u8return = TASK_FALSE;
    }

    return u8return;
}
//-------------------------------------------------------------------------------------------------------------------------
//                                           Task Recorder
//-------------------------------------------------------------------------------------------------------------------------
void Task_QueueManagerInit(void)
{
    uint8_t u8counter = 0;
    gtqueue_manager.u8current_point = 0;
    gtqueue_manager.u8end_point = 0;
    
    for(u8counter = 0; u8counter < TASK_QUEUE_SIZE; u8counter++)
    {
        Task_ClearTaskQueue(&gtqueue_manager.ttask[u8counter]);
    }
}
//-------------------------------------------------------------------------------------------------------------------------
void Task_RecorderInit(void)
{
    uint8_t u8task_counter = 0;
    uint8_t u8queue_counter = 0;
    
    __disable_irq();
    for(u8task_counter = 0; u8task_counter < TASK_NUM; u8task_counter++)
    {
    	gttask_recorder[u8task_counter].u8discard_time = 0;
    	gttask_recorder[u8task_counter].u8current_point = 0;
    	gttask_recorder[u8task_counter].u8end_point = 0;
    	gttask_recorder[u8task_counter].u8task_num = 0;
    	gttask_recorder[u8task_counter].u8interrupt_data1 = TASK_FALSE;
    	gttask_recorder[u8task_counter].u8interrupt_data2 = TASK_FALSE;
        
        for(u8queue_counter = 0; u8queue_counter < RECORDER_QUEUE_SIZE; u8queue_counter++)
        {
        	gttask_recorder[u8task_counter].ttask[u8queue_counter].u8type = TYPE_NONE;
        	gttask_recorder[u8task_counter].ttask[u8queue_counter].u8level = LEVEL_NONE;
        	gttask_recorder[u8task_counter].ttask[u8queue_counter].u8event = EVENT_NONE;
        	gttask_recorder[u8task_counter].ttask[u8queue_counter].u8state = STATE_NONE;
        	gttask_recorder[u8task_counter].ttask[u8queue_counter].ttask_handler = NULL;
        }
    }
    __enable_irq();
}
//-------------------------------------------------------------------------------------------------------------------------
void Task_TaskInRecorder(void (*call_fun)(void),uint8_t u8type, uint8_t u8task_counter)
{
	__disable_irq();
    gttask_recorder[u8task_counter].u8end_point =  (gttask_recorder[u8task_counter].u8end_point + 1) % RECORDER_QUEUE_SIZE;
    gttask_recorder[u8task_counter].u8task_num++;
    gttask_recorder[u8task_counter].ttask[0].ttask_handler = call_fun;
    gttask_recorder[u8task_counter].ttask[0].u8type = u8type;
    gttask_recorder[u8task_counter].ttask[0].u8state = STATE_INIT;
    gttask_recorder[u8task_counter].ttask[0].u8event = EVENT_FIRST;
    gttask_recorder[u8task_counter].ttask[0].u8level = LEVEL5;
    gttask_recorder[u8task_counter].u8discard_time = 0;
    __enable_irq();
}
//-------------------------------------------------------------------------------------------------------------------------
uint8_t Task_ChangeEvent(uint8_t u8type, uint8_t u8level, uint8_t u8event)
{
    uint8_t u8counter;

    __disable_irq();

    for(u8counter = 0; u8counter < TASK_NUM; u8counter++)
    {
        if(gttask_recorder[u8counter].ttask[0].u8type  == u8type)
        {
            if(gttask_recorder[u8counter].u8task_num < RECORDER_QUEUE_SIZE)
            {
                gttask_recorder[u8counter].u8discard_time = 0;
                gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].u8type = u8type;
                if(gttask_recorder[u8counter].u8end_point > 0)
                {
                	gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].ttask_handler = gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point-1].ttask_handler;
                	gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].u8state = gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point-1].u8state;
                }
                else
                {
                	gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].ttask_handler = gttask_recorder[u8counter].ttask[RECORDER_QUEUE_SIZE-1].ttask_handler;
                	gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].u8state = gttask_recorder[u8counter].ttask[RECORDER_QUEUE_SIZE-1].u8state;
                }

                gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].u8level = u8level;
                gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].u8event = u8event;
                gttask_recorder[u8counter].u8end_point = (gttask_recorder[u8counter].u8end_point + 1) % RECORDER_QUEUE_SIZE;
                gttask_recorder[u8counter].u8task_num++;
                gttask_recorder[u8counter].u8queue_full = TASK_FALSE;

                return TASK_TRUE;
            }
            gttask_recorder[u8counter].u8queue_full = TASK_TRUE;
        }
    }
    __enable_irq();
    return TASK_FALSE;
} 
//-------------------------------------------------------------------------------------------------------------------------
uint8_t Task_ChangeState(uint8_t u8type,uint8_t u8level, uint8_t u8state, void (*call_fun)(void))
{
    uint8_t u8counter = 0;

    __disable_irq();
    for(u8counter = 0; u8counter < TASK_NUM; u8counter++)
    {
        if(gttask_recorder[u8counter].ttask[0].u8type == u8type)
        {
            if(gttask_recorder[u8counter].u8task_num < RECORDER_QUEUE_SIZE)
            {
                gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].u8type = u8type;
                gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].ttask_handler = call_fun;
                gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point] .u8state = u8state;
                gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].u8level = LEVEL5;
                gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8end_point].u8event = EVENT_FIRST;
                gttask_recorder[u8counter].u8discard_time = 0;
                gttask_recorder[u8counter].u8end_point = (gttask_recorder[u8counter].u8end_point + 1) % RECORDER_QUEUE_SIZE;
                gttask_recorder[u8counter].u8task_num++;
                gttask_recorder[u8counter].u8queue_full = TASK_FALSE;
                __enable_irq();
                return TASK_TRUE;
            }
            gttask_recorder[u8counter].u8queue_full = TASK_TRUE;
        }
    }
    __enable_irq();
    return TASK_FALSE;
}
//-------------------------------------------------------------------------------------------------------------------------
//                                           Task Executer
//-------------------------------------------------------------------------------------------------------------------------
void Task_PushTaskInQueue(void)
{
    uint8_t u8counter;
    uint8_t u8size = 0;
    
    if(gu8undo_num > TASK_QUEUE_SIZE)
    {
    	u8size = TASK_QUEUE_SIZE;
    }
    else
    {
    	u8size = gu8undo_num;
    }
    
    gtqueue_manager.u8current_point = 0;
    gtqueue_manager.u8end_point = 0;
    
    for(u8counter = 0; u8counter < u8size; u8counter++)
    {        
    	gtqueue_manager.ttask[gtqueue_manager.u8end_point] = gttask_recorder[u8counter].ttask[gttask_recorder[u8counter].u8current_point];
    	gtqueue_manager.u8end_point += 1;
    }
}
//-------------------------------------------------------------------------------------------------------------------------
void Task_ClearTaskQueue(task_def *pttask)
{
    pttask->u8type = TYPE_NONE;
    pttask->u8state = STATE_NONE;
    pttask->u8event = EVENT_NONE;
    pttask->u8level = LEVEL_NONE;
    pttask->ttask_handler = NULL;
}
//-------------------------------------------------------------------------------------------------------------------------
void Task_ClearEvent(task_def *pttask)
{
    pttask->u8event = EVENT_NONE;
    pttask->u8level = LEVEL_NONE;
}
//-------------------------------------------------------------------------------------------------------------------------
void Task_TaskDone(void)
{
	uint8_t u8index;

	__disable_irq();
	u8index = gtqueue_manager.u8current_point;

    //HAL_UART_Printf("Type{0x%02x} : Component Event = 0x%02x\n",gttask_recorder[u8index].ttask[0].u8type, gttask_recorder[u8index].ttask[gttask_recorder[u8index].u8current_point].u8event);
	//HAL_UART_Printf("Type{0x%02x} : Task Num = 0x%02x\n\r",gttask_recorder[u8index].ttask[0].u8type, gttask_recorder[u8index].u8task_num);

    Task_ClearEvent(&gttask_recorder[u8index].ttask[gttask_recorder[u8index].u8current_point]);
    gttask_recorder[u8index].u8current_point = (gttask_recorder[u8index].u8current_point + 1) % RECORDER_QUEUE_SIZE;
    
    if(gttask_recorder[u8index].u8task_num > 0)
        gttask_recorder[u8index].u8task_num--;
    __enable_irq();
}
//-------------------------------------------------------------------------------------------------------------------------
void Task_PullTask(void)
{
	__disable_irq();
    Task_ClearTaskQueue(&gtqueue_manager.ttask[gtqueue_manager.u8current_point]);
    gtqueue_manager.u8current_point++;
    __enable_irq();
}
//-------------------------------------------------------------------------------------------------------------------------
void Task_ExecuteTask(void)
{
    gtqueue_manager.ttask[gtqueue_manager.u8current_point].ttask_handler();
    Task_PullTask();
}
//-------------------------------------------------------------------------------------------------------------------------
void Task_ProcessTask(void)
{
    if(gtqueue_manager.u8current_point < gtqueue_manager.u8end_point)
    {
        Task_ExecuteTask();
    }
    else
    {
    	__disable_irq();
        // The queue is empty and need to push new task into queue.
        if(Task_AssignedTask() == TASK_TRUE)
        {
        	Task_PushTaskInQueue();
        }
        __enable_irq();
    }
}
