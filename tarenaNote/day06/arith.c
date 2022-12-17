//算术运算符演示:+/-/*///%
#include <stdio.h>
int main(void) {
    int a = 5, b = 2, c = 0;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    //printf("a / c = %d\n", a / c); //程序崩溃
    //printf("a %% c = %d\n", a % c); //程序崩溃
    double  d = 0;
    printf("a / d = %lf\n", a / d); //inf=无穷大
    //printf("a %% d = %lf\n", a % d); //gcc报错
    printf("%d, %d\n", -7/3, 7/-3);
    printf("%d, %d\n", -7%3, 7%-3);
    return 0;
}
