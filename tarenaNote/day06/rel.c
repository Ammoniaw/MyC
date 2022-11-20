//关系运算符演示
#include <stdio.h>
int main(void) {
    printf("1 == 1的结果是%d\n", 1 == 1); //1
    printf("1 != 1的结果是%d\n", 1 != 1); //0
    printf("1 > 2的结果是%d\n", 1 > 2); //0
    printf("1 < 2的结果是%d\n", 1 < 2); //1
    printf("2 >= 2的结果是%d\n", 2 >= 2); //1
    printf("1 <= 2的结果是%d\n", 1 <= 2); //1
    //不要进行连续的关系运算
    printf("5<4<3的结果是%d\n", 5<4<3); //1:错误的
    return 0;
}
