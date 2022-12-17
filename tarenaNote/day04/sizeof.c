//sizeof.c:sizeof关键字演示：求内存大小
#include <stdio.h>
int main(void) {
    printf("%lu\n", sizeof(char)); //1
    printf("%lu\n", sizeof(unsigned char)); //1
    printf("%lu\n", sizeof(short)); //2
    printf("%lu\n", sizeof(int)); //4
    printf("%lu\n", sizeof(unsigned long)); //8
    printf("%lu\n", sizeof(unsigned long long)); //8
    printf("%lu\n", sizeof(float)); //4
    printf("%lu\n", sizeof(double)); //8

    unsigned int a = 520;
    printf("%lu\n", sizeof(a)); //4
    printf("%lu\n", sizeof(520)); //4,gcc给520的默认数据类型是int类型
    printf("%lu\n", sizeof(1+1)); //4
    
    sizeof(a = 521);
    printf("a = %d\n", a); //a = 520
    return 0;
}
