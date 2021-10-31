#in this file we have some definition of the constant (macros) beforehand

CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm #for linking

all: mmc

mmc: matrix.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)
	##$(CC) -o mmc matrix.o mm.o $(LDFLAGS)  - instruction for compiling

#compiling
mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<
	##$(CC) -c $(CCFLAGS) mm.c

matrix.o: matrix.c
	$(CC) -c $(CCFLAGS) $<
	##$(CC) -c $(CCFLAGS) matrix.c

clean:
	rm *.o

