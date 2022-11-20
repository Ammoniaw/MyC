//函数指针玩法1
#include <stdio.h>
int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}
int main(void) {
    //声明并且定义初始化函数指针变量pfunc保存add函数的首地址
    int (*pfunc)(int , int) = add; //pfunc指向add函数
    //问:函数指针变量pfunc的数据类型到底是?
    //答:int (*)(int, int),所以函数指针本质就是一种数据类型,程序员自己定义的
    //并且此数据类型将来定义的变量指向的函数的返回值是int类型,形参也是int类型
    //通过pfunc来间接调用指向的add函数,并且给add函数传递参数10,20,ret保存add函数的返回值
    int ret = pfunc(10, 20);
    printf("add返回值是%d\n", ret);
    pfunc = sub; //让pfunc保存sub函数的首地址,pfunc指向sub函数
    //通过pfunc来间接调用指向的sub函数,并且给sub函数传递参数10,20,ret保存sub函数的返回值
    ret = pfunc(10, 20);
    printf("sub返回值是%d\n", ret);
    return 0;
}
