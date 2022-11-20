//cmd.c:命令相关的各种定义
#include "cmd.h"
//定义命令的处理函数
static int cmd_add(int a, int b) {
    return a + b;
}
static int cmd_sub(int a, int b) {
    return a - b;
}
//定义初始化操作命令
const cmd_t cmd_tbl[] = {
    {"add", cmd_add}, //add命令的信息
    {"sub", cmd_sub} //sub命令的信息
};
//定义查找命令的函数
const cmd_t *find_cmd(const char *name) {
    for(int i = 0; i < ARRAY_SIZE(cmd_tbl); i++) {
        if(!strcmp(name, cmd_tbl[i].name))
            return &cmd_tbl[i];//返回匹配成功的命令首地址
    }
    return NULL;//没有找到
}
