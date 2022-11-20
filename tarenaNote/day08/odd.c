//odd.c:打印1~100之间的奇数
#include <stdio.h>
int main(void) {
    int i;
    for(i = 1; i <= 100; i++)
        if(i % 2)  //思路1:不能被2整除
            printf("%d ", i);
    printf("\n");

    for(i = 1; i <= 100; i += 2)
        printf("%d ", i); //思路2:等差数列
    printf("\n");

    for(i = 0; i < 50; i++)
        printf("%d ", 2*i + 1); //思路3:等差数列通项公式
    printf("\n");
    return 0;
}
