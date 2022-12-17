//scanf/gets/printf/puts字符串输入和输出函数演示
#include <stdio.h>
int main(void) {
    char str[100] = {0}; //分配内存将来存储输入的字符串

    //从键盘上输入字符串:scanf/gets来捕获
    //scanf("%s", str); //按照字符串形式将输入的字符串保存到数组str中,遇到空格键结束
    gets(str); //获取输入的字符串保存到数组str中,把最后输入的\n换成\0作为结束符

    //向显示器打印输出字符串:printf/puts
    //printf("%s\n", str); //需要手动添加\n换行
    puts(str); //输出字符串,自动帮你追加一个\n
    return 0;
}//4:10继续
