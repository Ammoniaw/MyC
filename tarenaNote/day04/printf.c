/*printf函数功能：将双引号里面的内容打印输出到显示器上
 * 实验步骤：
 * cd /home/tarena/stdc/day04
 * vim printf.c 编辑
 * gcc -o printf printf.c 编译,建议你们采用分步法
 * ./printf 运行
 */
#include <stdio.h> //就是为了能够使用printf这个函数
int main(void) {
    printf("hello, world");
    printf("1234\n"); //\n作用:让光标移动到下一行的行首
    printf("abcd\n");
    
    printf("%d\n", 520); //%d:占位符,帮你占一个位置,将来可以放打印输出的一个整形数字
    printf("%d, %d, %d\n", 520, 1+2, 2*3);
    
    int a = 520; //分配4字节内存并且存储520这个整形数字,int就是整形数据类型
    printf("%d\n", a); //打印a变量对应的内存值520
    a = 521; //修改a变量对应的内存值为521
    printf("%d\n", a); //打印a变量对应的内存值521

    int b; //只分配了4字节内存并没有初始化,b的内存值将会是一个可怕的随机数
    printf("b = %d\n", b);
    b = 250;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

