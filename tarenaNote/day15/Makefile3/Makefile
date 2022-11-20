#制定编译规则１
main:main.o cal.o arr.o
	gcc -o main main.o cal.o arr.o
#制定编译规则２
#功能：将所有的.c生成对应的.o
#%.o,$@:目标文件
#%.c,$<:源文件
%.o:%.c
	gcc -c -o $@ $<
