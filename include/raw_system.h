/*
     raw os - Copyright (C)  Lingjun Chen(jorya_txj).

    This file is part of raw os.

    raw os is free software; you can redistribute it it under the terms of the 
    GNU General Public License as published by the Free Software Foundation; 
    either version 3 of the License, or  (at your option) any later version.

    raw os is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
    without even the implied warranty of  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
    See the GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program. if not, write email to jorya.txj@gmail.com
                                      ---

    A special exception to the LGPL can be applied should you wish to distribute
    a combined work that includes raw os, without being obliged to provide
    the source code for any proprietary components. See the file exception.txt
    for full details of how and when the exception can be applied.
*/

/* 	2012-4  Created by jorya_txj
  *	xxxxxx   please added here
  */

#ifndef RAW_SYSTEM_H
#define RAW_SYSTEM_H


/* *****************************************************************************
 * Below are all the possible error codes the os can generate
 * ***************************************************************************** */
enum 
{
   
	RAW_SUCCESS                         = 0,
	RAW_IDLE_EXIT,	
	RAW_TASK_0_EXIT,	
	RAW_SYSTEM_ERROR,
	RAW_OS_RUNNING,
	RAW_OS_STOPPED,    
	RAW_NO_PEND_WAIT,
	RAW_SCHED_DISABLE,
	RAW_BLOCK_ABORT,
	RAW_BLOCK_TIMEOUT,
	RAW_BLOCK_DEL,
	RAW_MSG_MAX,
	RAW_MSG_EMPTY,
	RAW_SCHED_LOCKED,
	RAW_SCHED_INVALID,
	RAW_SCHED_OVERFLOW,
	RAW_STATE_UNKNOWN,
	RAW_SUSPENDED_COUNT_OVERFLOWED,
	HAS_NOT_SUSPENDED,
	RAW_BYOND_MAX_PRIORITY,
	RAW_SAME_PRIORITY,
	RAW_SEMAPHORE_OVERFLOW,
	RAW_SEMAPHORE_TASK_WAITING,
	RAW_MUTEX_NOT_RELEASE_BY_OCCYPY,
	RAW_MUTEX_DEADLOCK,
	RAW_MUTEX_BOOSTED_MAX,
	RAW_EXCEED_CEILING_PRIORITY,
	RAW_CEILING_PRIORITY_NOT_ALLOWED,
	RAW_MUTEX_NO_POLICY,
	RAW_NO_MEMORY,
	RAW_OBJ_INVALIDATE_STATE,
	RAW_TIMER_HAS_ACTIVED,
	RAW_TIMER_HAS_NOT_ACTIVED,
	RAW_TIMER_STATE_INVALID,
	RAW_TIMER_INVALID_TICKS,
	RAW_NULL_POINTER,
	RAW_BYTE_ALIGN_ERROR,
	RAW_NULL_OBJECT,
	RAW_INVALID_SCHED_WAY,
	RAW_NOT_CALLED_BY_ISR,
	RAW_NOT_CALLED_BY_TASK,
	RAW_ZERO_NUMBER,
	RAW_HIGHEST_TASK_EXIT,
	RAW_CHANGE_PRIORITY_NOT_ALLOWED,
	RAW_MUTEX_HOLDER_PRIORITY_CHANGED,
	RAW_DELETE_TASK_NOT_ALLOWED,
	RAW_SUSPEND_TASK_NOT_ALLOWED,
	RAW_NO_THIS_OPTION,
	RAW_BLOCK_SIZE_ERROR,
	RAW_BYTE_SIZE_ERROR,
	RAW_POOL_SIZE_INVALID,
	RAW_INVALID_ALIGN,
	RAW_INVALID_POIN,
	RAW_QUEUE_FULL_OPT_ERROR,
	RAW_ERROR_OBJECT_TYPE,
	RAW_TASK_0_EVENT_EXHAUSTED,
	RAW_INT_MSG_EXHAUSTED,
	RAW_IDLE_EVENT_EXHAUSTED,
	RAW_INVALID_HOURS,
	RAW_INVALID_MINUTES,
	RAW_TIME_ZERO_SLEEP,
	RAW_QUEUE_BUFFER_SIZE_0,
	RAW_QUEUE_BUFFER_INVALID_SIZE,
	RAW_QUEUE_BUFFER_FULL,
	RAW_EXCEED_QUEUE_BUFFER_MSG_SIZE,
	RAW_EXCEED_INT_NESTED_LEVEL,
	RAW_IDLE_TICK_ADD_FAILED,
	RAW_IDLE_TICK_DELETE_FAILED
	
};


#endif

