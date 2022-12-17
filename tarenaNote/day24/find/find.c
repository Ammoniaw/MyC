//find.c:查找函数定义
#include "find.h"
//定义线性查找函数
int line_find(int data[],int size, int key){
    for(int i = 0; i < size; i++)
        if(data[i] == key)
            return i; //找到并且返回下标
    return -1; //没有找到
}
//定义二分查找递归函数
static int recu_find(int data[], int left, int right, int key) {
    if(left <= right) {
        int mid = (left+right)/2;
        if(key < data[mid])
            return recu_find(data, left, mid-1, key); //左边找
        else if(data[mid] < key)
            return recu_find(data, mid+1, right, key); //右边找
        else
            return mid; //找到了
    }
    return -1; //找不到
}
//定义二分查找函数
int half_find(int data[],int size,int key){
    //采用递归二分查找
    return recu_find(data, 0, size-1, key);
#if 0
    int left = 0;
    int right = size - 1;
    while(left <= right) {
        int mid = (left+right)/2;//折半
        if(key < data[mid])//左边找
            right = mid - 1;//重定右边界
        else if(data[mid] < key)//右边找
            left = mid + 1;//重定左边界
        else
            return mid; //找到了
    }
    return -1; //没有找到
#endif
}
