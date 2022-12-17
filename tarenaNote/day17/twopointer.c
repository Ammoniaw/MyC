//二级指针演示
#include <stdio.h>
int main(void) {
    int n = 10; //普通变量
    int *p = &n; //一级指针变量,保存n的地址
    int **pp = &p; //二级指针变量,保存一级指针变量p的地址

    printf("n = %d, &n = %p\n", n, &n);//打印n的值和n的地址
    printf("p=%p, &p=%p, *p=%d\n", p, &p, *p);//打印p保存的地址,p本身的地址,p指向的内存值
    printf("pp=%p, &pp=%p, *pp=%p, **pp=%d\n", pp, &pp, *pp, **pp);//打印pp保存的地址,pp本身的地址,n的地址,n的值

    *p = 300; //通过一级指针访问n的地址
    printf("*p = %d\n", *p);
    
    **pp = 400; //通过二级指针访问n的地址
    printf("**pp = %d\n", **pp);
    return 0;
}
