//回调函数演示
#include <stdio.h>
//声明函数指针类型并且取别名
typedef int (*pfunc_t)(int, int);
//定义回调函数:add和sub,回调函数的意思就是这些函数可以当成参数传递给其他函数来调用
int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
//定义调用函数cal,调用函数通过函数指针变量来间接调用回调函数
int cal(int a, int b, pfunc_t pfunc) {
    if(pfunc == NULL) 
        return a * b;//如果没有给cal函数传递回调函数,那么就用cal函数默认的相乘功能
    else //否则如果给cal函数传递了某个回调函数的地址,则调用回调函数本身的功能
        return pfunc(a, b);
}
int main(void) {
    printf("%d\n", cal(100, 200, NULL)); //就想用cal默认的相乘功能
    printf("%d\n", cal(100, 200, add)); //不想用cal默认的相乘功能而是自己编写的相加功能
    printf("%d\n", cal(100, 200, sub)); //不想用cal默认的相乘功能而是自己编写的相减功能
    return 0;
}
