//while循环
#include <stdio.h>
int main(void) {
    int i = 0;
    while(i < 5) {
        printf("i = %d\n", i);
        i++;
    }
    i = 1;
    while(i <= 5) {
        printf("%d^2 = %d\n", i, i*i);
        i++;
    }
    printf("\n");
    
    i = 0;
    while(i++ < 5)
        printf("i = %d\n", i);//1 2 3 4 5
    printf("\n");
    
    i = 0;
    while(++i < 5)
        printf("i = %d\n", i);//1 2 3 4

    while(1) { //死循环:无限执行下去,按ctrl+c强制结束程序
        printf("hello,world\n");
    }
    return 0;
}
