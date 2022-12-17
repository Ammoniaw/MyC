//指针变量演示
#include <stdio.h>
int main(void) {
    int a = 520; //分配4字节内存存储520
    int *pa = &a; //定义初始化指针变量pa,pa占4字节或者8字节内存,存储a的首地址,pa指向a
    //打印a的首地址,pa保存的地址,pa本身的地址
    printf("&a = %p, pa = %p, &pa = %p\n", &a, pa, &pa);
    //通过pa查看a的内存值
    printf("a = %d\n", *pa);
    //通过pa修改a的内存值
    *pa = 521;
    //通过pa查看a的内存值
    printf("a = %d\n", *pa);
    int b = 250; //分配4字节内存存储250
    pa = &b; //现在让pa指针变量来保存b的首地址,结果pa指向b
    //通过pa查看b的内存值
    printf("b = %d\n", *pa);
    //通过pa修改b的内存值
    *pa = 251;
    //通过pa查看b的内存值
    printf("b = %d\n", *pa);
    return 0;
}
