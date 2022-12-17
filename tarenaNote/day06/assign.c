//赋值运算符演示:=
#include <stdio.h>
int main(void) {
    int a, b, c;
    a = 100;
    printf("a = %d\n", a);
    a = b = c = 200; //c = 200, b = c, a = b; //不推荐
    printf("%d, %d, %d\n", a, b, c);
    /*200 = a; //gcc报错
    a + b = c; //gcc报错
    (a = b) = 300; //gcc先算圆括号里面的内容,而圆括号是一个表达式
    */
    a += b; //等价于:a = a + b;
    printf("a = %d, b = %d\n", a, b);
    a -= b; //等价于:a = a - b;
    printf("a = %d, b = %d\n", a, b);
    a *= b; //等价于:a = a * b;
    printf("a = %d, b = %d\n", a, b);
    a /= b; //等价于:a = a / b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
