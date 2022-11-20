//指针运算结果:跟指向的内存数据类型相关,前提是操作的内存空间得连续
#include <stdio.h>
int main(void) {
    char a = 'a';
    char *pa = &a;
    printf("pa = %p\n", pa);
    pa++;
    printf("pa = %p\n", pa);
    short b = 200;
    short *pb = &b;
    printf("pb = %p\n", pb);
    pb++;
    printf("pb = %p\n", pb);
    int c = 200;
    int *pc = &c;
    printf("pc = %p\n", pc);
    pc++;
    printf("pc = %p\n", pc);
    long d = 200;
    long *pd = &d;
    printf("pd = %p\n", pd);
    pd++;
    printf("pd = %p\n", pd);
    return 0;
}
