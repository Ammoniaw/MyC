//字符串演示
#include <stdio.h>
int main(void) {
    printf("%s\n", "abcd\0"); //打印字符串的占位符:%s(s=string=字符串)
    printf("%s\n", "abcd");
    printf("%s\n", "1234\0abcd"); //1234
    printf("abcd""12345\n"); //等价于printf("abcd12345\n");
    printf("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n");
    printf("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"
                "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n");
    
    //字符串和指针的那点事儿
    char *pstr = "abc"; //pstr保存字符串abc的首地址并且gcc将字符串abc单独放到一块特殊的
                        //内存区域,此内存区域只能读不能修改
    printf("%s\n", pstr); //直接传递字符串的首地址即可
    printf("%c %c %c\n", *(pstr+0), *(pstr+1), *(pstr+2));
    printf("%c %c %c\n", pstr[0], pstr[1], pstr[2]);
    printf("%hhd %hhd %hhd %hhd\n", pstr[0], pstr[1], pstr[2], pstr[3]);
    //pstr[2] = 'C'; //不允许修改
    //字符串和数组的那点事儿
    char a[] = {'x', 'y', 'z', '\0'};//如果a要作为一个字符串,最后必须添加'\0',否则a就是数组
    printf("%s\n", a);
    a[2] = 'Z'; //可以修改,数组的内存是程序员自己分配的,当然可以修改了
    printf("%s\n", a);
    char b[] = "mnab"; //实际gcc将来给你分配5字节内存,包含结束符\0
    printf("%s\n", b);
    *(b+2) = 'A'; //可以修改
    printf("%s\n", b);
    printf("%lu\n", sizeof(b));
    return 0;
}



