#Makefile中的变量类似Ｃ语言的#define常量宏
#定义变量
BIN=main
OBJ=main.o cal.o arr.o
CC=gcc

#制定编译规则１
#注意：使用变量的值语法：$(变量名)
$(BIN):$(OBJ)
	$(CC) -o $(BIN) $(OBJ)

#制定编译规则２
%.o:%.c
	$(CC) -c -o $@ $<
