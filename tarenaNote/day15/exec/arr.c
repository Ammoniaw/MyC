//arr.c:数组的各种定义
#include "arr.h" //包含自己对应的头文件
//定义数组的操作函数
void print(int *parr, int size) {
    for(int i  = 0; i < size; i++) 
        printf("%d ", parr[i]);
    printf("\n");
}
void change(int *parr, int size) {
    for(int i  = 0; i < size; i++) 
        *(parr + i) *= 10;
}
