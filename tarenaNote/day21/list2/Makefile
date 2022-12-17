#Makefile 3:05继续
BIN=list
SRC=$(wildcard *.c)
OBJ=$(patsubst %.c,%.o,$(SRC))
CC=gcc
$(BIN):$(OBJ)
	$(CC) -o $(BIN) $(OBJ)
%.o:%.c
	$(CC) -c -o $@ $<
clean:
	rm $(BIN) $(OBJ)
