//结构体嵌套结构体指针变量
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
    birth_t *pbirth; //嵌套结构体birth_t指针变量来存储学生的出生日期
}stu_t;
int main(void) {
    //定义初始化学生信息
    //stu_t stu1 = {"关羽", 18, NULL};//传统初始化
    stu_t stu1 = {.name="关羽",.age=18,.pbirth=NULL}; //标记初始化
    stu_t *pstu = &stu1;//pstu指向stu1
    //定义描述关羽学生出生日期的结构体变量
    birth_t birth = {2002,2,2};
    //将关羽的学生信息stu1和关羽的出生日期关联起来
    stu1.pbirth = &birth;
    //等价于:pstu->pbirth = &birth;
    printf("%s,%d,%d-%d-%d\n", stu1.name, stu1.age,
            stu1.pbirth->year, stu1.pbirth->month,stu1.pbirth->day);
    printf("%s,%d,%d-%d-%d\n", pstu->name, pstu->age,
         pstu->pbirth->year, pstu->pbirth->month,pstu->pbirth->day);
    stu1.age++;
    pstu->pbirth->year=2001;
    pstu->pbirth->month=3;
    printf("%s,%d,%d-%d-%d\n", stu1.name, stu1.age,
            stu1.pbirth->year, stu1.pbirth->month,stu1.pbirth->day);
    printf("%s,%d,%d-%d-%d\n", pstu->name, pstu->age,
         pstu->pbirth->year, pstu->pbirth->month,pstu->pbirth->day);
    return 0;
}
