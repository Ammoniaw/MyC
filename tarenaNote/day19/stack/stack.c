//stack.c:堆栈的各种定义
#include "stack.h" //包含自己对应的头文件
//定义初始化堆栈的函数
void stack_init(stack_t *stack, int cap) {
    //1.给堆栈分配内存
    stack->arr = malloc(sizeof(int)*cap);
    //2.初始化容量和栈顶
    stack->cap = cap;
    stack->top = 0; //空堆栈,没有数据
}
//定义释放堆栈内存函数
void stack_deinit(stack_t *stack) {
    free(stack->arr);
    stack->cap = 0;
    stack->top = 0;
}
//定义判断堆栈满的函数
int stack_full(stack_t *stack) {
    return stack->top >= stack->cap;//满返回1否则0
}
//定义判断堆栈空的函数
int stack_empty(stack_t *stack) {
    return !stack->top;//空返回1否则返回0
}
//定义压堆栈函数
void stack_push(stack_t *stack, int data){
    stack->arr[stack->top++] = data;
}
//定义出堆栈函数
int stack_pop(stack_t *stack) {
    return stack->arr[--stack->top];
}
//定义获取堆栈有效数据个数的函数
int stack_size(stack_t *stack) {
    return stack->top;
}


