//recu.c:递归函数演示
#include <stdio.h>
void print(void) {
    printf("hello\n");
    print(); //自己调用自己
    printf("world\n");
}
int main(void) {
    print();
    return 0;
}
