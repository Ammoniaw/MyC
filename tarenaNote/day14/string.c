//二维数组来表示字符串数组
#include "stdio.h"
#include <string.h>
int main(void) {
    char arr[][20] = {"beijing", "tianjing", "shanghai", "chongqing"};
    int row = sizeof(arr)/sizeof(arr[0]); //求二维数组的长度,求字符串的个数
    //打印字符串
    for(int i = 0; i < row; i++)
        printf("%s ", arr[i]);
    printf("\n");
    //arr[0] = "xinjiang"; //不允许修改
    strcpy(arr[0], "xinjiang"); //将第一个字符串对应的内存直接修改
    arr[0][2] = 'M'; //将xinjiang中的'n'修改为'M'
    //打印字符串
    for(int i = 0; i < row; i++)
        printf("%s ", arr[i]);
    printf("\n");
    return 0;
}
