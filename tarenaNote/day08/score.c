#include <stdio.h>
int main(void) {
    printf("请输入一个分数:");
    int score;
    scanf("%d", &score);
    if(score < 0 || score > 100) {
        printf("无效分数.\n");
        return -1;//结束程序
    }
    switch(score/10) {
        case 10:
        case 9:
            printf("A.\n");
            break;
        case 8:
            printf("B.\n");
            break;
        case 7:
            printf("C.\n");
            break;
        case 6:
            printf("D.\n");
            break;
        default:
            printf("E.\n");
            break;
    }
    //0x5a的数据类型是int类型,4字节,32位
    //0x5a完整的二进制:0000 0000 0000 0000 0000 0000 0101 1010
    //~0x5a:           1111 1111 1111 1111 1111 1111 1010 0101
    //16进制        　　f    f    f    f     f   f    a    5
    printf("~0x5a的结果是%#x\n", ~0x5a);
    return 0;
}
