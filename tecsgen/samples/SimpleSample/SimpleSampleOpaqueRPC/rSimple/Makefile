#  #_MVAR_#
# fixed variable (unchangeable by config or plugin)
CYGPATH = ../../../../test/cygwin
TARGET_BASE = SimpleSample-rSimple
BASE_DIR = ..
GEN_DIR = $(BASE_DIR)/gen/rSimple
INCLUDES = -I $(BASE_DIR)/. -I $(BASE_DIR)/./. -I $(TECSPATH) -I $(CYGPATH) -I $(TECSPATH)/rpc -I $(BASE_DIR)/./gen -I $(BASE_DIR)/src -I $(TECSPATH)/mruby -I $(TECSPATH)/mruby-bak2 -I $(TECSPATH)/mruby.org -I $(TECSPATH)/posix -I $(GEN_DIR)
DEFINES =

# end of fixed variable (unchangeable by config or plugin)
#default C Compiler
CC = gcc

#default C Compiler options
CFLAGS = $(INCLUDES) $(DEFINES) -D  "Inline=static inline"

#default Liknker
LD = gcc

#default Liknker Options
LDFLAGS = -lpthread

#default source directory
SRC_DIR = $(BASE_DIR)/src

#default target name
TARGET = $(TARGET_BASE).exe

#default TECS generator
TECSGEN = tecsgen

#Time Stamp
TIMESTAMP = $(GEN_DIR)/tecsgen.timestamp

#default relocatable object (.o) directory
_TECS_OBJ_DIR = $(GEN_DIR)/



# Pre-tecsgen target
PRE_TECSGEN_TARGET =

# Post-tecsgen target
POST_TECSGEN_TARGET =

# vpath for C sources and headers
vpath %.c $(SRC_DIR) $(GEN_DIR)  .././. $(TECSPATH) $(CYGPATH) $(TECSPATH)/rpc .././gen ../src $(TECSPATH)/mruby $(TECSPATH)/mruby-bak2 $(TECSPATH)/mruby.org $(TECSPATH)/posix
vpath %.h $(SRC_DIR) $(GEN_DIR)  .././. $(TECSPATH) $(CYGPATH) $(TECSPATH)/rpc .././gen ../src $(TECSPATH)/mruby $(TECSPATH)/mruby-bak2 $(TECSPATH)/mruby.org $(TECSPATH)/posix

# Other objects (out of tecsgen)
OTHER_OBJS =                      # Add objects out of tecs care.
# OTHER_OBJS = $(_TECS_OBJ_DIR)vasyslog.o
# ¥ë¡¼¥ë #_MRUL_#
allall: tecs
	make all     # in order to include generated Makefile.tecsgen & Makefile.depend

all : $(TARGET)


# depend ¤ò include #_MDEP_#
-include $(GEN_DIR)/Makefile.tecsgen
-include $(GEN_DIR)/Makefile.depend

$(TARGET) : $(CELLTYPE_COBJS) $(TECSGEN_COBJS) $(PLUGIN_COBJS) $(OTHER_OBJS)
	$(LD) -o $(TARGET) $(TECSGEN_COBJS) $(CELLTYPE_COBJS) $(PLUGIN_COBJS) $(OTHER_OBJS) $(LDFLAGS)

clean :
	rm -f $(CELLTYPE_COBJS) $(TECSGEN_COBJS) $(PLUGIN_COBJS) $(OTHER_OBJS) $(TARGET) 

tecs:
	@echo "run 'make tecs' in root region"

# generic target for objs
$(_TECS_OBJ_DIR)%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(_TECS_OBJ_DIR)tTask.o : tTask.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tSemaphore.o : tSemaphore.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tSysLog.o : tSysLog.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tNBOTDR.o : tNBOTDR.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tSocketClient.o : tSocketClient.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tSimple.o : tSimple.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tTaskMain.o : tTaskMain.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tOpaqueMarshaler_sSample.o : tOpaqueMarshaler_sSample.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
