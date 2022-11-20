//const关键字演示
#include <stdio.h>
int main(void) {
    //1.修饰普通变量
    const int a = 520; //a以后不能改
    //a = 521; //不可以
    printf("a = %d\n", a);//可以
    //2.常量指针(实际开发必用)
    int b = 520;
    const int *p = &b; //定义初始化常量指针p,p指向的内存值不能修改,但p保存的地址可以修改
    //*p = 521; //不可以
    printf("b = %d\n", *p);
    int c = 521;
    p = &c; //可以,p保存c的首地址
    //*p = 521; //不可以
    printf("c = %d\n", *p);
    //3.指针常量
    int d = 100;
    int* const p1 = &d; //定义初始化指针常量p1,p1指向的内存值可以修改但是保存的地址不能改
    *p1 = 200; //可以
    printf("d = %d\n", *p1);
    //p1 = &c; //不可以,p1永远指向d
    //4.常量指针常量
    int e = 400;
    const int * const p2 = &e;//p2只能指向e并且内存不能修改
    //*p2 = 500; //不可以
    //p2 = &d; //不可以
    printf("e = %d\n", *p2); //可以
    return 0;
}//11:20继续
