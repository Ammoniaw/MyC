//自增(++)和自减(--)运算符演示
#include <stdio.h>
int main(void) {
    int a = 10;
    printf("%d\n", ++a); //先对a加1,结果a的值为11,然后计算++a表达式的值就是a的值11
    printf("%d\n", a);
    
    a = 10;
    printf("%d\n", a++); //先计算表达式a++的值,其值就是a的值10,将来打印也是打印a++的值10
                         //然后对a的值加1,a变为11
    printf("%d\n", a);
    
    a = 10;
    printf("%d\n", --a); //先对a减1,结果a的值为9,然后计算--a表达式的值就是a的值9
    printf("%d\n", a);
    
    a = 10;
    printf("%d\n", a--); //先计算表达式a--的值,其值就是a的值10,将来打印也是打印a--的值10
                         //然后对a的值减1,a变为9
    printf("%d\n", a);
    //10++; //gcc报错
    //变态代码
    a = 10;
    printf("%d\n", a++ + ++a);//22,11+11
    printf("%d\n", a);
    a = 10;
    printf("%d\n", ++a + a++);//22,11+11
    printf("%d\n", a);
    return 0;
}
