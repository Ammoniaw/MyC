//打印整数的位数
#include <stdio.h>
int main(void) {
    printf("请输入一个整数:");
    int integer = 0;
    scanf("%d", &integer);
    int len = 0;
    for(;;) {
        len++;
        integer /= 10; //integer = integer / 10;
        if(integer == 0)
            break;
    }
    printf("有效数据个数是:%d\n", len);
    return 0;
}
//integer = 5;
//len = 0;
//第一次循环:
//  len=1
//  integer /= 10; //integer = integer / 10 = 5 / 10 = 0;
//  退出循环
//  打印：１
//integer = 55
//len = 0;
//第一次循环
//  len=1
//  integer /= 10 = 55/10=5
//第二次循环
//  len=2
//  ...
//打印:2
//
//
