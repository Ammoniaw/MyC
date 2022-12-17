//空指针(地址编号为0的地址)和野指针(该指针对应的内存不是合法分配好的内存)
#include <stdio.h>
int main(void) {
    //空指针
    int *pa = NULL; //定义初始化指针变量pa,pa保存的地址是编号为0的地址 
    printf("%d\n", *pa); //通过pa访问空指针崩溃
    *pa = 520; //同样崩溃

    //野指针
    int *pb; //只定义不初始化那么pb保存一个乱七八糟的随机地址(这个内存不是合法分配的内存)
            //有可能造成程序的崩溃
    printf("pb = %p\n", pb);//新版本gcc一律给NULL,老版本可能还给你一个随机地址
    printf("%d\n", *pb);
    return 0;
}//9:55继续

