//main.c:双链表测试
#include "list.h"
int main(void) {
    //1.定义链表
    list_t list;
    //2.初始化链表
    list_init(&list);
    //3.各种插入
    list_add_first(&list, 50);
    list_add_first(&list, 20);
    list_add_last(&list, 70);
    list_add_last(&list, 100);
    list_add(&list, 80);
    list_add(&list, 30);
    list_add(&list, 40);
    list_add(&list, 60);
    list_add(&list, 90);
    list_add(&list, 10);
    //4.遍历
    int size = list_size(&list);//获取节点个数
    for(int i = 0; i < size; i++)
        printf("%d ", list_get(&list, i));
    printf("\n");
    //5.删除
    list_del_first(&list);
    list_del_last(&list);
    list_del(&list, 50);
    for(int i = 0; i < list_size(&list); i++)
        printf("%d ", list_get(&list, i));
    printf("\n");
    //6.清除链表
    list_deinit(&list);
    return 0;
}
