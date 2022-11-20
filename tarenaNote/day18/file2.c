//fputc和fget函数演示
#include <stdio.h>
int main(void) {
    FILE *fpr = fopen("a.txt", "r");
    FILE *fpw = fopen("b.txt", "w+");
    int ch;//暂存读取到的字符数据
    while(1) {
        ch = fgetc(fpr); //从a.txt读取一个字符
        if(ch == EOF)//判断读取是否发生错误或者读取到文件的尾部了
            break;
        fputc(ch, fpw); //向b.txt写入一个字符
    }
    fclose(fpr);
    fclose(fpw);
    fpr = NULL;
    fpw = NULL;
    return 0;
}//8:50继续
