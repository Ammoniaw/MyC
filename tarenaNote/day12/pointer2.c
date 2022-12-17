//指针作为函数的返回值:此类函数又称指针函数,不能返回局部变量的地址,其他变量地址可以返回
#include <stdio.h>
extern int *A(void);//声明指针函数
int main(void) {
    int *p = A(); //调用指针函数并且用p来保存返回值的地址
    printf("p = %p\n", p);
    *p = 3000;
    printf("%d\n", *p);
    return 0;
}
int g_a = 520; //全局变量
static int g_b = 520; //静态全局变量
int *A(void) {//定义指针函数
    int a = 520; //局部变量
    static int b = 520; //静态局部变量
    //return &a; //最后返回一个野指针,因为a会随着函数的执行完毕其内存也会被回收
    //return &b; //可以,以前b只能用于A函数,现在通过返回他的地址给main,main函数竟然
                //也可以访问b变量了,太棒了
    //return &g_a; //可以,以前g_a只能用于定义的后面函数才能访问,
                //现在通过返回他的地址给main,main函数竟然,也可以访问g_a变量了,太棒了
    return &g_b; //可以,以前g_b只能用于定义的后面函数才能访问,
                //现在通过返回他的地址给main,main函数竟然,也可以访问g_b变量了,太棒了
}
