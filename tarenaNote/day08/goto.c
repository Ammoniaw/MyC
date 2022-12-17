//goto语句演示
#include <stdio.h>
int main(void) {
    int a = 1;
label: //goto语句将来要跳转到的地方
    printf("1.\n");
    if(a == 1) {
        a = 0;
        goto label; //让程序毫无条件的跳转到label标签处继续向下运行
    }
    printf("2.\n");
    goto label2; //让程序毫无条件的跳转到label2标签处继续向下运行
    printf("3.\n");
    printf("3.\n");
    printf("3.\n");
    printf("3.\n");
label2:
    printf("4.\n");
    //实现0+1+2+...+100
    int m = 0;
    int sum = 0;
next:
    if(m <= 100) {
        sum += m;
        m++;
        goto next;
    }
    printf("sum = %d\n", sum);
    return 0;
}
