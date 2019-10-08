# 変数 #_MVAR_#
TARGET = MrubyBridge-ASP.exe
TIMESTAMP = tecsgen.timestamp
TECSGEN_EXE = tecsgen
# TECSGEN_EXE = tecsgen.exe     # exerb 版を使用する場合は、こちらを有効にする
BASE_DIR = .
MRUBY = ..
MRUBYPATH = ../build/host
## TOPPERS/ASP+TECS パッケージの asp+tecs ディレクトリへのパスを書きます
ASP=../../../../../asp/asp+tecs/asp+tecs
TARGET_DIR=$(ASP)/target/at91skyeye_gcc
CC = gcc
CFLAGS = -D CHAR_T_DEFINED -I . -I $(MRUBYPATH)/include -I ../src -I ../tecs -I $(TECSPATH) -I $(TECSPATH)/mruby -I $(BASE_DIR)/. -I $(ASP)/include -I $(ASP)/arch -I $(GEN_DIR) -I include
LD = gcc
LDFLAGS =  -L $(MRUBYLDPATH) -lmruby -lm
GEN_DIR = $(BASE_DIR)/gen
SRC_DIR = $(BASE_DIR)/src
_TECS_OBJ_DIR = $(GEN_DIR)/
#   _TECS_OBJ_DIR   # should be end with '/'

#vpath %.c $(SRC_DIR) $(GEN_DIR)  ../tecs $(ASP)/include $(ASP)/target/at91skyeye_gcc $(ASP)/arch
vpath %.c $(SRC_DIR) $(GEN_DIR)  ../tecs $(ASP)/arch $(TECSPATH)/mruby
vpath %.h $(SRC_DIR) $(GEN_DIR)  $(ASP)/include $(ASP)/arch $(TECSPATH)/mruby

# OTHER_OBJS = $(_TECS_OBJ_DIR)tecs_mruby.o                      # Add objects out of tecs care.
# OTHER_OBJS = $(_TECS_OBJ_DIR)vasyslog.o

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

tecs : ASP mruby mruby_lib $(TIMESTAMP)

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
#####  end TECSFlow targets  #####

# generic target for objs
ASP :
	@if [ ! -e $(ASP)/include/kernel.cdl ]; then echo 'set ASP in Makefile to where asp+tecs package is !!' ; exit -1 ; fi

$(TIMESTAMP) : $(TECS_IMPORTS)
	$(TECSGEN_EXE) -D CHAR_T_DEFINED -I $(TARGET_DIR) -I $(ASP)/include -I $(ASP)/arch -I $(TECSPATH) test.cdl
	touch $(TIMESTAMP)

# generic target for objs
$(_TECS_OBJ_DIR)%.o : %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(_TECS_OBJ_DIR)tMrubyBridgesTask.o : tMrubyBridgesTask.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
$(_TECS_OBJ_DIR)tAll.o : tAll.c
	$(CC) -c $(CFLAGS) -o $@ $<
 
