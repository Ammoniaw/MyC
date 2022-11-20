//fwrite,fread函数演示
#include <stdio.h>
int main(void) {
    FILE *fp = fopen("a.txt", "w+");
    int a[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(a)/sizeof(a[0]);
    int len = 0;
    //向文件写入size个数据,每个数据大小4字节,返回实际写入的个数个数
    len = fwrite(a, sizeof(int), size, fp);
    printf("实际写入了%d个数据.\n", len);
    rewind(fp); //将文件的位置信息重新定位到文件的开头
    int b[8] = {0}; //暂存从文件中读取到的数据
    len = fread(b, sizeof(int), 10, fp);//从文件中读取10个数据
    printf("实际读取了%d个数据.\n", len);
    for(int i = 0; i < len; i++)
        printf("%d ", b[i]);
    printf("\n");
    //fseek函数演示
    int c[2] = {0};
    fseek(fp, 8, SEEK_SET);//从文件开头往后8个字节开始操作文件
    //1 2 3 4 5 6 7 8
    //    ^
    fread(c, 4, 2, fp);//读取完毕,文件位置跑到5
    printf("%d %d\n", c[0], c[1]);
    fseek(fp, 8, SEEK_CUR);//从当前位置(5的位置)往后8个字节开始操作文件
    //1 2 3 4 5 6 7 8
    //            ^
    fread(c, 4, 2, fp);//读取完毕,文件位置跑到尾部
    printf("%d %d\n", c[0], c[1]);
    fseek(fp, -12, SEEK_END);//从文件尾部往前12个字节开始操作文件
    //1 2 3 4 5 6 7 8
    //          ^ 
    fread(c, 4, 2, fp);//读取完毕,文件位置跑到5
    printf("%d %d\n", c[0], c[1]);
    fclose(fp);
    fp = NULL;
    return 0;
}
