CC=g++
TARGET=sample
OBJS=sample.o
SIGN_PATH=../output/

INCS=\
	-I$(SIGN_PATH)include

LIBS=\
	-L$(SIGN_PATH)lib \
	-lsign \
	-lpthread

CPPFLAGS=$(INCS)  -Wall -W -pipe -Wno-unused-parameter -g -O2
LDFLAGS=$(LIBS) -O2 

all: $(TARGET)

$(TAEGET) : $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS)

$(OBJS) :%.o : %.cpp
	$(CC) -c $(CPPFLAGS) $< 

clean:
	rm -rf $(OBJS) $(TARGET)
