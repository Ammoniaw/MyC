//二级指针的应用
//切记:如果将来一个函数要修改一级指针的指向时,此函数的形参必须传递二级指针
#include <stdio.h>
void swap(char *p1, char *p2) {//p1=pa=指向hello,p2=pb=指向world
    char *p3 = p1;
    p1 = p2;
    p2 = p3;
}
void swap_ok(char **p1, char **p2) {//p1=&pa, p2=&pb
    char *p3 = *p1;
    *p1 = *p2;
    *p2 = p3;
}
int main(void) {
    char *pa = "hello";
    char *pb = "world";
    //目标:调用交换函数swap实现两个字符串交换
    swap(pa, pb);
    printf("pa = %s, pb = %s\n", pa, pb);//交换失败
    swap_ok(&pa, &pb);
    printf("pa = %s, pb = %s\n", pa, pb);//交换失败
    return 0;
}
