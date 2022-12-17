//条件运算符和逗号运算符和取地址解引用运算符演示
#include <stdio.h>
int main(void) {
    int a = (10 > 5) ? 10 : 5;
    printf("%d\n", a); //10
    a = (10 < 5) ? 10 : 5;
    printf("%d\n", a); //5
    a = 10;
    int b = 9;
    int c;
    c = (--a == b++) ? --a : b++;
    printf("%d,%d,%d\n", a, b, c);
    int i = 2, j = 4, k = 6, x, y;
    y = (x = i + j, j + k);
    printf("%d, %d\n", x, y);
    y = (x += 10, ++x);
    printf("%d, %d\n", x, y);
    int d = 520;
    printf("d变量的内存首地址是%p\n", &d);
    printf("通过d的首地址获取d的内存值是%d\n", *&d); //*和&写在一起可以抵消
    *&d = 521; //根据d的首地址修改d的内存值
    printf("通过d的首地址获取d的内存值是%d\n", *&d); //*和&写在一起可以抵消
    return 0;
}
