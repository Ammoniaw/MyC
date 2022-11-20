#Makefile中的变量类似Ｃ语言的#define常量宏
#定义变量
BIN=main
#利用wildcard函数罗列当前目录下所有的.c文件并且给变量SRC
SRC=$(wildcard *.c)
#结果：SRC=main.c arr.c cal.c
#利用patsubst函数将.c转换成.o文件赋值给变量OBJ
OBJ=$(patsubst %.c,%.o,$(SRC))
#结果: OBJ=main.o arr.o cal.o)
CC=gcc
#制定编译规则１
#注意：使用变量的值语法：$(变量名)
$(BIN):$(OBJ)
	$(CC) -o $(BIN) $(OBJ)
#制定编译规则２
%.o:%.c
	$(CC) -c -o $@ $<
#伪目标：没有依赖的目标
#只有执行make clean时才会执行对应的命令
clean:
	rm $(BIN) $(OBJ)
#9:55继续
