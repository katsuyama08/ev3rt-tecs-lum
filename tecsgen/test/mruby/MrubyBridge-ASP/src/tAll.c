/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tAll_template.c => src/tAll.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tAll_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */
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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eTask_raiseException
 * name:         eTask_raiseException
 * global_name:  tAll_eTask_raiseException
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTask_raiseException(CELLIDX idx, TEXPTN pattern)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eKernel
 * entry port: eKernel
 * signature:  sKernel
 * context:    task
 * #[</ENTRY_PORT>]# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_exitTask
 * name:         eKernel_exitTask
 * global_name:  tAll_eKernel_exitTask
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_exitTask(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_getMicroTime
 * name:         eKernel_getMicroTime
 * global_name:  tAll_eKernel_getMicroTime
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_getMicroTime(CELLIDX idx, SYSUTM* p_systemMicroTime)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_disableTaskException
 * name:         eKernel_disableTaskException
 * global_name:  tAll_eKernel_disableTaskException
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_disableTaskException(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eKernel_enableTaskException
 * name:         eKernel_enableTaskException
 * global_name:  tAll_eKernel_enableTaskException
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eKernel_enableTaskException(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEventflag_wait
 * name:         eEventflag_wait
 * global_name:  tAll_eEventflag_wait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_wait(CELLIDX idx, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEventflag_waitPolling
 * name:         eEventflag_waitPolling
 * global_name:  tAll_eEventflag_waitPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_waitPolling(CELLIDX idx, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eEventflag_waitTimeout
 * name:         eEventflag_waitTimeout
 * global_name:  tAll_eEventflag_waitTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_waitTimeout(CELLIDX idx, FLGPTN waitPattern, MODE waitFlagMode, FLGPTN* p_flagPattern, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
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

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eTaskExceptionBody
 * entry port: eTaskExceptionBody
 * signature:  sTaskExceptionBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTaskExceptionBody_main
 * name:         eTaskExceptionBody_main
 * global_name:  tAll_eTaskExceptionBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTaskExceptionBody_main(CELLIDX idx, TEXPTN pattern)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eInitializeRoutineBody
 * entry port: eInitializeRoutineBody
 * signature:  sInitializeRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitializeRoutineBody_main
 * name:         eInitializeRoutineBody_main
 * global_name:  tAll_eInitializeRoutineBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eInitializeRoutineBody_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eTerminateRoutineBody
 * entry port: eTerminateRoutineBody
 * signature:  sTerminateRoutineBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTerminateRoutineBody_main
 * name:         eTerminateRoutineBody_main
 * global_name:  tAll_eTerminateRoutineBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eTerminateRoutineBody_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eConfigInterrupt
 * entry port: eConfigInterrupt
 * signature:  sConfigInterrupt
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eConfigInterrupt_disable
 * name:         eConfigInterrupt_disable
 * global_name:  tAll_eConfigInterrupt_disable
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eConfigInterrupt_disable(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eConfigInterrupt_enable
 * name:         eConfigInterrupt_enable
 * global_name:  tAll_eConfigInterrupt_enable
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eConfigInterrupt_enable(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

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

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
