//常量宏演示
//gcc -E -o define.i define.c //预处理
//vim define.i 按G跳转到文件的尾部观察替换结果
//gcc -o define define.i 
//./define
#include <stdio.h>
#define  PI     (3.1415926) //定义常量宏PI,其值是3.14,提高代码的可移植性
int main(void) {
    double r = 10; 
    //垃圾代码,如果将来发现3.14圆周率不够,需要大量的修改3.14,极其麻烦
    printf("面积:%lf\n", 3.14*r*r);
    printf("周长:%lf\n", 2*3.14*r);
    //优秀代码,如果将来发现3.14圆周率不够,只需修改PI宏值即可
    printf("面积:%lf\n", PI*r*r);
#undef PI
    printf("周长:%lf\n", 2*PI*r);
    return 0;
}
