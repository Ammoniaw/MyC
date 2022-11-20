//结构体玩法１:直接定义结构体变量
#include <stdio.h>
#include <string.h>
int main(void) {
    //直接定义结构体变量分配内存存储学生信息
    struct {
        char name[32]; //记录学生的姓名
        int age; //记录学生的年龄
    }stu1 = {"游哥", 18};
    //打印学生信息
    printf("%s, %d\n", stu1.name, stu1.age);
    //修改学生信息 strcpy=string copy
    strcpy(stu1.name, "游哥哥");
    stu1.age++;
    //打印学生信息
    printf("%s, %d\n", stu1.name, stu1.age);
    return 0;
}
