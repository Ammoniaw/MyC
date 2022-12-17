//数据类型转换
#include <stdio.h>
int main(void){
    //1.隐士转换:小转大,整转浮,有转无
    //因为里面有0.9,gcc给他的默认类型是double,1的数据类型是int类型
    //所以gcc自动偷偷摸摸将int类型的1转换成double类型的1,所以
    //整个表达式的结果就是对double类型的1求内存大小
    printf("sizeof(1?1:0.9)的结果是:%lu\n", sizeof(1?1:0.9));
    //gcc给这三个数字的类型都是int类型所以无需转换直接运算 
    printf("-7 + 3 > 0的结果是:%d\n", -7 + 3 > 0);
    //由于3后面有u,所以gcc给他的默认类型是unsigned int类型,所以gcc
    //偷偷摸摸的将有符号类型的-7转换成无符号在和3做加法运算结果显然大于０
    printf("-7 + 3u > 0的结果是:%d\n", -7 + 3u > 0);
    printf("-7对应的无符号数值是:%u\n", -7);//务必从二进制角度去考虑

    //2.强制转换
    printf("(char)300强转的结果是%d\n", (char)300);//将默认的int类型300强转换为char类型
    int a = 555;
    char b = (char)a;
    printf("a = %d, b = %d\n", a, b); //a = 555, b = 43
   
    int c = 520;
    long d = (long)c; //安全

    long e = 520;
    int f = (int)e; //不安全:32位系统安全的,64位系统不安全
    return 0;
}
