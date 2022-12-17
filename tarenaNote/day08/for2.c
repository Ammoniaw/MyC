//for练习
#include <stdio.h>
int main(void) {
    //实现0+1+2+...+100
    int i;
    int sum = 0;
    for(i = 0; i <= 100; i++)
        sum += i;
    printf("sum = %d\n", sum);

    //打印矩阵星图20(一行20个*)*10(10行)
    for(int m = 0; m < 10; m++) { //负责打印10行
        for(int n = 0; n < 20; n++) { //打印打印一行20个*
            printf("*"); 
        }
        printf("\n");
    }
    return 0;
}
