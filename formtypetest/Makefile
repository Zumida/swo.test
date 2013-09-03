TARGET   := $(notdir $(basename $(CURDIR))).exe
SOURCES  := ./
DEPEND   := depend
SRCS_C   := $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.c)))
SRCS_CPP := $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.cpp)))
SRCS_RC  := $(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.rc)))
OBJS     := $(SRCS_RC:%.rc=%.o) $(SRCS_C:%.c=%.o) $(SRCS_CPP:%.cpp=%.o)
LIBS     := -lswo

LIB_DIRS := -L$(SWO_HOME)/lib
INCLUDE_DIRS := -I$(SWO_HOME)/include
CFLAGS   := -Wall -O2 -g $(INCLUDE_DIRS) -DWIN32 -DUNICODE -D_UNICODE
LDFLAGS  := $(LIB_DIRS) -mwindows -static

CPP := cpp
CC  := gcc
CX  := g++
LD  := g++
AR  := ar
RM  := del /F
RES := windres

.SUFFIXES:
.SUFFIXES: .rc .c .cpp .o

.rc.o:
	$(RES) $< $@

.c.o:
	$(CC) $(CFLAGS) -c $<

.cpp.o:
	$(CX) $(CFLAGS) -c $<

.PHONY: all
all: $(DEPEND) $(TARGET)

$(TARGET): $(OBJS)
	$(LD) -o $@ $(OBJS) $(LDFLAGS) $(LIBS)

.PHONY: clean
clean:
	- $(RM) $(TARGET)
	- $(RM) *.o
	- $(RM) $(DEPEND)

$(DEPEND): $(SRCS_C) $(SRCS_CPP)
	-@ $(RM) $@
	-@ for %%i in ($^); do $(CPP) $(CFLAGS) -MM %%i >> $@

-include $(DEPEND)
