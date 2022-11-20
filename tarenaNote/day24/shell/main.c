//main.c:测试
#include "cmd.h" //声明

#define LEN (32)
static char buf[LEN];

int main(void) {
    while(1) {
        int a, b, ret = 0;
        printf("请输入命令的名称:");
        scanf("%s", buf);
        const cmd_t *pcmd;
        pcmd = find_cmd(buf);//根据名称找命令
        if(pcmd != NULL) {
            printf("请输入两个数字:");
            scanf("%d%d", &a, &b);
            ret = pcmd->callback(a, b);//调用匹配成功的命令处理函数
            printf("运算结果是:%d\n", ret);
        } else {
            if(!strcmp(buf, "quit")) {
                printf("结束程序.\n");
                return 0;
            }
            printf("没有找到命令.\n");
        }
    }
    return 0;
}
