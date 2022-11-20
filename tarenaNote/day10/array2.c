//二维数组相关公式
#include <stdio.h>
int main(void) {
    int a[5][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    printf("a的首地址是%p\n", a);
    printf("a[0]的首地址是%p\n", a[0]);
    printf("&a[0][0]的首地址是%p\n", &a[0][0]);
    printf("sizeof(a)=%lu\n", sizeof(a));//获取总的内存大小
    printf("sizeof(a[0])=%lu\n", sizeof(a[0]));//获取第1个一维数组内存大小
    printf("sizeof(a[0][0])=%lu\n", sizeof(a[0][0]));//获取第1个一维数组中第一个元素内存大小
    printf("sizeof(a)/sizeof(a[0])=%lu\n", sizeof(a)/sizeof(a[0]));//获取行数
    printf("sizeof(a[0])/sizeof(a[0][0])=%lu\n", sizeof(a[0])/sizeof(a[0][0]));//获取列数
    printf("sizeof(a)/sizeof(a[0][0])=%lu\n", sizeof(a)/sizeof(a[0][0]));//获取元素个数
    int row = sizeof(a)/sizeof(a[0]); //换算行数
    int col = sizeof(a[0])/sizeof(a[0][0]); //换算列数
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
