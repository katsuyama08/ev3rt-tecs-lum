VMRUBY = $(HOME)/mruby/mruby-1.2.0
LD_LIRBRARY_PATH = -L $(VMRUBY)/build/host/lib/

# 変数 #_MVAR_#
# fixed variable (unchangeable by config or plugin)
TARGET_BASE = mrubycellplugin
BASE_DIR = .
GEN_DIR = $(BASE_DIR)/gen
INCLUDES = -I $(BASE_DIR)/. -I $(BASE_DIR)/../../cygwin/ -I $(TECSPATH) -I $(TECSPATH)/mruby -I $(TECSPATH)/posix -I $(TECSPATH)/rpc -I $(MRUBYPATH)/include -I $(GEN_DIR) -I $(VMRUBY)/include
DEFINES =

# end of fixed variable (unchangeable by config or plugin)
#default C Compiler
CC = gcc

#default C Compiler options
CFLAGS = $(INCLUDES) $(DEFINES) -D  "Inline=static inline"

#default Liknker
LD = gcc

#default Liknker Options
LDFLAGS = $(LD_LIRBRARY_PATH) -lmruby

#CHANGE this to suitable path
MRUBYPATH = ..

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
vpath %.c $(SRC_DIR) $(GEN_DIR)  ../../cygwin/ $(TECSPATH) $(TECSPATH)/mruby $(TECSPATH)/mruby-bak2 $(TECSPATH)/mruby.org $(TECSPATH)/posix $(TECSPATH)/rpc $(MRUBYPATH)/include
vpath %.h $(SRC_DIR) $(GEN_DIR)  ../../cygwin/ $(TECSPATH) $(TECSPATH)/mruby $(TECSPATH)/mruby-bak2 $(TECSPATH)/mruby.org $(TECSPATH)/posix $(TECSPATH)/rpc $(MRUBYPATH)/include

# Other objects (out of tecsgen)
OTHER_OBJS =                      # Add objects out of tecs care.
# OTHER_OBJS = $(_TECS_OBJ_DIR)vasyslog.o
# ルール #_MRUL_#
allall: tecs
	make all     # in order to include generated Makefile.tecsgen & Makefile.depend

all : $(TARGET)


# depend を include #_MDEP_#
-include $(GEN_DIR)/Makefile.tecsgen
-include $(GEN_DIR)/Makefile.depend

$(TARGET) : $(TIMESTAMP) $(CELLTYPE_COBJS) $(TECSGEN_COBJS) $(PLUGIN_COBJS) $(OTHER_OBJS)
	$(LD) -o $(TARGET) $(TECSGEN_COBJS) $(CELLTYPE_COBJS) $(PLUGIN_COBJS) $(OTHER_OBJS) $(LDFLAGS)

clean :
	rm -f $(CELLTYPE_COBJS) $(TECSGEN_COBJS) $(PLUGIN_COBJS) $(OTHER_OBJS) $(TARGET)  $(TIMESTAMP)
	rm -rf $(GEN_DIR)

tecs : $(PRE_TECSGEN_TARGET) $(TIMESTAMP) $(POST_TECSGEN_TARGET)

$(TIMESTAMP) : $(TECS_IMPORTS)
	$(TECSGEN)  -I ../../cygwin/ mrubycellplugin.cdl
# generic target for objs
$(_TECS_OBJ_DIR)%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(_TECS_OBJ_DIR)tCt.o : tCt.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)nMruby_tTECSInitializer.o : nMruby_tTECSInitializer.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)nMruby_tMrubyProc.o : nMruby_tMrubyProc.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)nMruby_tsSig.o : nMruby_tsSig.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)nMruby_tsSig_Initializer.o : nMruby_tsSig_Initializer.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)nC2TECS_tnPosix_sMain.o : nC2TECS_tnPosix_sMain.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
