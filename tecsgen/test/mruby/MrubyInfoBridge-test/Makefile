# 変数 #_MVAR_#
TARGET = test.exe
TIMESTAMP = $(GEN_DIR)/tecsgen.timestamp
TECSGEN_EXE = tecsgen
# TECSGEN_EXE = tecsgen.exe
BASE_DIR = .
CC = gcc
# CFLAGS = -I $(BASE_DIR)/. -I $(TECSPATH)/../../test/cygwin -I $(TECSPATH) -I $(TECSPATH)/mruby -I $(TECSPATH)/rpc -I $(MRUBYPATH)/include -I $(GEN_DIR) -D "Inline=static inline" -D TECS_Use_MrbString_for_CharPointer
CFLAGS = -I $(BASE_DIR)/. -I ../include -I $(TECSPATH)/../../test/cygwin -I $(TECSPATH) -I $(TECSPATH)/mruby -I $(TECSPATH)/rpc -I $(TECSPATH)/TECSInfo -I $(MRUBYPATH)/include -I $(GEN_DIR) -D "Inline=static inline"
LD = gcc
LDFLAGS = -lmruby -L$(MRUBYLDPATH) -lm -lpthread
GEN_DIR = $(BASE_DIR)/gen
SRC_DIR = $(BASE_DIR)/src
_TECS_OBJ_DIR = $(GEN_DIR)/
#   _TECS_OBJ_DIR   # should end with '/'
PRE_TECSGEN_TARGET =
POST_TECSGEN_TARGET =

vpath %.c $(SRC_DIR) $(GEN_DIR)  $(TECSPATH)/../../test/cygwin $(TECSPATH) $(TECSPATH)/mruby $(TECSPATH)/rpc $(TECSPATH)/TECSInfo $(MRUBYPATH)/include
vpath %.h $(SRC_DIR) $(GEN_DIR)  $(TECSPATH)/../../test/cygwin $(TECSPATH) $(TECSPATH)/mruby $(TECSPATH)/rpc $(TECSPATH)/TECSInfo $(MRUBYPATH)/include

# OTHER_OBJS = $(MRUBY_MAIN_OBJ)                      # Add objects out of tecs care.
OTHER_OBJS = $(_TECS_OBJ_DIR)vasyslog.o

# Additional VARS
# CHANGE this into suitable path

# Place this line before any target. first target described here
include ../Makefile.common

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
	$(TECSGEN_EXE)  -I $(TECSPATH)/../../test/cygwin -I $(TECSPATH) test.cdl

#####  TECSFlow targets  #####
tecsflow : $(GEN_DIR)/tecsgen.rbdmp tcflow
	tecsflow -g $(GEN_DIR)

tecsflow_u : $(GEN_DIR)/tecsgen.rbdmp tcflow
	tecsflow -g $(GEN_DIR) -U

$(GEN_DIR)/tecsgen.rbdmp : tecs

tcflow : tecs
	make tcflow_exec

tcflow_exec : $(GEN_DIR)/tcflow.rbdmp
$(GEN_DIR)/tcflow.rbdmp : $(CELLTYPE_SRCS) $(PLUGIN_CELLTYPE_SRCS)
	tcflow -g $(GEN_DIR) -c '$(CC) -E -DTECSFLOW -DTECSGEN $(CFLAGS) -I ./' $^
	# tcflow -g $(GEN_DIR) -c '$(CC) -E -DTECSFLOW $(CFLAGS) -I ./' $^
#####  end TECSFlow targets  #####

# generic target for objs
# generic target for objs
$(_TECS_OBJ_DIR)%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(_TECS_OBJ_DIR)tKernel.o : tKernel.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tSysLog.o : tSysLog.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tSig.o : tSig.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tTracePlugin_sSig.o : tTracePlugin_sSig.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)nMruby_SSig.o : nMruby_SSig.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
