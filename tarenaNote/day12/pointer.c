//指针作为函数的形参,结果是函数通过形参指针变量可以直接访问实参变量的内存空间
#include <stdio.h>
void swap(int a, int b) {
    int c = a;
    a = b;
    b = c;
}
void swap_ok(int *pa, int *pb) { //pa=&a, pb=&b
    int c = *pa; //直接获取实参a的内存值给c
    *pa = *pb; //直接将实参b的值赋值给实参a
    *pb = c; //直接将c的值赋值给实参b
}
int main(void) {
    int a = 10, b = 20;
    swap(a, b); //交换失败,实参变量和形参变量的内存是独立的,swap函数只是修改了形参
    printf("a = %d, b = %d\n", a, b);
    swap_ok(&a, &b);//交换成功,传递实参变量的首地址给函数
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
