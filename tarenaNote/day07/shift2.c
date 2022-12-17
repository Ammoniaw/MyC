#include <stdio.h>
int main(void) {
    printf("请输入一个整数:[-128,127]:");
    char c;
    scanf("%hhd", &c);//85->01010101
    printf("转为二进制:");
    unsigned char mask = 128; //1000 0000
    //c&mask=85&mask=0101 0101 & 1000 0000 = 0
    printf("%c", c & mask ? '1':'0'); //0
    //mask>=1 => mask = mask >> 1 = 1000 0000 >> 1 = 0100 0000
    mask >>= 1;
    //c&mask=85&mask=0101 0101 & 0100 0000 = 0100 0000 = 2的6次方=64
    printf("%c", c & mask ? '1':'0'); //1
    //mask>=1 => mask = mask >> 1 = 0100 0000 >> 1 = 0010 0000
    mask >>= 1;
    //c&mask=85&mask=0101 0101 & 0010 0000 = 0
    printf("%c", c & mask ? '1':'0'); //0
    mask >>= 1;
    printf("%c", c & mask ? '1':'0');
    mask >>= 1;
    printf("%c", c & mask ? '1':'0');
    mask >>= 1;
    printf("%c", c & mask ? '1':'0');
    mask >>= 1;
    printf("%c", c & mask ? '1':'0');
    mask >>= 1;
    printf("%c", c & mask ? '1':'0');
    printf("\n");
    return 0;
}//10:00继续
