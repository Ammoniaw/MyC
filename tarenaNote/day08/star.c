//打印小星星
#include <stdio.h>
int main(void) {
    int h = 6;
    int i, j;
    for(i = 0; i <= h; i++) { //负责打印7行
        for(j = 0; j < (h - i); j++) { //一行打印多少个空格
            printf(" ");
        }
        for(j = 0; j < 2*i + 1; j++) { //一行打印多少个*
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
