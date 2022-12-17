//宏函数演示
//实验步骤:gcc -E -o define1.i define1.c  vim define1.i gcc -o define1 define1.i ./define1
#include <stdio.h>
#define SQUARE_1(x)     (x*x) //定义宏函数求平方
#define SQUARE_2(x)     ((x)*(x)) //定义宏函数求平方
#define SUB(x, y)       ((x) - (y))
#define MAX(x, y)       ((x)>(y)?(x):(y)) //求最大数
#define IS_EVEN(n)      ((n)%2 == 0) //判断是否是偶数
int main(void) {
    printf("%d\n", SQUARE_1(10));
    printf("%d\n", SQUARE_1(3+7));
    printf("%d\n", SQUARE_2(10));
    printf("%d\n", SQUARE_2(3+7));
    printf("%d\n", SUB(200, 100));
    int a = 10, b = 20;
    printf("%d\n", MAX(a, b));
    printf("%lf\n", MAX(3.1, 3.2));
    printf("%d\n", IS_EVEN(a));
    printf("%d\n", IS_EVEN(a+1));
    printf("%d\n", IS_EVEN(a+2));
    return 0;
}

