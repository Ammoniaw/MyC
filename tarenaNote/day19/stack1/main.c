//利用堆栈实现10进制转2进制
#include "stack.h" //各种声明
int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("用法: %s <10进制数字>.\n", argv[0]);
        printf("例如: %s 85\n", argv[0]);
        return -1;
    }
    int data = atoi(argv[1]); //"85"->85
    //1.定义堆栈变量
    stack_t stack;
    //2.初始化堆栈
    stack_init(&stack, 8);
    //3.10进制转2进制余数压堆栈
    while(data != 0) {
        stack_push(&stack, data%2);
        data /= 2;
    }
    //4.出堆栈
    while(!stack_empty(&stack))
        printf("%d ", stack_pop(&stack));
    printf("\n");
    //5.释放堆栈内存
    stack_deinit(&stack);
    return 0;
}
