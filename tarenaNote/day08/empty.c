//empty.c:空语句演示,空语句就是一个分号;
#include <stdio.h>
int main(void) {
    ; //空语句,什么也不做
    
    //1.应用场景一:空死循环
    /*
    printf("1.\n");
    for(;;); //循环体就是一个空语句;
    printf("2.\n");
    */

    //2.应用场景二:空循环,主要起到延时等待的作用
    printf("3.\n");
    int i = 900000000;
    for(; i >= 0; i--); //此时程序会在这里空循环i此,让程序在这里延时一会儿
    printf("4.\n");

    //3.应用场景三:简化代码
    //求n的阶乘
    printf("请输入一个整数:");
    int n;
    scanf("%d", &n);
    int fact;
    for(fact = 1; n; fact *= n--);
    printf("%d\n", fact);

    //可悲的事情
    int j;
    for(j = 0; j < 5; j++); //不小心加了一个分号,结果是有效的５次循环变成了空循环
        printf("j = %d\n", j); //此时此条语句不再隶属于for循环
    return 0;
}
