# -*- Makefile -*-

# target: dependancies
#	action

CC=gcc
CFLAGS=-o
OBJS=test.o


test: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) test

$(OBJS): test.c
	$(CC) -c test.c

clean:
	rm -f *.o test