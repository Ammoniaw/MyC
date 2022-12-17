//gcc的-D选项妙用,通过-D选项可以给程序传递常量宏
//gcc -DSIZE=5 -DEND=\"tarena\" -o define4 define4.c
//等价于:define SIZE  (5)  #define END  "tarena"
#include <stdio.h>
int main(void) {
    int a[SIZE]= {0};

    //初始化数组
    for(int i = 0; i < SIZE; i++)
        a[i] = i + 1;

    //打印数组值
    for(int i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    printf("\n");
    
    printf("%s\n", END);
    return 0;
}
