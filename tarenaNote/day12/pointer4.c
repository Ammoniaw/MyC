//通过有类型指针访问任意大小的内存空间
#include <stdio.h>
int main(void) {
    int a = 0x12345678;
    //1.通过有类型指针访问任意1字节数据
    char *p1 = (char *)&a;//将int类型的指针&a强转为char类型指针赋值给p1,p1保存a的首地址
    printf("%#x\n", *p1++);//先算*p1=0x78,作为*p1++表达式的值将来打印然后让p1自增1指向0x56
    printf("%#x\n", *p1++);//0x56
    printf("%#x\n", *p1++);//0x34
    printf("%#x\n", *p1++);//0x12
    //2.通过有类型指针访问任意2字节数据
    short *p2 = (short *)&a;//将int类型的指针&a强转为short类型指针赋值给p2,p2保存a的首地址
    printf("%#x\n", *p2++);//先算*p2=0x5678,作为*p2++表达式的值将来打印然后让p2自增1指向0x34
    printf("%#x\n", *p2++);//0x1234
    //3.通过有类型指针访问4字节数据
    int *p3 = &a;
    printf("%#x\n", *p3); //0x12345678
    //打印0x3456
    printf("%#x\n", *(short *)((char *)&a+1));
    //4.修改任意1字节数据
    p1 = (char *)&a; //让p1重新指向a的首地址
    *p1++ = 0x12; //0x78->0x12
    *p1++ = 0x34; //0x56->0x34
    *p1++ = 0x56; //0x34->0x56
    *p1++ = 0x78; //0x12->0x78
    //验证打印
    p1 = (char *)&a; //让p1重新指向a的首地址
    printf("%#x\n", *p1++);//0x12
    printf("%#x\n", *p1++);//0x34
    printf("%#x\n", *p1++);//0x56
    printf("%#x\n", *p1++);//0x78
    //课下自行修改其中任意2字节或者4字节数据
    return 0;
}
