//函数指针玩法2
#include <stdio.h>
int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
//声明函数指针类型(int (*)(int, int))并取别名pfunc_t
typedef int (*pfunc_t)(int, int);
int main(void) {
    //定义初始化函数指针变量pfunc保存add函数的首地址
    pfunc_t pfunc = add; //pfunc指向add函数
    //通过pfunc来间接调用指向的add函数,并且给add函数传递参数10,20,ret保存add函数的返回值
    int ret = pfunc(10, 20);
    printf("add返回值是%d\n", ret);
    pfunc = sub; //让pfunc保存sub函数的首地址,pfunc指向sub函数
    //通过pfunc来间接调用指向的sub函数,并且给sub函数传递参数10,20,ret保存sub函数的返回值
    ret = pfunc(10, 20);
    printf("sub返回值是%d\n", ret);
    return 0;
}
