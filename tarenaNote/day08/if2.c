//条件分支演示
#include <stdio.h>
int main(void) {
    printf("请输入您的月工资:");
    int salary;
    scanf("%d", &salary);

    if(salary < 1300) {
        printf("无效工资.\n");
        return -1; //结束程序
    }

    if(salary >= 10000) 
        printf("飞机.\n");
    else if(salary >= 5000)
        printf("火车.\n");
    else if(salary >= 3000)
        printf("汽车.\n");
    else if(salary >= 1500)
        printf("自行车.\n");
    else
        printf("步行.\n");
    return 0;
}
