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
//定义分配新节点函数
static node_t *create_node(int data) {
    node_t *pnew = malloc(sizeof(node_t));
    pnew->data = data;
    pnew->next = NULL;
    pnew->prev = NULL;
    return pnew;
}
//定义插入新节点函数，新节点插入到pfirst和pmid中间
void insert_node(node_t *pfirst, node_t *pmid, node_t *pnew) {
    pfirst->next = pnew;
    pnew->prev = pfirst;
    pnew->next = pmid;
    pmid->prev = pnew;
}
//定义顺序插函数
void list_add(list_t *list, int data) {
    //1.创建新节点
    node_t *pnew = create_node(data);
    //2.遍历链表找到要插入的位置,让pmid指向后者,pfirst指向前者,pnew位于中间'
    for(node_t *pnode = &list->head; 
            pnode != &list->tail; pnode = pnode->next) {
        node_t *pfirst = pnode;
        node_t *pmid = pfirst->next;
        node_t *plast = pmid->next;
        if(pmid->data > pnew->data || pmid == &list->tail) {
            insert_node(pfirst, pmid, pnew);
            break;
        }
    }
}
//定义前插函数
void list_add_first(list_t *list, int data) {
    //1.创建新节点
    node_t *pnew = create_node(data);
    //2.让pfirst指向头节点,pmid指向原先的第一个节点
    node_t *pfirst = &list->head;
    node_t *pmid = pfirst->next;
    node_t *plast = pmid->next;
    //3.新节点放到pfirst和pmid中间
    insert_node(pfirst, pmid, pnew);
}
//定义后插函数
void list_add_last(list_t *list, int data) {
    //1.创建新节点
    node_t *pnew = create_node(data);
    //2.让pfirst指向原先的最后一个节点,pmid指向尾节点
    node_t *pfirst = list->tail.prev;
    node_t *pmid = pfirst->next;
    node_t *plast = pmid->next;
    //3.新节点放到pfirst和pmid中间
    insert_node(pfirst, pmid, pnew);
}
//定义删除节点函数,pmid指向要删除的节点
static void del_node(node_t *pfirst, node_t *pmid, node_t *plast) {
    pfirst->next = plast;
    plast->prev = pfirst;
    free(pmid);//释放内存
}
//定义删除指定数字所在的节点函数
void list_del(list_t *list, int data) {
    //1.遍历找到要删除的节点并且让pmid指向要删除的节点
    for(node_t *pnode = &list->head; 
            pnode != &list->tail; pnode = pnode->next) {
        node_t *pfirst = pnode;
        node_t *pmid = pfirst->next;
        node_t *plast = pmid->next;
        if(pmid->data == data && pmid != &list->tail) 
            del_node(pfirst, pmid, plast);
    }
}
//只删除第一个节点
void list_del_first(list_t *list) {
    if(list_empty(list)) {
        printf("链表空了.\n");
        return;
    }
    node_t *pfirst = &list->head;
    node_t *pmid = pfirst->next; //指向要删除的第一个节点
    node_t *plast = pmid->next;
    del_node(pfirst, pmid, plast);
}
//只删除最后一个节点
void list_del_last(list_t *list) {
    if(list_empty(list)) {
        printf("链表空了.\n");
        return;
    }
    node_t *plast = &list->tail;
    node_t *pmid = plast->prev; //指向要删除的最后一个节点
    node_t *pfirst = pmid->prev;
    del_node(pfirst, pmid, plast);
}
//根据节点编号获取节点数据
int list_get(list_t *list, int index) {
    int count = 0; //循环的次数
    //循环次数和编号的判断
    for(node_t *pnode = &list->head; 
            pnode != &list->tail; pnode = pnode->next) {
        node_t *pfirst = pnode;
        node_t *pmid = pfirst->next;
        if(index == count && pmid != &list->tail)
            return pmid->data;
        count++;
    } 
}
//定义清空链表所有节点的函数
void list_deinit(list_t *list) {
    while(list->head.next != &list->tail) {
        node_t *pfirst = &list->head;
        node_t *pmid = pfirst->next; //指向要删除的节点
        node_t *plast = pmid->next;
        del_node(pfirst, pmid, plast);
    }
}
















