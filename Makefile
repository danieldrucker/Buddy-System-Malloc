# Makefile template for project 3

CC = gcc
CFLAGS = -g -Wall
# main executable file first
TARGET = proj03
# object files next
OBJS = main.o buddy.o
# header files next
DEPS = 
.PHONY : clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

.c.o: $(DEPS)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS) $(TARGET) *~

