//sort.c:排序算法各种定义
#include "sort.h"
//定义冒泡排序算法函数
void bubble_sort(int *data, int size) {
    int i, j;
    for(i = 0; i < size-1; i++) {//趟次
        int ordered = 1;//判断是否交换
        //每趟比较的次数
        for(j = 0; j < size-1-i; j++) {
            if(data[j+1]<data[j]) {//交换
                int swap = data[j];
                data[j] = data[j+1];
                data[j+1] = swap;
                ordered = 0;//说明交换了
            }
        }
        //判断是否发生了交换
        if(ordered)
            break;
    }
}
//定义插入排序算法函数
void insert_sort(int *data, int size) {
    int i;
    for(i = 1; i < size; i++) {//取数的次数,第一个数据本身有序
        int inserted = data[i];//暂存被插入的数据
        int j;
        //从后往前扫描找到对应的位置
        for(j = i; j>0&&inserted<data[j-1]; --j)
            data[j] = data[j-1];
        //如果被插入的数据比前面的有序数列的数据都大,位置不动,无需额外重新插入一遍
        if(j != i)
            data[j] = inserted; //插入数据
    }
}
//选择排序算法函数
void select_sort(int data[], int size) {
    int i;
    for(i = 0; i < size - 1; i++){ //找最小数的次数,最后一个数据本身有序
        int min = i;//假设无序数列中的第一个数据最小,min记录最小数对应的下标
        int j;
        for(j = i + 1; j < size; j++) //找最小数
            if(data[j] < data[min])
                min = j; //记录更新最小数的下标
        if(min != i) { //交换
            int swap = data[i];
            data[i] = data[min];
            data[min] = swap;
        }
    }
}
//定义快速排序算法函数
void quick_sort(int data[], int left, int right) {
    int p = (left+right)/2; //定义基准值对应的下标,可以随意定义
    int i = left;//left=0,左边界
    int j = right;//right=size-1,右边界
    int pivot = data[p];//暂存基准值
    while (i < j) { //进行一次分组,i=j停止分组
        //i不做++运算的两种情形:i=p重合或者i对应的值大于基准值
        for(;!(i>=p || pivot < data[i]); i++);
        //此种情况是因为i对应的值大于基准值而退出上面的for循环,此时就需要调整位置
        if(i < p) {
            data[p] = data[i];//将i的值挪到p的位置
            p = i; //将p挪到i的位置
        }
        //j不做--运算的两种情形:j=p重合或者j对应的值小于基准值
        for(;!(j<=p || data[j] < pivot); j--);
        //此种情况是因为j对应的值小于基准值而退出上面的for循环,此时需要调整位置
        if(j > p) {
            data[p] = data[j];//将j挪到p的位置
            p = j; //将p挪到j的位置
        }
    }
    data[p] = pivot;//分组结束将基准值到p的位置
    if(p - left > 1) //基准值左边的数据个数大于等于2个继续分组直到剩余1个或者没有
        quick_sort(data, left, p-1); //继续分组,左边界还是left,右边界是p-1,不包含p
    if(right - p > 1) //基准值右边的数据个数大于等于2个继续分组直到剩余1个或者没有
        quick_sort(data, p+1, right);//继续分组,右边界还是right,左边界不包含p,p+1
}




















