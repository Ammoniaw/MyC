//C语言分配内存的第四种方法:利用标准C库函数malloc分配
#include <stdio.h>
#include <stdlib.h> //声明malloc/free
int main(void) {
    int *p = NULL; //好习惯
    //调用malloc从堆区分配内存
    p = (int *)malloc(8);//连续分配8字节内存,返回分配的内存首地址给p
    if(p == NULL) {
        printf("内存分配失败.\n");
        return -1;
    }
    printf("分配成功,分配的内存首地址是:%p\n", p);
    *(p + 0) = 520; //前4字节写入数据520
    *(p + 1) = 521; //后4字节写入数据521
    printf("%d, %d\n", p[0], p[1]);
    //如果内存不再访问记得要主动的释放,否则内存泄露
    free(p);
    p = NULL; //好习惯,否则p就是一个野指针,因为此时p保存的地址对应的内存空间已经被释放了
    return 0;
}
