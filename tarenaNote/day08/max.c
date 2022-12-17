//求最大数
#include <stdio.h>
int main(void) {
    printf("请输入三个数:");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int max = a; //假设a目前最大

    if(b > max)
        max = b;

    if(c > max)
        max = c;

    printf("最大数是:%d\n", max);
    return 0;
}
