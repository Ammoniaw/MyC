//stack.h:堆栈的各种声明
#ifndef __STACK_H
#define __STACK_H
//包含公共的头文件
#include <stdio.h>
#include <stdlib.h>
//声明描述堆栈信息的结构体类型
typedef struct stack {
    int *arr; //堆栈的首地址
    int cap; //堆栈的容量
    int top; //堆栈的栈顶
}stack_t;
//声明堆栈的操作函数
extern void stack_init(stack_t *stack,int cap); //初始化堆栈
extern void stack_deinit(stack_t *stack); //释放堆栈内存
extern int stack_full(stack_t *stack); //判断堆栈是否满
extern int stack_empty(stack_t *stack); //判断堆栈是否空
extern void stack_push(stack_t *stack, int data);//压堆栈
extern int stack_pop(stack_t *stack); //弹堆栈
extern int stack_size(stack_t *stack); //获取堆栈有效数据个数
#endif
