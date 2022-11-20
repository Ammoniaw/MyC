#注释用#
#语法：用来制定编译规则
#目标:依赖１　依赖２　依赖３　．．．．．
#(TAB键)编译命令
#注意：执行make命令即可编译
#实验步骤：
#make
#ls -l 观察时间戳
#./helloworld
#make (up to date:最新的)
#vim helloworld.c 
#ls -l 观察时间戳
#make
#./helloworld
#制定编译规则1
helloworld:helloworld.o
	gcc -o helloworld helloworld.o
#制定编译规则２
helloworld.o:helloworld.c
	gcc -c -o helloworld.o helloworld.c

