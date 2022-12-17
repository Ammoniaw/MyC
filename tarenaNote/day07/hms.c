#include <stdio.h>
int main(void) {
    printf("请输入一个秒数:"); 
    int second;
    scanf("%d", &second);

    printf("%d小时%d分钟%d秒\n", second/3600, second%3600/60, second%60);
    return 0;
}
