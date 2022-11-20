//student.c:单链表演示
#include <stdio.h>
typedef struct student {
    char name[32];
    int age;
    struct student *next;//保存下一个学生的地址
}stu_t;
int main(void) {
    //定义初始化学生信息
    stu_t stu1 = {.name="刘备", .age=20, .next=NULL};
    stu_t stu2 = {.name="关羽", .age=19, .next=NULL};
    stu_t stu3 = {.name="张飞", .age=18, .next=NULL};
    stu_t head, tail;
    //关联
    head.next = &stu1;
    stu1.next = &stu2;
    stu2.next = &stu3;
    stu3.next = &tail;
    //打印
    printf("%s %s %s\n", stu1.name, stu1.next->name, stu1.next->next->name);
    for(stu_t *pnode = &head; pnode != &tail; pnode=pnode->next) {
        stu_t *pmid = pnode->next;
        if(pmid != &tail)
            printf("%s ", pmid->name);
    }//10:05继续
    printf("\n");
    return 0;
}
