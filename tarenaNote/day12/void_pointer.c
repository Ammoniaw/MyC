//无类型指针void*演示
#include <stdio.h>
int main(void) {
    int a = 100;
    void *p = &a; //p保存a的首地址,p指向a
    //printf("a = %d\n", *p); //gcc报错
    //1.间接法
    int *p1 = (int *)p; //将无类型指针强转为int类型指针赋值给p1,p1也保存a的首地址,p1指向a
    *p1 = 200; //一次性修改4字节
    printf("a = %d\n", *p1); //一次性读取4字节数据
    //2.直接法,不经过p1
    *(int *)p = 300; //先将p强转为int类型指针然后解引用获取内存值最后通过赋值给一个新值300
    printf("a = %d\n", *(int *)p);
    //运算
    printf("%p\n", p);
    printf("%p\n", ++p);
    printf("%p\n", ++p);
    return 0;
}
