//cmd.h:命令相关的各种声明
#ifndef __CMD_H
#define __CMD_H
#include <stdio.h>
#include <string.h>
//声明函数指针类型并且取别名
typedef int (*cb_t)(int, int);
//声明描述命令属性的结构体类型
typedef struct cmd {
    const char *name; //命令的名称
    cb_t callback; //保存命令的处理函数首地址
}cmd_t;
//定义求数组元素个数的宏
#define ARRAY_SIZE(x)   (sizeof(x)/sizeof(x[0]))
//声明命令的查找函数
extern const cmd_t *find_cmd(const char *name);
#endif
