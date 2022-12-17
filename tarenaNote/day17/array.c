//数组指针:就是一个指针,指向整个一个数组 8:35继续
#include <stdio.h>
int main(void) {
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    //普通玩法
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    //通过数组指针来玩
    int (*p)[4] = a;//定义初始化数组指针变量p保存二维数组的首地址a
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++)
            printf("%d ", p[i][j]);
        printf("\n");
    }
    //二维转一维
    int *p1 = (int *)a;//强制将数组指针类型转换为int类型,将来通过int类型指针一个一个访问
    for(int i = 0; i < 12; i++)
        printf("%d ", p1[i]);
    printf("\n");
    //一维转二维
    int b[] = {0,1,2,3,4,5,6,7,8,9,10,11};
    int (*p2)[4] = (int (*)[4])b; //强制将int类型的指针转换为数组指针
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++)
            printf("%d ", p2[i][j]);
        printf("\n");
    }
    return 0;
}
