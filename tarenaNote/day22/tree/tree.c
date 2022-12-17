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
//      return
//  printf:50
//  travel(50的右边70)
//      ...
//定义遍历有序二叉树的递归函数
static void travel(node_t *proot) {
    if(proot != NULL) {//中序遍历
        travel(proot->left); //打印左节点
        printf("%d ", proot->data); //打印节点数据 
        travel(proot->right); //打印右节点
        return;
    }
    if(proot != NULL) {//先序遍历
        printf("%d ", proot->data); //打印节点数据 
        travel(proot->left); //打印左节点
        travel(proot->right); //打印右节点
        return;
    }
    if(proot != NULL) {//后序遍历
        travel(proot->left); //打印左节点
        travel(proot->right); //打印右节点
        printf("%d ", proot->data); //打印节点数据 
        return;
    }
    return;
}
//定义遍历函数
void tree_travel(tree_t *tree) {
    //调用递归函数从根节点开始遍历
    travel(tree->root);
    printf("\n");
}
//假设只有:50 20 70
//clear(50)
//  clear(50的左边20)
//      clear(20的左边NULL)
//          return
//      clear(20的右边NULL)
//          return
//      free(20)
//      50的L=NULL
//      return
//  clear(50的右边70)
//      clear(70的左边NULL)
//          return
//      clear(70的右边NULL)
//          return
//      free(70)
//      50的R=NULL
//      return
//  free(50)
//  root=NULL
//  return
//定义清空节点递归函数
static void clear(node_t **pproot) {
    if(*pproot != NULL) {
        clear(&(*pproot)->left); //清空左子树
        clear(&(*pproot)->right); //清空右子树
        free(*pproot); 
        *pproot = NULL; //避免产生野指针
        return;
    }
    return;
}
//定义有序二叉树清空所有节点的函数
void tree_clear(tree_t *tree) {
    //调用递归函数清空节点
    clear(&tree->root);
    tree->cnt = 0; //节点个数清0
}

