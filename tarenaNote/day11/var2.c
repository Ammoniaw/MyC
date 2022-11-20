//var2.c:只负责调用访问var1.c的各种变量和函数
//gcc -o var var1.c var2.c 将两个.c生成一个可执行程序
#include <stdio.h>
void A(void) {
    //g_a++; //不可以
}
//声明var1.c定义的全局变量和全局函数
extern int g_a; //不要给初值
//extern int g_b;  //不可以
extern void print(void);
//extern void print1(void); //不可以
extern void inc_var(void);
int main(void) {
    printf("main函数:g_a=%d\n",g_a);//可以
//printf("main函数:g_a=%d\n",g_b);//不可以
    print();//可以
    //print1();//不可以
    inc_var(); //可以
    print();//可以
    return 0;
}
