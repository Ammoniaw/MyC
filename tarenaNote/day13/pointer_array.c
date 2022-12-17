//指针数组演示
#include <stdio.h>
int main(void) {
    int a = 10;
    int b = 20;
    int c = 30;
    int *parr[3] = {&a, &b, &c};//定义初始化指针数组parr,每个元素都是一个地址
                                //后续的玩法跟普通数组一模一样
    int size = sizeof(parr)/sizeof(parr[0]); //求数组元素个数
    //打印值
    for(int i = 0; i < size; i++)
        printf("%d %d\n", *parr[i], **(parr+i));
    //修改值
    for(int i = 0; i < size; i++) {
        *parr[i] *= 10;
        **(parr+i) *= 10;
    }
    //打印值
    for(int i = 0; i < size; i++)
        printf("%d %d\n", *parr[i], **(parr+i));
    return 0;
}
