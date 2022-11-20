//main.c:主文件,负责各种调用
//编译命令：gcc -o main main.c cal.c arr.c
#include "cal.h" //声明算术运算相关的内容
#include "arr.h" //声明数组操作的相关内容

int main(void) {
    printf("%d\n", add(10, 20));
    printf("%d\n", sub(10, 20));
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr, size);
    change(arr, size);
    print(arr, size);
    return 0;
}
