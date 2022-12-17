//list.c:双链表的各种定义
#include "list.h"
//定义初始化函数
void list_init(list_t *list) {
    //头指向尾
    list->head.next = &list->tail;
    //尾指向头
    list->tail.prev = &list->head;
    //其余初始化
    list->head.data = 0;
    list->tail.data = 0;
    list->head.prev = NULL;
    list->tail.next = NULL;
}
//定义判断空的函数
int list_empty(list_t *list) {
    //空返回1,不空返回0
    return list->head.next == &list->tail;
}
//定义获取节点个数函数
int list_size(list_t *list) {
    int cnt = 0; //有效节点个数记录
    for(node_t *pnode = &list->head; pnode != &list->tail; pnode = pnode->next)  {
        node_t *pfirst = pnode;
        node_t *pmid = pfirst->next;
        node_t *plast = pmid->next;
        if(pmid != &list->tail)
            cnt++; //更新计数
    }
    return cnt; //返回有效节点个数
}









