//条件分支结构演示
#include <stdio.h>
int main(void){ //10:20继续,思考：求三个数中的最大数
    //if结构
    //int a = -520;
    int a = -520;
    if(a > 0) {
        printf("a是一个正数.\n");
    }
    printf("a = %d\n", a);
    //if...else结构
    if(a > 0) {
        printf("a是一个正数.\n");
    } else {
        printf("a不是一个正数.\n");
    }
    //if...else if...结构
    if(a > 0) {
        printf("a是一个正数.\n");
    } else if(a == 0) {
        printf("a等于0.\n");
    } else if(a < 0) {
        printf("a是一个负数.\n");
    }
    //if...else if...else结构
    if(a > 0) {
        printf("a是一个正数.\n");
    } else if(a == 0) {
        printf("a等于0.\n");
    } else {
        printf("a是一个负数.\n");
    }
    return 0;
}
