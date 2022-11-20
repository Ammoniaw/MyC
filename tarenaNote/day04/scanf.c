/*实验步骤
  cd /home/tarena/stdc/day04
  vim scanf.c 编辑
  gcc -o scanf scanf.c 编译
  ./scanf 运行
 */
#include <stdio.h>
int main(void) {
    int a; //分配4字节内存，目前存储一个随机数
    printf("a = %d\n", a);
    scanf("%d", &a);//&a:获取变量a对应的内存首地址,%d:将来从键盘上输入一个整形数字,否则就不会保存数据
                    //执行流程：当程序执行scanf函数时,程序就会停止不动,等待用户从键盘上输入一个整形数字
                    //一旦输入完毕并且按回车键,程序从scanf函数返回继续向下运行,与此同时将输入的整形数字
                    //保存到变量a中
    printf("a = %d\n", a);
    
    scanf("%*c"); //清除scanf缓冲区中的字符

    int b = 20;
    scanf("%d%d", &a, &b);//从键盘上同时输入两个整形数字保存到变量a,b中,输入的整形数字之间用空格键分隔
    printf("a = %d, b = %d\n", a, b);
    return 0;
}//3:10继续
