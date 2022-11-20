//函数和数组的那点事儿:函数访问数组分配的内存编程公式
#include <stdio.h>
#include <stdlib.h> //声明exit函数
//第三步:函数声明
extern void print(int a[], int size);
extern void change(int a[], int size);
int main(void) {
    int array[5] = {1, 2, 3, 4, 5}; //定义初始化数组
    int size = sizeof(array)/sizeof(array[0]); //换算数组元素个数
    //第二步:函数调用
    print(array, size);//调用print并且传递数组的首地址array(数组名就是数组的首地址)和元素数
    change(array, size);
    print(array, size);
    return 0;
}
//第一步:函数定义
//切记:第一个形参int a[],不是数组,a本质是一个指针(后面讲),a保存着数组的首地址array
//并且将来通过a来访问数组跟通过数组名array访问数组一模一样
void print(int a[], int size) {
    int q;
    scanf("%d", &q);
    if(!q) {
        printf("再见!\n");
        exit(0);//调用库函数传递参数0,立刻结束程序
    }
    for(int i = 0; i < size; i++)
        printf("%d ", a[i]);
    printf("\n");
    return; //返回到main函数继续运行
}
void change(int a[], int size) {
    for(int i = 0; i < size; i++)
        a[i] *= 10; //通过此函数直接修改实参数组的内存值 
}
