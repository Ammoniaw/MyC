//开关分支演示
#include <stdio.h>
int main(void) {
    printf("请输入一个季节编号:");
    int season;
    scanf("%d", &season);
    switch(season) {
        case 1:
            printf("春天.\n");
            printf("万物复苏.\n");
            break;
        case 2:
            printf("夏天.\n");
            printf("生机勃勃.\n");
            break;
        case 3:
            printf("秋天.\n");
            printf("秋高气爽.\n");
            break;
        case 4:
            printf("冬天.\n");
            printf("白雪皑皑.\n");
            break;
        default:
            printf("季节编号不对.\n");
            break;
    }//错误情况
    /*float b = 1.0;
    switch(b) { //不能是浮点数
        case 1.0: 
            break;
    }
    switch("abc") { //不能是字符串
        case "abc":
            break;
    }
    int a = 520;
    switch(a) {
        case 520:
            break;
        case 520: //不能重复
            break;
    }*/
    int a = 520;
    switch(a) {
        case 520:
            printf("520.\n");
        case 521:
            printf("521.\n");
        case 522:
            { //如果里面定义变量了，就必须添加一对花括号
                int b = 522; //此变量只能用于花括号内部，出了花括号就不行
                printf("%d.\n", b);
                break;
            }
        case 523:
            printf("523.\n");
            break;
    }
    //printf("%d.\n", b); //不允许访问
    return 0;
}
