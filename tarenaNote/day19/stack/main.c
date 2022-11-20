//main.c:测试
#include "stack.h" //各种声明
int main(void) {
    //1.定义堆栈变量
    stack_t stack;
    //2.初始化堆栈
    stack_init(&stack, 10);
    //3.压堆栈
    int data = 1;
    while(!stack_full(&stack))
        stack_push(&stack, data++);
    printf("有效数据个数:%d\n", stack_size(&stack));
    //4.出堆栈
    while(!stack_empty(&stack))
        printf("%d ", stack_pop(&stack));
    printf("\n");
    printf("有效数据个数:%d\n", stack_size(&stack));
    //5.释放堆栈内存
    stack_deinit(&stack);
    return 0;
}
