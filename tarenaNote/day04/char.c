//char.c:字符类型char/unsigned char演示
#include <stdio.h>
int main(void) {
    char c = 'A'; //分配1字节内存并且存储字符A的ASCII吗65
    printf("c = %c\n", c); //按照字符常量的形式显示
    printf("c = %hhd\n", c); //按照ASCII吗形式形式
    c = c + 1; //本质就是c = 65 + 1 = 66
    printf("c = %c\n", c); //按照字符常量的形式显示
    printf("c = %hhd\n", c); //按照ASCII吗形式形式
    c = 67;
    printf("c = %c\n", c); //按照字符常量的形式显示
    printf("c = %hhd\n", c); //按照ASCII吗形式形式
    printf("%d\n", 'd' - 'a'); //本质是100-97 = 3
    scanf("%c", &c); //按照字符常量的形式从键盘上输入保存c中
    printf("c = %c\n", c); //按照字符常量的形式显示
    printf("c = %hhd\n", c); //按照ASCII吗形式形式
    scanf("%hhd", &c); //按照ASCII吗形式从键盘上输入保存c中
    printf("c = %c\n", c); //按照字符常量的形式显示
    printf("c = %hhd\n", c); //按照ASCII吗形式形式
    //转义字符演示
    printf("hello\n"); //hello
    printf("hello\r123456\n"); //123456
    printf("%d\t%d\n", 100, 200);//100  200
    printf("%d\v%d\n", 100, 200);//100  
                                 //     200
    printf("hello\bworld\n"); //hellworld
    printf("\a\a\a"); //响铃
    printf("hello\\world\n");//hello\world
    printf("\'hello\'\n"); //'hello'
    printf("\"hello\"\n"); //"hello"
    printf("100%%\n"); //100%
    return 0;
}//4:20继续
