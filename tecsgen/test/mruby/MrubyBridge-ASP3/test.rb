# coding: iso-8859-1
=begin
Below are messages from MrubyBridgePlugin. These give us hints to call functions from mruby.

MrubyBridgePlugin: version 1.3.0 (Suitable for mruby ver 1.3.0 & ver 1.2.0).
  MrubyBridgeCellPlugin: [cell.port] All.eKernel => [mruby instance] TECS::TsKernel.new( 'AlleKernelBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eTaskBody => [mruby instance] TECS::TsTaskBody.new( 'AlleTaskBodyBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eTask => [mruby instance] TECS::TsTask.new( 'AlleTaskBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eSemaphore => [mruby instance] TECS::TsSemaphore.new( 'AlleSemaphoreBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eEventflag => [mruby instance] TECS::TsEventflag.new( 'AlleEventflagBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eDataqueue => [mruby instance] TECS::TsDataqueue.new( 'AlleDataqueueBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.ePriorityDataqueue => [mruby instance] TECS::TsPriorityDataqueue.new( 'AllePriorityDataqueueBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eMutex => [mruby instance] TECS::TsMutex.new( 'AlleMutexBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eFixedSizeMemoryPool => [mruby instance] TECS::TsFixedSizeMemoryPool.new( 'AlleFixedSizeMemoryPoolBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eCyclic => [mruby instance] TECS::TsCyclic.new( 'AlleCyclicBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eAlarm => [mruby instance] TECS::TsAlarm.new( 'AlleAlarmBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eInterruptRequest => [mruby instance] TECS::TsInterruptRequest.new( 'AlleInterruptRequestBridge' )
  MrubyBridgeCellPlugin: [cell.port] All.eRoutineBody => [mruby instance] TECS::TsRoutineBody.new( 'AlleRoutineBodyBridge' )
  MrubyBridgePlugin: [pointer]  intptr_t* => class TECS::LongPointer
  MrubyBridgePlugin: [pointer]  SYSTIM* => class TECS::ULongPointer
  MrubyBridgePlugin: [pointer]  ID* => class TECS::IntPointer
  MrubyBridgePlugin: [pointer]  uint_t* => class TECS::UIntPointer
  MrubyBridgePlugin: [signature] ::sKernel => [celltype] nMruby::tsKernel => [class] TECS::TsKernel
  MrubyBridgePlugin: join your VM's cInitialize to VM_TECSInitializer.eInitialize
  MrubyBridgePlugin: [signature] ::sTaskBody => [celltype] nMruby::tsTaskBody => [class] TECS::TsTaskBody
  MrubyBridgePlugin: [struct]   T_RTSK => class TECS::Structt_rtsk
  MrubyBridgePlugin: [signature] ::sTask => [celltype] nMruby::tsTask => [class] TECS::TsTask
warning: gen/tmp_MrubyBridgeCellPlugin_0.cdl: line 25 MRW2001 initialize: internally defined. change to initialize_cell in ruby
  MrubyBridgePlugin: [struct]   T_RSEM => class TECS::Structt_rsem
  MrubyBridgePlugin: [signature] ::sSemaphore => [celltype] nMruby::tsSemaphore => [class] TECS::TsSemaphore
warning: gen/tmp_MrubyBridgeCellPlugin_0.cdl: line 32 MRW2001 initialize: internally defined. change to initialize_cell in ruby
  MrubyBridgePlugin: [struct]   T_RFLG => class TECS::Structt_rflg
  MrubyBridgePlugin: [signature] ::sEventflag => [celltype] nMruby::tsEventflag => [class] TECS::TsEventflag
warning: gen/tmp_MrubyBridgeCellPlugin_0.cdl: line 39 MRW2001 initialize: internally defined. change to initialize_cell in ruby
  MrubyBridgePlugin: [struct]   T_RDTQ => class TECS::Structt_rdtq
  MrubyBridgePlugin: [signature] ::sDataqueue => [celltype] nMruby::tsDataqueue => [class] TECS::TsDataqueue
warning: gen/tmp_MrubyBridgeCellPlugin_0.cdl: line 46 MRW2001 initialize: internally defined. change to initialize_cell in ruby
  MrubyBridgePlugin: [struct]   T_RPDQ => class TECS::Structt_rpdq
  MrubyBridgePlugin: [signature] ::sPriorityDataqueue => [celltype] nMruby::tsPriorityDataqueue => [class] TECS::TsPriorityDataqueue
warning: gen/tmp_MrubyBridgeCellPlugin_0.cdl: line 53 MRW2001 initialize: internally defined. change to initialize_cell in ruby
  MrubyBridgePlugin: [struct]   T_RSEM => class TECS::Structt_rsem
  MrubyBridgePlugin: [signature] ::sMutex => [celltype] nMruby::tsMutex => [class] TECS::TsMutex
warning: gen/tmp_MrubyBridgeCellPlugin_0.cdl: line 60 MRW2001 initialize: internally defined. change to initialize_cell in ruby
info: gen/tmp_MrubyBridgeCellPlugin_0.cdl: line 60 MRI9999 p_block: type void** cannot be used in mruby Bridge, get automatcally excluded
info: gen/tmp_MrubyBridgeCellPlugin_0.cdl: line 60 MRI9999 p_block: type void** cannot be used in mruby Bridge, getPolling automatcally excluded
info: gen/tmp_MrubyBridgeCellPlugin_0.cdl: line 60 MRI9999 p_block: type void** cannot be used in mruby Bridge, getTimeout automatcally excluded
info: gen/tmp_MrubyBridgeCellPlugin_0.cdl: line 60 MRI9999 block: type const void* cannot be used in mruby Bridge, release automatcally excluded
  MrubyBridgePlugin: [struct]   T_RMPF => class TECS::Structt_rmpf
  MrubyBridgePlugin: [signature] ::sFixedSizeMemoryPool => [celltype] nMruby::tsFixedSizeMemoryPool => [class] TECS::TsFixedSizeMemoryPool
  MrubyBridgePlugin: [struct]   T_RCYC => class TECS::Structt_rcyc
  MrubyBridgePlugin: [signature] ::sCyclic => [celltype] nMruby::tsCyclic => [class] TECS::TsCyclic
  MrubyBridgePlugin: [struct]   T_RALM => class TECS::Structt_ralm
  MrubyBridgePlugin: [signature] ::sAlarm => [celltype] nMruby::tsAlarm => [class] TECS::TsAlarm
  MrubyBridgePlugin: [signature] ::sInterruptRequest => [celltype] nMruby::tsInterruptRequest => [class] TECS::TsInterruptRequest
  MrubyBridgePlugin: [signature] ::sRoutineBody => [celltype] nMruby::tsRoutineBody => [class] TECS::TsRoutineBody
  C2TECSBridgePlugin: [celltype] C2TECS::tnPosix_sMain. Create cell then join the call port 'cCall' to the target cell
=end

p( 'AlleKernelBridge' )
All_eKernel =							 TECS::TsKernel.new( 'AlleKernelBridge' )

p( 'AlleTaskBodyBridge' )
All_eTaskBody =						 TECS::TsTaskBody.new( 'AlleTaskBodyBridge' )

p( 'AlleTaskBridge' )
All_eTask =								 TECS::TsTask.new( 'AlleTaskBridge' )

p( 'AlleSemaphoreBridge' )
All_eSemaphore =					 TECS::TsSemaphore.new( 'AlleSemaphoreBridge' )

p( 'AlleEventflagBridge' )
All_eEventflag =					 TECS::TsEventflag.new( 'AlleEventflagBridge' )

p( 'AlleDataqueueBridge' )
All_eDataqueue =					 TECS::TsDataqueue.new( 'AlleDataqueueBridge' )

p( 'AllePriorityDataqueueBridge' )
All_ePriorityDataqueue =	 TECS::TsPriorityDataqueue.new( 'AllePriorityDataqueueBridge' )

p( 'AlleMutexBridge' )
All_eMutex =							 TECS::TsMutex.new( 'AlleMutexBridge' )

p( 'AlleFixedSizeMemoryPoolBridge' )
All_eFixedSizeMemoryPool = TECS::TsFixedSizeMemoryPool.new( 'AlleFixedSizeMemoryPoolBridge' )

p( 'AlleCyclicBridge' )
All_eCyclic =							 TECS::TsCyclic.new( 'AlleCyclicBridge' )

p( 'AlleAlarmBridge' )
All_eAlarm =							 TECS::TsAlarm.new( 'AlleAlarmBridge' )

p( 'AlleInterruptRequestBridge' )
All_eInterruptRequest =		 TECS::TsInterruptRequest.new( 'AlleInterruptRequestBridge' )

p( 'AlleRoutineBodyBridge' )
All_eRoutineBody =				 TECS::TsRoutineBody.new( 'AlleRoutineBodyBridge' )


All_eTask = TECS::TsTask.new "AlleTaskBridge"
All_eTask.activate
All_eTask.cancelActivate
All_eTask.terminate
pri = 10
All_eTask.changePriority pri
p_pri = TECS::IntPointer.new 1
All_eTask.getPriority p_pri
All_eTask.wakeup
All_eTask.cancelWakeup
All_eTask.releaseWait
All_eTask.suspend
All_eTask.resume
pk_taskStatus = TECS::Structt_rtsk.new
All_eTask.refer pk_taskStatus
# typedef struct t_rtsk {
#         STAT    tskstat;        /* ¥¿¥¹¥¯¾õÂÖ */
#         PRI             tskpri;         /* ¥¿¥¹¥¯¤Î¸½ºßÍ¥ÀèÅÙ */
#         PRI             tskbpri;        /* ¥¿¥¹¥¯¤Î¥Ù¡¼¥¹Í¥ÀèÅÙ */
#         STAT    tskwait;        /* ÂÔ¤ÁÍ×°ø */
#         ID              wobjid;         /* ÂÔ¤ÁÂÐ¾Ý¤Î¥ª¥Ö¥¸¥§¥¯¥È¤ÎID */
#         TMO             lefttmo;        /* ¥¿¥¤¥à¥¢¥¦¥È¤¹¤ë¤Þ¤Ç¤Î»þ´Ö */
#         uint_t  actcnt;         /* µ¯Æ°Í×µá¥­¥å¡¼¥¤¥ó¥°¿ô */
#         uint_t  wupcnt;         /* µ¯¾²Í×µá¥­¥å¡¼¥¤¥ó¥°¿ô */
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
