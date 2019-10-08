p 1
alarmBridge = TECS::TsAlarm.new "AlarmBridge"
p 2
configInterruptBridge = TECS::TsConfigInterrupt.new "ConfigInterruptBridge"
p 3
cyclicBridge = TECS::TsCyclic.new "CyclicBridge"
p 4
dataqueuebridge = TECS::TsDataqueue.new "DataqueueBridge"
p 5
eventflagBridge = TECS::TsEventflag.new "EventflagBridge"
p 6
initializeRoutineBodyBridge = TECS::TsInitializeRoutineBody.new "InitializeRoutineBodyBridge"
p 7
kernelBridge = TECS::TsKernel.new "KernelBridge"
p 8
priorityDataqueueBridge = TECS::TsPriorityDataqueue.new "PriorityDataqueueBridge"
p 9
semaphoreBridge = TECS::TsSemaphore.new "SemaphoreBridge"
p 10
taskBridge = TECS::TsTask.new "TaskBridge"
taskBridge.activate
taskBridge.cancelActivate
taskBridge.terminate
pri = 10
taskBridge.changePriority pri
p_pri = TECS::IntPointer.new 1
taskBridge.getPriority p_pri
taskBridge.wakeup
taskBridge.cancelWakeup
taskBridge.releaseWait
taskBridge.suspend
taskBridge.resume
taskBridge.raiseException 0x01
pk_taskStatus = TECS::Structt_rtsk.new
taskBridge.refer pk_taskStatus
# typedef struct t_rtsk {
#         STAT    tskstat;        /* タスク状態 */
#         PRI             tskpri;         /* タスクの現在優先度 */
#         PRI             tskbpri;        /* タスクのベース優先度 */
#         STAT    tskwait;        /* 待ち要因 */
#         ID              wobjid;         /* 待ち対象のオブジェクトのID */
#         TMO             lefttmo;        /* タイムアウトするまでの時間 */
#         uint_t  actcnt;         /* 起動要求キューイング数 */
#         uint_t  wupcnt;         /* 起床要求キューイング数 */
# } T_RTSK;
print "TaskBridge.refer\n"
print "    tskstat=", pk_taskStatus.tskstat, "\n"
print "    tskpri=", pk_taskStatus.tskpri, "\n"
print "    tskbpri=", pk_taskStatus.tskbpri, "\n"
print "    tskwait=", pk_taskStatus.tskwait, "\n"
print "    wobjid=", pk_taskStatus.wobjid, "\n"
print "    lefttmo=", pk_taskStatus.lefttmo, "\n"
print "    actcnt=", pk_taskStatus.actcnt, "\n"
print "    wupcnt=", pk_taskStatus.wupcnt, "\n"
p 11
taskBodyBridge = TECS::TsTaskBody.new "TaskBodyBridge"
p 12
taskExceptionBodyBridge = TECS::TsTaskExceptionBody.new "TaskExceptionBodyBridge"
taskExceptionBodyBridge.main 0
p 13
terminateRoutineBodyBridge = TECS::TsTerminateRoutineBody.new "TerminateRoutineBodyBridge"
