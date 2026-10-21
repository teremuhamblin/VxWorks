TARGET := vxworks.out
SRC := src/main.c core/rtos.c modules/sensors.c modules/comms.c modules/health.c modules/ballistics.c
OBJS := $(SRC:.c=.o)

CC := cc
CFLAGS := -Wall -O2

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
