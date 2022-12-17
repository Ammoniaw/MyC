//字符指针数组表示字符串数组
#include <stdio.h>
#include <string.h>
int main(void) {
    //定义初始化字符指针数组,数组中每个元素是字符串的首地址而不是字符串本身
    //就类似把字符串的指针放到数组中一样,字符串本身的内存在特殊的内存区域只能读不能修改
    char *parr[] = {"beijing", "tianjing", "shanghai", "chongqing"};
    int size = sizeof(parr)/sizeof(parr[0]);
    //打印字符串
    for(int i = 0; i < size; i++)
        printf("%s ", parr[i]);
    printf("\n");
    parr[0] = "xinjiang"; //arr[0]是一个指针,类似char *p,可以修改,现在保存xinjiang字符串地址
    //strcpy(parr[0], "xinjiang"); //不允许,arr[0]指向的内存beijing字符串不能修改
    //parr[0][2] = 'M'; //不允许修改
    //打印字符串
    for(int i = 0; i < size; i++)
        printf("%s ", parr[i]);
    printf("\n");
    return 0;
}//8:40继续
