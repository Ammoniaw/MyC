//切记:只要在命令行终端上输入的任何信息,操作系统都会把它当成字符串来处理
//例如:./helloworld,这个命令对于操作系统就是一个字符串"./helloworld"
//命令行参数argc和argv的玩法
#include <stdio.h>
#include <stdlib.h> //声明atoi函数
int main(int argc, char *argv[]) {
    //argc:记录命令行输入的参数个数(记录动作由操作系统来完成)
    //例如:./main结果argc=1  
    //./main 100 结果argc=2  ./main 100 200 ->argc=3
    //argv[]:记录命令行输入的参数对应的字符串首地址(记录动作由操作系统来完成)
    //例如:./main结果argv[0]保存字符串"./main"的首地址
    //./main 100结果argv[0]保存字符串"./main"的首地址,argv[1]保存字符串"100"的首地址
    for(int i = 0; i < argc; i++)
        printf("argc = %d, argv[%d] = %s\n", argc, i, argv[i]);
    //argc和argv编程规范:如果之前记得先做安全检查
    if(argc != 3) {
        printf("用法: %s 数字1  数字2.\n", argv[0]);
        printf("例如:./main 100 200\n");
        return -1;
    }
    //通过argc和argv动态的给程序传递额外的参数值提高程序的灵活度
    int a, b;
    //利用atoi这个标准C库函数实现将字符串形式的整形数字转整形类型数字:"100"->100
    a = atoi(argv[1]); //"100"->100
    b = atoi(argv[2]); //"200"->200
    printf("a + b = %d\n", a + b);
    return 0;
}
