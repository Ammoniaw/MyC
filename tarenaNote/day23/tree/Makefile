#Makefile 
BIN=tree
SRC=$(wildcard *.c)
OBJ=$(patsubst %.c,%.o,$(SRC))
CC=gcc
#make CFLAGS=A/B/C　可以动态修改CFLAGS
CFLAGS=A
$(BIN):$(OBJ)
	$(CC) -o $(BIN) $(OBJ)
%.o:%.c
	$(CC) -D$(CFLAGS) -c -o $@ $<
clean:
	rm $(BIN) $(OBJ)
