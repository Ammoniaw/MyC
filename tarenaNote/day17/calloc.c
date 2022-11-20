//C语言分配内存的第四种方法:利用标准C库函数calloc分配
#include <stdio.h>
#include <stdlib.h> //声明calloc/free
int main(void) {
    int *p = NULL; //好习惯
    //调用calloc从堆区分配内存
    p = (int *)calloc(4, sizeof(int));//连续分配4个元素每个元素4字节大小的内存
                                        //,返回分配的内存首地址给p
    if(p == NULL) {
        printf("内存分配失败.\n");
        return -1;
    }
    printf("分配成功,分配的内存首地址是:%p\n", p);
    for(int i = 0; i < 4; i++)
        p[i] = i + 1;
    for(int i = 0; i < 4; i++)
        printf("%d ", *(p + i));
    printf("\n");
    //如果内存不再访问记得要主动的释放,否则内存泄露
    free(p);
    p = NULL; //好习惯,否则p就是一个野指针,因为此时p保存的地址对应的内存空间已经被释放了
    return 0;
}
