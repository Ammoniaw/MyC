//条件编译指令演示
#include <stdio.h>
int main(void){
    //#if演示
    //编译命令:gcc -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if
    //编译命令:gcc -DA=1 -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if
#if A==1
    printf("1.\n");
#endif //跟#if配对使用
    //#if...#else演示
    //编译命令:gcc -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if
    //编译命令:gcc -DB=1 -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if
#if B==1
    printf("2.\n");
#else
    printf("3.\n");
#endif //跟#if配对使用
    //#ifdef或者#ifndef...#else演示
    //编译命令:gcc -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if
    //编译命令:gcc -DC -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if
//#ifdef C
#ifndef C
    printf("4.\n");
#else //可以不用
    printf("5.\n");
#endif //跟#ifdef配对使用
    //if defined ...#else演示
    //编译命令:gcc -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if  7
    //编译命令:gcc -DD -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if 6
    //编译命令:gcc -DE -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if 8
    //编译命令:gcc -DD -DE -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if 6
    //编译命令:gcc -DE -DD -E -o if.i if.c; vim if.i; gcc -o if if.i; ./if 6
#if defined(D)
        printf("6.\n");
#elif !defined(D) && !defined(E)
        printf("7.\n");
#else
        printf("8.\n");
#endif //和#if defined配对使用
    return 0;
}//9:50继续
