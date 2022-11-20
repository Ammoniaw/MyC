//判断每月天数
#include <stdio.h>
int main(void) {
    printf("请输入年份:");
    int year;
    scanf("%d", &year);
    
    printf("请输入月份:");
    int month;
    scanf("%d", &month);

    if(month < 1 || month > 12) {
        printf("无效月份.\n");
        return -1;
    }

    int day = 31;
    if(month==4 || month==6 || month==9 || month==11)
        day = 30;
    else if(month == 2)
        day = 28 + 
         ((year%4 == 0 && year%100 != 0) || (year%400 == 0));

    printf("%d年%d月有%d天\n", year, month, day);
    return 0;
}
