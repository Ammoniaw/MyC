//逻辑运算符
#include <stdio.h>
int main(void) {
    //逻辑与&&
    printf("%d\n", 5 > 3 && 5 < 8); //1
    printf("%d\n", 5 > 3 && 5 > 8); //0
    printf("%d\n", 5 < 3 && 5 < 8); //0
    printf("%d\n", 5 < 3 && 5 > 8); //0
    printf("5<4<3的结果是%d\n", 5 < 4 && 4 < 3);
    //逻辑或||
    printf("%d\n", 5 > 3 || 5 < 8); //1
    printf("%d\n", 5 > 3 || 5 > 8); //1
    printf("%d\n", 5 < 3 || 5 < 8); //1
    printf("%d\n", 5 < 3 || 5 > 8); //0
    //逻辑非
    printf("%d\n", !(10 > 20));//先算圆括号, 1
    printf("%d\n", !520); //0
    //短路
    int a = 10;
    printf("%d\n", 5 > 3 && (a = 100));//1
    printf("%d\n", a);//100
    printf("%d\n", 5 < 3 && (a = 200));//0
    printf("%d\n", a);//100
    printf("%d\n", 5 > 3 || (a = 300));//1
    printf("%d\n", a);//100
    printf("%d\n", 5 < 3 || (a = 400));//1
    printf("%d\n", a);//400
    return 0;
}
