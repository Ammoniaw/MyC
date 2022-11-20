//var1.c:只负责定义全局变量和全局静态变量,全局函数,静态全局函数 8:50继续
#include <stdio.h>
int g_a = 520; //全局变量,其他文件也可以访问(跨文件访问)
static int g_b = 520; //全局静态变量,其内存
//从运行程序时分配好直到程序结束
//从定义的地方开始以下所有函数都可以访问
//但是不能跨文件访问
//定义静态全局函数print1,不能跨文件访问
static void print1(void) {
printf("print1函数:g_a = %d\n", g_a);//可以
printf("print1函数:g_b = %d\n", g_b);//可以
}
//定义全局函数
void print(void) {
printf("print函数:g_a = %d\n", g_a);//可以
printf("print函数:g_b = %d\n", g_b); //可以
print1(); //可以访问静态全局函数
}
void inc_var(void){
    g_a++; //可以
    g_b++; //可以
}
