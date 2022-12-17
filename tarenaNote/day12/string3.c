//字符串处理的标准C库函数(大神写好的代码咱直接拿来用)
#include <stdio.h>
#include <string.h> //声明字符串处理的函数
int main(void) {
    //1.strlen:获取字符串中有效字符个数,不包含\0
    char *p1 = "abc";
    //注意:给一个函数传递一个字符串,本质是传递这个字符串的首地址,而不是字符串本身
    printf("%lu, %lu\n", strlen("abcdefg"), strlen(p1));
    //2.strcat:将一个字符串拼接到另一个字符串的后面
    char str[20] = "abc"; //一次性分配20个字节内存,目前用了前3个字节,其他都是0
    strcat(str, "xyz");//将字符串xyz拼接到abc后面
    printf("%s\n", str);
    char *p2 = "mn";
    strcat(str, p2);//将p2指向的字符串mn拼接到str后面
    printf("%s\n", str);
    strncat(str, "1234", 2);//将字符串1234中的前2个字符拼接到str中
    printf("%s\n", str);
    //3.strcpy:字符串拷贝,将指定的字符串拷贝到制定的内存中
    char str2[20] = "abcd";
    strcpy(str2, "123456");//将字符串123456拷贝到str2数组中
    printf("%s\n", str2);
    char *p3 = "abcd";
    strcpy(str2, p3); //将p3指向的字符串拷贝到str2数组中
    printf("%s\n", str2);
    for(int i = 0; i < 20; i++)
        printf("%hhd ", str2[i]); //将20个字节内存打印出来观察
    printf("\n");
    strncpy(str2, "123456789", 7);
    printf("%s\n", str2);
    //4.strcmp:字符串比较,从左边到右边一个字符一个字符比较,只要不相等或者字符串结束
    //比较立刻结束
    int ret = 0;
    ret = strcmp("abc", "abc");
    printf("abc和abc比较的结果是%d\n", ret);
    ret = strcmp("abd", "abc");
    printf("abd和abc比较的结果是%d\n", ret);
    ret = strcmp("abc", "abd");
    printf("abc和abd比较的结果是%d\n", ret);
    ret = strncmp("abc", "abd", 2);
    printf("abc和abd比较的结果是%d\n", ret);
    return 0;
}




