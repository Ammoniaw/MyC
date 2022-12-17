//对齐和补齐
#include <stdio.h>
struct A {
    char buf[2];//CCXX
    int a;//IIII
};//8
struct B {
    char c;//CX
    short s[2];//SSSSXX
    int i;//IIII
};//12
//让gcc强制从这里开始往后的代码
//按照１字节/补齐进行编译
#pragma pack(1)
struct C {
    char c;
    short s[2];
    int i;
};//9
//让gcc强制从这里开始往后的代码
//重新恢复到之前的方式进行对齐补齐
#pragma pack()
struct D {
    int i; //IIII
    char c;//CXXX
};//8
struct E {
    double d; //DDDDDDDD
    char c;//CXXXXXXX(64)/CXXX(32)
};//64:16, 32:12
int main(void) {
    printf("%lu\n", sizeof(struct A));
    printf("%lu\n", sizeof(struct B));
    printf("%lu\n", sizeof(struct C));
    printf("%lu\n", sizeof(struct D));
    printf("%lu\n", sizeof(struct E));
    struct A sa;
    printf("%p, %p\n", sa.buf, &sa.a);
    return 0;
}//3:10继续,把成员地址打印出来观察
