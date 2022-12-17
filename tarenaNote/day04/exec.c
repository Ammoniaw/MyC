//练习：
//1.将数字字符转成对应的整数:'5'->5
//2.小写字母转大写字母
#include <stdio.h>
int main(void) {
    char c = '5';
    int i;
    i = c - '0'; //实际是字符5的ASCII吗53-字符0的ASCII吗48 = 5
    printf("i = %d\n", i); // i = 5

    char c1;
    printf("请输入一个小写字母:");
    scanf("%c", &c1);
    printf("转换成大写字母是:%c\n", c1 - ('a' - 'A'));
    return 0;
}
