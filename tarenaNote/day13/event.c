//迷你备忘录
#include <stdio.h>
#include <string.h>
int main(void) {
    printf("==========\n");
    printf("迷你备忘录\n");
    printf("==========\n");
    char event[31][256];  //分配内存记录事件信息
    //初始化二维数组
    for(int i = 0; i < 31; i++)
        event[i][0] = '\0';
    for(;;) {
        printf("备忘信息:");
        int nday = -1;
        scanf("%d", &nday);
        scanf("%*c");
        if(nday < 0 || 31 < nday) {
            printf("无效日期.\n");
            continue;
        }
        if(nday == 0)
            break;
        scanf("%s", event[nday-1]);
    }
    printf("------------\n");
    printf("备忘信息列表\n");
    printf("------------\n");
    for(int i = 0; i < 31; i++) 
        if(strlen(event[i]))
            printf("%d日: %s\n", i+1, event[i]);
    printf("------------\n");
    return 0;
}//9:40继续
