//do-while循环演示
#include <stdio.h>
int main(void) {
    do {
        printf("hello,world\n");
    }while(0);

    int i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    }while(i < 5);

    //实现0+1+2+...+100
    int m = 0;
    int sum = 0; //sum可不可以不初始化呢,例如：int sum;
    do {
        sum += m;
    }while(m++ < 100);
    printf("sum = %d\n", sum);
    return 0;
}
