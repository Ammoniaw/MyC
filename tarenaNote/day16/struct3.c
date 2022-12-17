//结构体玩法3:先声明一个结构体类型并且取别名，然后用该类型定义变量
#include <stdio.h>
#include <string.h>
//声明描述学生信息的结构体数据类型
//类似造一个自己的int类型一样
typedef struct student {
    char name[32]; //姓名
    int age; //年龄
}stu_t;//好比把stu_t当成int类型来看
int main(void) {
    //定义结构体变量存储学生信息
    //stu_t stu1 = {"游哥", 18};//传统初始化
    stu_t stu1 = {.age=18, .name="游哥"};//标记,类型int stu1
    //定义结构体类型的指针指向stu1
    stu_t *pstu = &stu1; //pstu保存stu1的首地址,类似int* pstu
    printf("%s, %d\n", stu1.name, stu1.age);
    printf("%s, %d\n", pstu->name, pstu->age);
    stu1.age++;
    strcpy(pstu->name, "游哥哥");
    printf("%s, %d\n", stu1.name, stu1.age);
    printf("%s, %d\n", pstu->name, pstu->age);
    return 0;
}
