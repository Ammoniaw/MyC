//结构体数组：数组中每个元素是一个结构体
#include <stdio.h>
//声明结构体类型描述学生信息
struct student {
    char name[32];
    int age;
};
//对声明好的结构体类型取别名方法２
typedef struct student stu_t;
//定义求数组元素个数的宏
#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))
int main(void) {
    //定义初始化三个学生信息
    stu_t stu_info[3] = {
        {.name="刘备", .age=20},
        {.name="关羽", .age=19},
        {.name="张飞", .age=18}
    };
    //int size = sizeof(stu_info)/sizeof(stu_info[0]);
    for(int i = 0; i  < ARRAY_SIZE(stu_info); i++)
        printf("%s, %d\n", stu_info[i].name, stu_info[i].age);
    for(int i = 0; i  < ARRAY_SIZE(stu_info); i++)
        stu_info[i].age++; 
    for(int i = 0; i  < ARRAY_SIZE(stu_info); i++)
        printf("%s, %d\n", stu_info[i].name, stu_info[i].age);
    return 0;//10:15继续
}
