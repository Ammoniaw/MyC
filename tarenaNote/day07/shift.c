//移位运算符演示
#include <stdio.h>
int main(void) {
    char a = 0x5a; //01011010
    char b = a << 2; //a左移2位,b=01101000=0x68,此过程发生高位溢出,01移没了
    printf("a = %#x, b = %#x\n", a, b);
    short c = a << 2; //c = 01 0110 1000 = 0x168,高位没有溢出
    printf("a = %d, c = %d\n", a, c);

    //a此时的符号位为0,右移用0来填充
    b = a >> 2; //b = 00010110 = 0x16
    printf("a = %#x, b = %#x\n", a, b);
    
    //a此时的符号位为1,右移用1来填充
    a = 0xa5; //10100101
    b = a >> 2; //b = 11101001 = 0xe9
    printf("a = %#x, b = %#x\n", a, b);
    printf("a = %#hhx, b = %#hhx\n", a, b);
    return 0;
}
