//指针的编程原则:如果不知道指针指向谁,干脆给NULL,将来后续通过指针访问指向的内存时
//首先要对指针进行安全的判断,跟NULL判断,好判断,跟野指针(随机地址)不好判断,太麻烦了
#include <stdio.h>
int main(void) {
    //1.指向有效内存
    int *pa = NULL; //安全,好习惯,否则就是一个野指针,随机地址
    int a = 520;
    pa = &a; //pa指向a,pa保存有效内存的地址
    //通过pa访问a之前记得对pa先进行安全判断
    if(pa == NULL) {
        printf("pa是一个非法指针不能访问.\n");
        return -1;
    }
    printf("pa是一个有效指针:%p\n", pa);
    *pa = 521; //此时通过pa踏踏实实的访问a的内存
    printf("a = %d\n", *pa); //此时通过pa踏踏实实访问a
    //2.无效内存
    int *pb = NULL; //安全,好习惯,否则就是一个野指针,随机地址
    //后续代码压根没有给pb赋值让它指向有效内存
    //通过pb访问内存之前记得对pb先进行安全判断
    if(pb == NULL) {
        printf("pb是一个非法指针不能访问.\n");
        return -1;
    }
    printf("pb是一个有效指针:%p\n", pb);
    *pb = 521; //此时通过pb踏踏实实的访问内存
    printf("%d\n", *pb); //此时通过pb踏踏实实内存
    return 0;
}
