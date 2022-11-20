//联合体演示
#include <stdio.h>
int main(void) {
    union {
        unsigned int un;
        unsigned char uc[4];
    }mb;
    mb.un = 0x12345678;
    for(int i = 0; i < sizeof(mb.uc)/sizeof(mb.uc[0]); i++)
        printf("%#x ", mb.uc[i]);
    printf("\n");
    mb.uc[2] = 0x43; //0x34->0x43
    printf("%#x\n", mb.un);//一次性访问４字节
    //采用联合体求大小端
    mb.un = 1;
    if(mb.uc[0])
        printf("小端.\n");
    else
        printf("大端.\n");
    //采用指针求
    short a = 1;
    if(*(char *)&a)
        printf("小端.\n");
    else
        printf("大端.\n");
    return 0;
}
