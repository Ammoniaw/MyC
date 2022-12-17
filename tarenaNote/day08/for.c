//for循环演示
#include <stdio.h>
int main(void) {
    //形式1
    int i;
    for(i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }
    //形式2
    int j = 0;
    for(; j < 5; j++) 
        printf("j = %d\n", j);
    //形式3
    int k = 0;
    for(; k < 5;) {
        printf("k = %d\n", k);
        k++;
    }
    //形式4
    /*
    for(;;) { //死循环
        printf("hello,world\n");
    }
    */
    int h = 0;
    for(;;) {
        printf("h = %d\n", h);
        h++;
        if(h >= 5)
            break; //break:中断结束for循环
    }
    //形式5:
    for(int p = 0; p < 5; p++) //p只能给for循环使用,出了for循环p就不能用
        printf("p = %d\n", p);
    //printf("p = %d\n", p);//不能访问p
    //形式6
    int z = 0;
    for(z = 0; z < 5; z++) {
        if(z == 3) {
            continue;//中断结束本次循环,继续下一次循环,
                     //也就是当z=3条件成立,执行continue,后续代码不再被执行,而是直接执行表达式3也就是z++继续下一次循环
            printf("我会被执行吗?\n");
        }
        printf("z = %d\n", z);
    }
    return 0;
}

