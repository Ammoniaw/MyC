//main.c:有序二叉树测试
#include "tree.h"
int main(void) {
    //1.种树
    tree_t tree;
    //2.初始化
    tree.root = NULL;
    tree.cnt = 0;
    //3.添加新节点
    tree_insert(&tree, 50);
    tree_insert(&tree, 70);
    tree_insert(&tree, 60);
    tree_insert(&tree, 20);
    tree_insert(&tree, 40);
    tree_insert(&tree, 30);
    tree_insert(&tree, 10);
    tree_insert(&tree, 90);
    tree_insert(&tree, 80);
    //4.遍历
    tree_travel(&tree);
    //5.删除节点
    tree_del(&tree, 40);
    tree_del(&tree, 40);
    //6.修改
    tree_modify(&tree, 10, 520);
    tree_travel(&tree);
    //7.清空
    tree_clear(&tree);
    tree_travel(&tree);
    return 0;
}
