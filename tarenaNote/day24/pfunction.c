//函数指针玩法：快排
//man qsort 查看qsort函数的帮助文档
#include <stdio.h>
#include <stdlib.h>
int intcmp(const void *p1, const void *p2) {
    return *(const int *)p1 - *(const int *)p2;
}
int main(void) {
    int data[] = {9,0,7,2,5,4,1,6,3,8};
    int size=sizeof(data)/sizeof(data[0]);
    qsort(data, size, 4, intcmp);
    for(int i = 0; i < size; i++)
        printf("%d ", data[i]);
    printf("\n");
    return 0;
}//3:25继续
