//结构体嵌套结构体变量11:25继续
#include <stdio.h>
//声明描述学生出生日期的结构体类型
typedef struct birthday {
    int year;
    int month;
    int day;
}birth_t;
//声明描述学生信息的结构体类型
typedef struct student {
    char name[32];
    int age;
    birth_t birth; //嵌套结构体birth_t变量来存储学生的出生日期
}stu_t;
int main(void) {
    //定义初始化学生信息
    //stu_t stu1 = {"关羽", 18, {2002,2,2}};//传统初始化
    stu_t stu1 = {.name="关羽",.age=18,.birth={.year=2002,.month=2,.day=2}}; //标记初始化
    stu_t *pstu = &stu1;//pstu指向stu1
    printf("%s,%d,%d-%d-%d\n", stu1.name, stu1.age,
                stu1.birth.year, stu1.birth.month,stu1.birth.day);
    printf("%s,%d,%d-%d-%d\n", pstu->name, pstu->age,
                pstu->birth.year, pstu->birth.month,pstu->birth.day);
    stu1.age++;
    pstu->birth.year=2001;
    pstu->birth.month=3;
    printf("%s,%d,%d-%d-%d\n", stu1.name, stu1.age,
                stu1.birth.year, stu1.birth.month,stu1.birth.day);
    printf("%s,%d,%d-%d-%d\n", pstu->name, pstu->age,
                pstu->birth.year, pstu->birth.month,pstu->birth.day);
    return 0;
}
