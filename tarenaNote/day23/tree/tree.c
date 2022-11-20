//tree.c:有序二叉树的各种定义
#include "tree.h"
//travel(50)
//  travel(50的左边20)
//      travel(20的左边10)
//          travel(10的左边NULL)
//              return
//          printf:10
//          travel(10的右边NULL)
//              return
//          return
//      printf:20
//      travel(20的右边40)
//          travel(40的左边30)
//              travel(30的左边NULL)
//                  return
//              printf:30
//              travel(30的右边NULL)
//                  return
//              return
//          printf:40
//          travel(40的右边NULL)
//              return
//          return
//  printf:50
//  travel(50的右边70)
//      ...
//定义遍历的递归函数
static void travel(node_t *proot) {
#ifdef A //gcc -DA ...
    //中序遍历
    if(proot != NULL) {
        travel(proot->left); //打印左子树
        printf("%d ", proot->data); //打印节点数据  
        travel(proot->right); //打印右子树
        return;
    }
#endif
#ifdef B //gcc -DB
    //先序遍历
    if(proot != NULL) {
        printf("%d ", proot->data); //打印节点数据  
        travel(proot->left); //打印左子树
        travel(proot->right); //打印右子树
        return;
    }
#endif
#ifdef C //gcc -DC ...
    //后序遍历
    if(proot != NULL) {
        travel(proot->left); //打印左子树
        travel(proot->right); //打印右子树
        printf("%d ", proot->data); //打印节点数据  
        return;
    }
#endif
    return;
}
//定义遍历函数
void tree_travel(tree_t *tree) {
    //调用递归函数从根节点开始遍历
    travel(tree->root); 
    printf("\n");
}
//clear(50)
//  clear(50的左边20)
//      clear(20的左边10)
//          clear(10的左边NULL)
//              return
//          clear(10的右边NULL)
//              return
//          free(10)
//          20的L=NULL
//          return
//      clear(20的右边40)
//          clear(40的左边30)
//              clear(30的左边NULL)
//                  return
//              clear(30的右边NULL)
//                  return
//              free(30)
//              40的L=NULL
//              return
//          clear(40的右边NULL)
//              return
//          free(40)
//          20的R=NULL
//          return
//      free(20)
//      50的L=NULL
//      return
//  clear(50的右边70)
//      ...
//定义清空节点的递归函数
static void clear(node_t **pproot) {
    if(*pproot != NULL) {
        clear(&(*pproot)->left); //清空左子树
        clear(&(*pproot)->right); //清空左子树
        free(*pproot); //释放节点内存
        *pproot = NULL; //让指针不再是野指针 
        return;
    }
    return;
}
//定义清空节点的函数
void tree_clear(tree_t *tree) {
    //调用递归函数清除所有节点
    clear(&tree->root);
    tree->cnt = 0; //节点个数清0
}
//定义创建初始化新节点的函数
static node_t *create_node(int data) {
    node_t *pnew = malloc(sizeof(node_t));
    pnew->data = data;
    pnew->left = NULL;
    pnew->right = NULL;
    return pnew;
}
//定义插入新节点的递归函数
//insert(NULL, 50新节点)
//  root->50新节点
//  return
//insert(50, 20新节点)
//  insert(50的左边NULL, 20新节点)
//      50的L->20新节点
//      return
//  return
//insert(50, 70新节点)
//  insert(50的右边NULL, 70新节点)
//      50的R->70新节点
//      return
//  return
//insert(50, 10新节点)
//  insert(50的左边20, 10新节点)
//      insert(20的左边NULL, 10新节点)
//          20的L->10新节点
//          return
//      return
//  return
//
static void insert(node_t **pproot, node_t *pnew) {
    if(*pproot == NULL) {
        *pproot = pnew; //插入新节点
        return;
    }
    if((*pproot)->data  > pnew->data) {
        insert(&(*pproot)->left, pnew); //插入到左子树
        return;
    } else {
        insert(&(*pproot)->right, pnew); //插入到左子树
        return;
    }
    return;
}
//定义插入新节点的函数
void tree_insert(tree_t *tree, int data) {
    //1.创建新节点的内存
    node_t *pnew = create_node(data);
    //2.调用递归函数实现插入新节点
    insert(&tree->root, pnew);
    //3.更新计数
    tree->cnt++;
}
//定义查找节点的递归函数
//find(50, 5)
//  find(50的左边20, 5)
//      find(20的左边10, 5)
//          find(10的左边NULL, 5)
//              return NULL
//          return NULL
//      return NULL
//  return NULL
//没有找到
//find(50, 80)
//  find(50的右边70, 80)
//      find(70的右边90, 80)
//          find(90的左边80, 80)
//              return 80节点
//          return 80节点
//      return 80节点
//  return 80节点
//找到了
static node_t **find(node_t **pproot, int data) {
    //1.没有找到
    if(*pproot == NULL) 
        return pproot; //没有找到
    //2.比较
    if((*pproot)->data == data)
        return pproot; //找到了
    else if((*pproot)->data > data)
        return find(&(*pproot)->left, data); //左边找
    else
        return find(&(*pproot)->right, data); //左边找
}
//定义查找节点函数
static node_t **find_node(tree_t *tree, int data) {
    //调用递归函数从根节点查找并且返回要找的节点的二级指针
    return find(&tree->root, data);
}
//定义删除指定数字所在的节点函数
void tree_del(tree_t *tree, int data) {
    //1.找节点
    node_t **ppnode = find_node(tree, data);
    if(*ppnode == NULL) {
        printf("没有找到节点.\n");
        return;
    }
    //2.找新爹:如果要删除的节点的左子树不为空，则将左子树插入到右子树上
    if((*ppnode)->left != NULL)
        insert(&(*ppnode)->right, (*ppnode)->left);
    //3.提一级
    //*ppnode:表示要删除的节点,同时不就是50的L
    //(*ppnode)->right:就是40这个节点
    node_t *ptmp = *ppnode; //临时备份要删除的节点将来用于free
    *ppnode = (*ppnode)->right; //让50的L指向40
    free(ptmp); //释放要删除的节点内存
    tree->cnt--; //更新计数
}
//定义修改指定的节点值
void tree_modify(tree_t *tree, int old_data, int new_data) {
    //1.删除老节点
    tree_del(tree, old_data);
    //2.插入新节点
    tree_insert(tree, new_data);
}














