//堆栈代码演示
#include <stdio.h>
static int g_arr[1024]; //堆栈内存,gcc默认都初始化为0
static int g_top = 0; //堆栈顶的位置信息
//定义获取容量的函数
int cap(void) {
    return sizeof(g_arr)/sizeof(g_arr[0]);
}
//定义获取目前存储的有效数据的个数函数
int size(void) {
    return g_top;
}
//定义判断满
int full(void) {
    return g_top >= cap(); //满返回1,不满返回0
}
//定义判断空
int empty(void) {
    return g_top <= 0; //空返回1不空返回0
}
//定义压数
void push(int data) {
    g_arr[g_top++] = data;
}
//定义取数
int pop(void) {
    return g_arr[--g_top];
}
int main(void) {
    int i;
    for(i = 0; i < 10; i++)
        if(!full())
            push(i);
    while(!empty()) {
        printf("%d ", pop());
    }
    printf("\n");
    return 0;
}
