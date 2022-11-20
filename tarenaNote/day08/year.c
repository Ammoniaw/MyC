//判断闰年
//闰年：能被4整除而不能被100整除或者能够被400整除
#include <stdio.h>
int main(void) {
    int year;
    printf("请输入一个年份:");
    scanf("%d", &year);
    
    if((year%4 == 0 && year%100 != 0) || (year%400 == 0))
        printf("闰年.\n");
    else
        printf("平年.\n");
    return 0;
}
