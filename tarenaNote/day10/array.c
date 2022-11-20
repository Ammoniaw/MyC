//练习题
#include <stdio.h>
int main(void) {
    int a[3][4] = {0};
    int b[4][3] = {0};
    int c[3][3] = {0};
    int i, j, k;
    //构造A矩阵
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("a%d%d = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    //构造B矩阵
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) {
            printf("b%d%d = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    //C(i, j) = A(i, k) X B(k, j)
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            for(k = 0; k < 4; k++)
                c[i][j] += a[i][k] * b[k][j];
    //打印A
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) 
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("X\n");
    //打印B
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 3; j++) 
            printf("%d ", b[i][j]);
        printf("\n");
    }
    printf("=\n");
    //打印C
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) 
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
