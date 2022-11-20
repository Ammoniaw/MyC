//fputs和fgets函数演示
#include <stdio.h>
int main(void) {
    FILE *fpr = fopen("a.txt", "r");
    FILE *fpw = fopen("b.txt", "w+");
    char str[4] = {0}; //用于保存从文件中读取到的字符串数据
    while(fgets(str, 4, fpr) != NULL) { //循环从a.txt文件中读取3个字符
        fputs(str, fpw);//然后将读取到的数据写入到b.txt文件中
    }
    fclose(fpr);
    fclose(fpw);
    fpr = NULL;
    fpw = NULL;
    return 0;
}//8:50继续
