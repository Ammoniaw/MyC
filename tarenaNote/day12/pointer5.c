//通过无类型指针访问任意大小的内存空间
#include <stdio.h>
int main(void) {
    int a = 0x12345678;
    void *p = &a; //p指向a
    //1.通过无类型指针访问任意1字节数据,间接法
    char *p1 = (char *)p;//将无类型的指针p强转为char类型指针赋值给p1,p1保存a的首地址
    printf("%#x\n", *p1++);//先算*p1=0x78,作为*p1++表达式的值将来打印然后让p1自增1指向0x56
    printf("%#x\n", *p1++);//0x56
    printf("%#x\n", *p1++);//0x34
    printf("%#x\n", *p1++);//0x12
    //直接法
    printf("%#x\n", *(char *)(p+0));//0x78
    printf("%#x\n", *(char *)(p+1));//0x56
    printf("%#x\n", *(char *)(p+2));//0x34
    printf("%#x\n", *(char *)(p+3));//0x12
    //2.通过无类型指针访问任意2字节数据,间接法
    short *p2 = (short *)p;//将无类型的指针强转为short类型指针赋值给p2,p2保存a的首地址
    printf("%#x\n", *p2++);//先算*p2=0x5678,作为*p2++表达式的值将来打印然后让p2自增1指向0x34
    printf("%#x\n", *p2++);//0x1234
    //直接方法
    printf("%#x\n", *(short *)(p+0)); //0x5678
    printf("%#x\n", *(short *)(p+2)); //0x1234
    //3.通过有类型指针访问4字节数据
    int *p3 = (int *)p;
    printf("%#x\n", *p3); //0x12345678
    printf("%#x\n", *(int *)p);
    //课下自行修改其中任意2字节或者4字节数据
    return 0;
}
