//文件操作的标准C库函数
#include <stdio.h>
int main(void) {
    FILE *fp = NULL;
    //打开文件,以只读方式打开
    fp = fopen("a.txt", "r");
    if(fp == NULL) {
        printf("文件打开失败.\n");
        return -1;
    }
    printf("打开成功.\n");
    int i = 0;
    char str[20] = {0};
    double d = 0;
    fscanf(fp, "%d%s%lf", &i, str, &d);//从a.txt按照指定的格式读取数据
    //关闭文件
    fclose(fp);
    fp = NULL; //好习惯
    printf("i = %d, str=%s, d = %lg\n", i, str, d);
    FILE *fpw = fopen("b.txt", "w+");
    //将变量i,str,d中的值保存到文件b.txt
    fprintf(fpw, "copy:%d %s %lg\n", i, str, d);
    fclose(fpw);
    fpw = NULL;
    //stdin,stdout,stderr三个默认的文件指针
    fscanf(stdin, "%d%s%lf", &i, str, &d);//从键盘上读取数据保存到变量中
    printf("i = %d, str=%s, d = %lg\n", i, str, d);//向显示器输出
    fprintf(stdout, "i = %d, str=%s, d = %lg\n", i, str, d);//向显示器输出
    fprintf(stderr, "i = %d, str=%s, d = %lg\n", i, str, d);//向显示器输出
    return 0;
}
