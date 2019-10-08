/* #[<PREAMBLE>]#
 * Don't edit the comments between #[<...>]# and #[</...>]#
 * These comment are used by tecsmerege when merging.
 *
 * #[</PREAMBLE>]# */

#include "tAll_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* #[<ENTRY_PORT>]# eKernel
 * entry port: eKernel
 * signature:  sKernel
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eKernel_getExtendedInformation
 * name:         eKernel_getExtendedInformation
 * global_name:  tAll_eKernel_getExtendedInformation
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_getExtendedInformation(CELLIDX idx, intptr_t* p_exinf)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_sleep
 * name:         eKernel_sleep
 * global_name:  tAll_eKernel_sleep
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_sleep(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_sleepTimeout
 * name:         eKernel_sleepTimeout
 * global_name:  tAll_eKernel_sleepTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_sleepTimeout(CELLIDX idx, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_delay
 * name:         eKernel_delay
 * global_name:  tAll_eKernel_delay
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_delay(CELLIDX idx, RELTIM delayTime)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_exit
 * name:         eKernel_exit
 * global_name:  tAll_eKernel_exit
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_exit(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_disableTerminate
 * name:         eKernel_disableTerminate
 * global_name:  tAll_eKernel_disableTerminate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_disableTerminate(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_enableTerminate
 * name:         eKernel_enableTerminate
 * global_name:  tAll_eKernel_enableTerminate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_enableTerminate(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_senseTerminate
 * name:         eKernel_senseTerminate
 * global_name:  tAll_eKernel_senseTerminate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eKernel_senseTerminate(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eKernel_setTime
 * name:         eKernel_setTime
 * global_name:  tAll_eKernel_setTime
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_setTime(CELLIDX idx, SYSTIM systemTime)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_getTime
 * name:         eKernel_getTime
 * global_name:  tAll_eKernel_getTime
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_getTime(CELLIDX idx, SYSTIM* p_systemTime)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_adjustTime
 * name:         eKernel_adjustTime
 * global_name:  tAll_eKernel_adjustTime
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_adjustTime(CELLIDX idx, int32_t adjustTime)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_fetchHighResolutionTimer
 * name:         eKernel_fetchHighResolutionTimer
 * global_name:  tAll_eKernel_fetchHighResolutionTimer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
HRTCNT
eKernel_fetchHighResolutionTimer(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eKernel_rotateReadyQueue
 * name:         eKernel_rotateReadyQueue
 * global_name:  tAll_eKernel_rotateReadyQueue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_rotateReadyQueue(CELLIDX idx, PRI taskPriority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_getTaskId
 * name:         eKernel_getTaskId
 * global_name:  tAll_eKernel_getTaskId
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_getTaskId(CELLIDX idx, ID* p_taskId)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_getLoad
 * name:         eKernel_getLoad
 * global_name:  tAll_eKernel_getLoad
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_getLoad(CELLIDX idx, PRI taskPriority, uint_t* p_load)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_getNthTask
 * name:         eKernel_getNthTask
 * global_name:  tAll_eKernel_getNthTask
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_getNthTask(CELLIDX idx, PRI taskPriority, uint_t nth, ID* p_taskID)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_lockCpu
 * name:         eKernel_lockCpu
 * global_name:  tAll_eKernel_lockCpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_lockCpu(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_unlockCpu
 * name:         eKernel_unlockCpu
 * global_name:  tAll_eKernel_unlockCpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_unlockCpu(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_disableDispatch
 * name:         eKernel_disableDispatch
 * global_name:  tAll_eKernel_disableDispatch
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_disableDispatch(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_enableDispatch
 * name:         eKernel_enableDispatch
 * global_name:  tAll_eKernel_enableDispatch
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_enableDispatch(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_senseContext
 * name:         eKernel_senseContext
 * global_name:  tAll_eKernel_senseContext
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eKernel_senseContext(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eKernel_senseLock
 * name:         eKernel_senseLock
 * global_name:  tAll_eKernel_senseLock
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eKernel_senseLock(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eKernel_senseDispatch
 * name:         eKernel_senseDispatch
 * global_name:  tAll_eKernel_senseDispatch
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eKernel_senseDispatch(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eKernel_senseDispatchPendingState
 * name:         eKernel_senseDispatchPendingState
 * global_name:  tAll_eKernel_senseDispatchPendingState
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eKernel_senseDispatchPendingState(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eKernel_senseKernel
 * name:         eKernel_senseKernel
 * global_name:  tAll_eKernel_senseKernel
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eKernel_senseKernel(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eKernel_exitKernel
 * name:         eKernel_exitKernel
 * global_name:  tAll_eKernel_exitKernel
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_exitKernel(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_changeInterruptPriorityMask
 * name:         eKernel_changeInterruptPriorityMask
 * global_name:  tAll_eKernel_changeInterruptPriorityMask
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_changeInterruptPriorityMask(CELLIDX idx, PRI interruptPriority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_getInterruptPriorityMask
 * name:         eKernel_getInterruptPriorityMask
 * global_name:  tAll_eKernel_getInterruptPriorityMask
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_getInterruptPriorityMask(CELLIDX idx, PRI* p_interruptPriority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiKernel
 * entry port: eiKernel
 * signature:  siKernel
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiKernel_fetchHighResolutionTimer
 * name:         eiKernel_fetchHighResolutionTimer
 * global_name:  tAll_eiKernel_fetchHighResolutionTimer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
HRTCNT
eiKernel_fetchHighResolutionTimer(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eiKernel_rotateReadyQueue
 * name:         eiKernel_rotateReadyQueue
 * global_name:  tAll_eiKernel_rotateReadyQueue
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiKernel_rotateReadyQueue(CELLIDX idx, PRI taskPriority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiKernel_getTaskId
 * name:         eiKernel_getTaskId
 * global_name:  tAll_eiKernel_getTaskId
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiKernel_getTaskId(CELLIDX idx, ID* p_taskId)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiKernel_lockCpu
 * name:         eiKernel_lockCpu
 * global_name:  tAll_eiKernel_lockCpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiKernel_lockCpu(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiKernel_unlockCpu
 * name:         eiKernel_unlockCpu
 * global_name:  tAll_eiKernel_unlockCpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiKernel_unlockCpu(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiKernel_senseContext
 * name:         eiKernel_senseContext
 * global_name:  tAll_eiKernel_senseContext
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eiKernel_senseContext(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eiKernel_senseLock
 * name:         eiKernel_senseLock
 * global_name:  tAll_eiKernel_senseLock
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eiKernel_senseLock(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eiKernel_senseDispatch
 * name:         eiKernel_senseDispatch
 * global_name:  tAll_eiKernel_senseDispatch
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eiKernel_senseDispatch(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eiKernel_senseDispatchPendingState
 * name:         eiKernel_senseDispatchPendingState
 * global_name:  tAll_eiKernel_senseDispatchPendingState
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eiKernel_senseDispatchPendingState(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eiKernel_senseKernel
 * name:         eiKernel_senseKernel
 * global_name:  tAll_eiKernel_senseKernel
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eiKernel_senseKernel(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eiKernel_exitKernel
 * name:         eiKernel_exitKernel
 * global_name:  tAll_eiKernel_exitKernel
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiKernel_exitKernel(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiKernel_exceptionSenseDispatchPendingState
 * name:         eiKernel_exceptionSenseDispatchPendingState
 * global_name:  tAll_eiKernel_exceptionSenseDispatchPendingState
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eiKernel_exceptionSenseDispatchPendingState(CELLIDX idx, const void* p_exceptionInformation)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eTaskBody
 * entry port: eTaskBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTaskBody_main
 * name:         eTaskBody_main
 * global_name:  tAll_eTaskBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTaskBody_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eTask
 * entry port: eTask
 * signature:  sTask
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTask_activate
 * name:         eTask_activate
 * global_name:  tAll_eTask_activate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_activate(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_cancelActivate
 * name:         eTask_cancelActivate
 * global_name:  tAll_eTask_cancelActivate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eTask_cancelActivate(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_getTaskState
 * name:         eTask_getTaskState
 * global_name:  tAll_eTask_getTaskState
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_getTaskState(CELLIDX idx, STAT* p_tskstat)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_changePriority
 * name:         eTask_changePriority
 * global_name:  tAll_eTask_changePriority
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_changePriority(CELLIDX idx, PRI priority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_getPriority
 * name:         eTask_getPriority
 * global_name:  tAll_eTask_getPriority
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_getPriority(CELLIDX idx, PRI* p_priority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_refer
 * name:         eTask_refer
 * global_name:  tAll_eTask_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_refer(CELLIDX idx, T_RTSK* pk_taskStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */
	puts( "eTask_refer" );
	memset( pk_taskStatus, 0, sizeof( T_RTSK ) );

	// typedef struct t_rtsk {
	// 	STAT	tskstat;	/* タスク状態 */
	// 	PRI	tskpri;		/* タスクの現在優先度 */
	// 	PRI	tskbpri;	/* タスクのベース優先度 */
	// 	STAT	tskwait;	/* 待ち要因 */
	// 	ID	wobjid;		/* 待ち対象のオブジェクトのID */
	// 	TMO	lefttmo;	/* タイムアウトするまでの時間 */
	// 	uint_t	actcnt;		/* 起動要求キューイング数 */
	// 	uint_t	wupcnt;		/* 起床要求キューイング数 */
	// } T_RTSK;
	pk_taskStatus->tskstat = 1;
	pk_taskStatus->tskpri = 2;
	pk_taskStatus->tskbpri = 3;
	pk_taskStatus->tskwait = 4;
	pk_taskStatus->wobjid = 5;
	pk_taskStatus->lefttmo = 6;
	pk_taskStatus->actcnt = 7;
	pk_taskStatus->wupcnt = 8;

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_wakeup
 * name:         eTask_wakeup
 * global_name:  tAll_eTask_wakeup
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_wakeup(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_cancelWakeup
 * name:         eTask_cancelWakeup
 * global_name:  tAll_eTask_cancelWakeup
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eTask_cancelWakeup(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_releaseWait
 * name:         eTask_releaseWait
 * global_name:  tAll_eTask_releaseWait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_releaseWait(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_suspend
 * name:         eTask_suspend
 * global_name:  tAll_eTask_suspend
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_suspend(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_resume
 * name:         eTask_resume
 * global_name:  tAll_eTask_resume
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_resume(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_raiseTerminate
 * name:         eTask_raiseTerminate
 * global_name:  tAll_eTask_raiseTerminate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_raiseTerminate(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_terminate
 * name:         eTask_terminate
 * global_name:  tAll_eTask_terminate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_terminate(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiTask
 * entry port: eiTask
 * signature:  siTask
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiTask_activate
 * name:         eiTask_activate
 * global_name:  tAll_eiTask_activate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiTask_activate(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiTask_wakeup
 * name:         eiTask_wakeup
 * global_name:  tAll_eiTask_wakeup
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiTask_wakeup(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiTask_releaseWait
 * name:         eiTask_releaseWait
 * global_name:  tAll_eiTask_releaseWait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiTask_releaseWait(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eSemaphore
 * entry port: eSemaphore
 * signature:  sSemaphore
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSemaphore_signal
 * name:         eSemaphore_signal
 * global_name:  tAll_eSemaphore_signal
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_signal(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_wait
 * name:         eSemaphore_wait
 * global_name:  tAll_eSemaphore_wait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_wait(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_waitPolling
 * name:         eSemaphore_waitPolling
 * global_name:  tAll_eSemaphore_waitPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_waitPolling(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_waitTimeout
 * name:         eSemaphore_waitTimeout
 * global_name:  tAll_eSemaphore_waitTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_waitTimeout(CELLIDX idx, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_initialize
 * name:         eSemaphore_initialize
 * global_name:  tAll_eSemaphore_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_initialize(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eSemaphore_refer
 * name:         eSemaphore_refer
 * global_name:  tAll_eSemaphore_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSemaphore_refer(CELLIDX idx, T_RSEM* pk_semaphoreStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiSemaphore
 * entry port: eiSemaphore
 * signature:  siSemaphore
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiSemaphore_signal
 * name:         eiSemaphore_signal
 * global_name:  tAll_eiSemaphore_signal
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiSemaphore_signal(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eEventflag
 * entry port: eEventflag
 * signature:  sEventflag
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEventflag_set
 * name:         eEventflag_set
 * global_name:  tAll_eEventflag_set
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_set(CELLIDX idx, FLGPTN setPattern)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEventflag_clear
 * name:         eEventflag_clear
 * global_name:  tAll_eEventflag_clear
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_clear(CELLIDX idx, FLGPTN clearPattern)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEventflag_wait
 * name:         eEventflag_wait
 * global_name:  tAll_eEventflag_wait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_wait(CELLIDX idx, FLGPTN waitPattern, MODE waitMode, FLGPTN* p_flagPattern)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEventflag_waitPolling
 * name:         eEventflag_waitPolling
 * global_name:  tAll_eEventflag_waitPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_waitPolling(CELLIDX idx, FLGPTN waitPattern, MODE waitMode, FLGPTN* p_flagPattern)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEventflag_waitTimeout
 * name:         eEventflag_waitTimeout
 * global_name:  tAll_eEventflag_waitTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_waitTimeout(CELLIDX idx, FLGPTN waitPattern, MODE waitMode, FLGPTN* p_flagPattern, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEventflag_initialize
 * name:         eEventflag_initialize
 * global_name:  tAll_eEventflag_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_initialize(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEventflag_refer
 * name:         eEventflag_refer
 * global_name:  tAll_eEventflag_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_refer(CELLIDX idx, T_RFLG* pk_eventflagStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiEventflag
 * entry port: eiEventflag
 * signature:  siEventflag
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiEventflag_set
 * name:         eiEventflag_set
 * global_name:  tAll_eiEventflag_set
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiEventflag_set(CELLIDX idx, FLGPTN setPattern)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eDataqueue
 * entry port: eDataqueue
 * signature:  sDataqueue
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eDataqueue_send
 * name:         eDataqueue_send
 * global_name:  tAll_eDataqueue_send
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDataqueue_send(CELLIDX idx, intptr_t data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_sendPolling
 * name:         eDataqueue_sendPolling
 * global_name:  tAll_eDataqueue_sendPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDataqueue_sendPolling(CELLIDX idx, intptr_t data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_sendTimeout
 * name:         eDataqueue_sendTimeout
 * global_name:  tAll_eDataqueue_sendTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDataqueue_sendTimeout(CELLIDX idx, intptr_t data, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_sendForce
 * name:         eDataqueue_sendForce
 * global_name:  tAll_eDataqueue_sendForce
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDataqueue_sendForce(CELLIDX idx, intptr_t data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_receive
 * name:         eDataqueue_receive
 * global_name:  tAll_eDataqueue_receive
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDataqueue_receive(CELLIDX idx, intptr_t* p_data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_receivePolling
 * name:         eDataqueue_receivePolling
 * global_name:  tAll_eDataqueue_receivePolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDataqueue_receivePolling(CELLIDX idx, intptr_t* p_Data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_receiveTimeout
 * name:         eDataqueue_receiveTimeout
 * global_name:  tAll_eDataqueue_receiveTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDataqueue_receiveTimeout(CELLIDX idx, intptr_t* p_data, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_initialize
 * name:         eDataqueue_initialize
 * global_name:  tAll_eDataqueue_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDataqueue_initialize(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_refer
 * name:         eDataqueue_refer
 * global_name:  tAll_eDataqueue_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eDataqueue_refer(CELLIDX idx, T_RDTQ* pk_dataqueueStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiDataqueue
 * entry port: eiDataqueue
 * signature:  siDataqueue
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiDataqueue_sendPolling
 * name:         eiDataqueue_sendPolling
 * global_name:  tAll_eiDataqueue_sendPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiDataqueue_sendPolling(CELLIDX idx, intptr_t data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiDataqueue_sendForce
 * name:         eiDataqueue_sendForce
 * global_name:  tAll_eiDataqueue_sendForce
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiDataqueue_sendForce(CELLIDX idx, intptr_t data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# ePriorityDataqueue
 * entry port: ePriorityDataqueue
 * signature:  sPriorityDataqueue
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# ePriorityDataqueue_send
 * name:         ePriorityDataqueue_send
 * global_name:  tAll_ePriorityDataqueue_send
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePriorityDataqueue_send(CELLIDX idx, intptr_t data, PRI dataPriority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# ePriorityDataqueue_sendPolling
 * name:         ePriorityDataqueue_sendPolling
 * global_name:  tAll_ePriorityDataqueue_sendPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePriorityDataqueue_sendPolling(CELLIDX idx, intptr_t data, PRI dataPriority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# ePriorityDataqueue_sendTimeout
 * name:         ePriorityDataqueue_sendTimeout
 * global_name:  tAll_ePriorityDataqueue_sendTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePriorityDataqueue_sendTimeout(CELLIDX idx, intptr_t data, PRI dataPriority, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# ePriorityDataqueue_receive
 * name:         ePriorityDataqueue_receive
 * global_name:  tAll_ePriorityDataqueue_receive
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePriorityDataqueue_receive(CELLIDX idx, intptr_t* p_data, PRI* p_dataPriority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# ePriorityDataqueue_receivePolling
 * name:         ePriorityDataqueue_receivePolling
 * global_name:  tAll_ePriorityDataqueue_receivePolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePriorityDataqueue_receivePolling(CELLIDX idx, intptr_t* p_data, PRI* p_dataPriority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# ePriorityDataqueue_receiveTimeout
 * name:         ePriorityDataqueue_receiveTimeout
 * global_name:  tAll_ePriorityDataqueue_receiveTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePriorityDataqueue_receiveTimeout(CELLIDX idx, intptr_t* p_data, PRI* p_dataPriority, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# ePriorityDataqueue_initialize
 * name:         ePriorityDataqueue_initialize
 * global_name:  tAll_ePriorityDataqueue_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePriorityDataqueue_initialize(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# ePriorityDataqueue_refer
 * name:         ePriorityDataqueue_refer
 * global_name:  tAll_ePriorityDataqueue_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
ePriorityDataqueue_refer(CELLIDX idx, T_RPDQ* pk_priorityDataqueueStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiPriorityDataqueue
 * entry port: eiPriorityDataqueue
 * signature:  siPriorityDataqueue
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiPriorityDataqueue_sendPolling
 * name:         eiPriorityDataqueue_sendPolling
 * global_name:  tAll_eiPriorityDataqueue_sendPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiPriorityDataqueue_sendPolling(CELLIDX idx, intptr_t data, PRI dataPriority)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eMutex
 * entry port: eMutex
 * signature:  sMutex
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eMutex_lock
 * name:         eMutex_lock
 * global_name:  tAll_eMutex_lock
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMutex_lock(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eMutex_lockPolling
 * name:         eMutex_lockPolling
 * global_name:  tAll_eMutex_lockPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMutex_lockPolling(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eMutex_lockTimeout
 * name:         eMutex_lockTimeout
 * global_name:  tAll_eMutex_lockTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMutex_lockTimeout(CELLIDX idx, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eMutex_unlock
 * name:         eMutex_unlock
 * global_name:  tAll_eMutex_unlock
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMutex_unlock(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eMutex_initialize
 * name:         eMutex_initialize
 * global_name:  tAll_eMutex_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMutex_initialize(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eMutex_refer
 * name:         eMutex_refer
 * global_name:  tAll_eMutex_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMutex_refer(CELLIDX idx, T_RSEM* pk_mutexStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eFixedSizeMemoryPool
 * entry port: eFixedSizeMemoryPool
 * signature:  sFixedSizeMemoryPool
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eFixedSizeMemoryPool_get
 * name:         eFixedSizeMemoryPool_get
 * global_name:  tAll_eFixedSizeMemoryPool_get
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eFixedSizeMemoryPool_get(CELLIDX idx, void** p_block)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eFixedSizeMemoryPool_getPolling
 * name:         eFixedSizeMemoryPool_getPolling
 * global_name:  tAll_eFixedSizeMemoryPool_getPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eFixedSizeMemoryPool_getPolling(CELLIDX idx, void** p_block)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eFixedSizeMemoryPool_getTimeout
 * name:         eFixedSizeMemoryPool_getTimeout
 * global_name:  tAll_eFixedSizeMemoryPool_getTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eFixedSizeMemoryPool_getTimeout(CELLIDX idx, void** p_block, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eFixedSizeMemoryPool_release
 * name:         eFixedSizeMemoryPool_release
 * global_name:  tAll_eFixedSizeMemoryPool_release
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eFixedSizeMemoryPool_release(CELLIDX idx, const void* block)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eFixedSizeMemoryPool_initialize
 * name:         eFixedSizeMemoryPool_initialize
 * global_name:  tAll_eFixedSizeMemoryPool_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eFixedSizeMemoryPool_initialize(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eFixedSizeMemoryPool_refer
 * name:         eFixedSizeMemoryPool_refer
 * global_name:  tAll_eFixedSizeMemoryPool_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eFixedSizeMemoryPool_refer(CELLIDX idx, T_RMPF* pk_fixedSizeMemoryPoolStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiHandlerBody
 * entry port: eiHandlerBody
 * signature:  siHandlerBody
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiHandlerBody_main
 * name:         eiHandlerBody_main
 * global_name:  tAll_eiHandlerBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eiHandlerBody_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eCyclic
 * entry port: eCyclic
 * signature:  sCyclic
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eCyclic_start
 * name:         eCyclic_start
 * global_name:  tAll_eCyclic_start
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eCyclic_start(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eCyclic_stop
 * name:         eCyclic_stop
 * global_name:  tAll_eCyclic_stop
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eCyclic_stop(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eCyclic_refer
 * name:         eCyclic_refer
 * global_name:  tAll_eCyclic_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eCyclic_refer(CELLIDX idx, T_RCYC* pk_cyclicHandlerStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eAlarm
 * entry port: eAlarm
 * signature:  sAlarm
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eAlarm_start
 * name:         eAlarm_start
 * global_name:  tAll_eAlarm_start
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eAlarm_start(CELLIDX idx, RELTIM alarmTime)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eAlarm_stop
 * name:         eAlarm_stop
 * global_name:  tAll_eAlarm_stop
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eAlarm_stop(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eAlarm_refer
 * name:         eAlarm_refer
 * global_name:  tAll_eAlarm_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eAlarm_refer(CELLIDX idx, T_RALM* pk_alarmStatus)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiAlarm
 * entry port: eiAlarm
 * signature:  siAlarm
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiAlarm_start
 * name:         eiAlarm_start
 * global_name:  tAll_eiAlarm_start
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiAlarm_start(CELLIDX idx, RELTIM alarmTime)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiAlarm_stop
 * name:         eiAlarm_stop
 * global_name:  tAll_eiAlarm_stop
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiAlarm_stop(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eInterruptRequest
 * entry port: eInterruptRequest
 * signature:  sInterruptRequest
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInterruptRequest_disable
 * name:         eInterruptRequest_disable
 * global_name:  tAll_eInterruptRequest_disable
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eInterruptRequest_disable(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eInterruptRequest_enable
 * name:         eInterruptRequest_enable
 * global_name:  tAll_eInterruptRequest_enable
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eInterruptRequest_enable(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eRoutineBody
 * entry port: eRoutineBody
 * signature:  sRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eRoutineBody_main
 * name:         eRoutineBody_main
 * global_name:  tAll_eRoutineBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eRoutineBody_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* Write error processing code here */
	} /* end if VALID_IDX(idx) */

	/* Put statements here #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   Put non-entry functions below.
 * #[</POSTAMBLE>]#*/
