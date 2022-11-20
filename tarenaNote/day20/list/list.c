//list.c:单链表的各种定义
#include "list.h"
//定义分配新节点内存的函数
static node_t *create_node(int data) {
    //1.分配节点内存
    node_t *pnew = malloc(sizeof(node_t));
    //2.初始化新节点内存
    pnew->data = data;
    pnew->next = NULL;
    return pnew;//返回新节点的首地址
}
//定义初始化单链表的函数
void list_init(list_t *list) {
    //1.给头节点分配内存
    list->head = create_node(0);
    //2.给尾节点分配内存
    list->tail = create_node(0);
    //3.首尾相连
    list->head->next = list->tail;
    list->tail->next = NULL;
}
//定义遍历函数
void list_travel(list_t *list) {
    for(node_t *pnode = list->head; pnode != list->tail; pnode = pnode->next) {
        node_t *pfirst = pnode;
        node_t *pmid = pfirst->next;
        node_t *plast = pmid->next;
        if(pmid != list->tail)
            printf("%d ", pmid->data);
    }
    printf("\n");
}
//定义顺序插函数
void list_add(list_t *list, int data) {
    //1.创建新节点
    node_t *pnew = create_node(data);
    //2.遍历找到要插入的位置
    for(node_t *pnode = list->head; pnode != list->tail; pnode = pnode->next) {
        node_t *pfirst = pnode;
        node_t *pmid = pfirst->next;
        node_t *plast = pmid->next;
        //3.找位置，然后让新节点位于pfirst和pmid中间
        if(pmid->data >= pnew->data || pmid == list->tail/*新节点数据在链表中最大*/) {
            pfirst->next = pnew;
            pnew->next = pmid;
            break;
        }
    }
}
//定义前插函数
void list_add_first(list_t *list, int data) {
    //1.创建新节点
    node_t *pnew = create_node(data);
    //2.临时备份原先的第一个节点地址
    node_t *ptmp = list->head->next;
    list->head->next = pnew;
    pnew->next = ptmp;
    /*方法2
        //让新节点的next指向原先的第一个节点
        pnew->next = list->head->next;
        list->head->next = pnew;
    */
}
//定义后插函数
void list_add_last(list_t *list, int data) {
    //1.创建新节点
    node_t *pnew = create_node(data);
    //2.遍历找到要插入的位置
    for(node_t *pnode = list->head; 
            pnode != list->tail; pnode = pnode->next) {
        node_t *pfirst = pnode;
        node_t *pmid = pfirst->next;
        node_t *plast = pmid->next;
        if(pmid == list->tail) {
            pfirst->next = pnew;
            pnew->next = pmid;
            break;
        }
    }
}
//定义删除指定数字所在的节点函数
void list_del(list_t *list, int data) {
    for(node_t *pnode = list->head; 
            pnode != list->tail; pnode = pnode->next) {
        node_t *pfirst = pnode;
        node_t *pmid = pfirst->next;
        node_t *plast = pmid->next;
        if(pmid->data == data && pmid != list->tail/*不能删除尾节点*/) {
            pfirst->next = plast; //连接前一个节点和后一个节点
            free(pmid); //释放内存
            break;
        }
    } 
}
//定义释放整个链表所有节点的内存函数
void list_deinit(list_t *list) {
    node_t *pnode = list->head;
    while(pnode) {
        node_t *ptmp = pnode->next; //临时备份下一个节点的地址
        free(pnode); //释放节点内存
        pnode = ptmp; //准备释放下一个节点
    }
}



















