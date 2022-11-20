//指针和数组的那点事儿:公式
#include <stdio.h>
int main(void) {
    int arr[] = {1,2,3,4};//a就是数组第1个元素的首地址,a本质也是一个指针
    //arr++; //目前让arr指向第2个元素,arr虽然是一个指针但是不能修改,固定的
    int *p = arr; //p指向arr,p保存数组的首地址,通过p来访问数组跟通过arr访问数组一模一样
                  //但是p可以修改,例如p++
    int size = sizeof(arr)/sizeof(arr[0]); //获取元素个数
    //int size = sizeof(p)/sizeof(p[0]); //获取元素个数
    for(int i = 0; i < size; i++) {//写法1
        arr[i] *= 10;
        *(arr+i) *= 10;//arr[i]的本质就是先算arr+i获取第i个元素地址然后*(arr+i)获取内存值
        p[i] *= 10;
        *(p+i) *= 10;//p[i]的本质也是先算p+i获取第i个元素地址然后*(p+i)获取内存值
    }
    for(int i = 0; i < size; i++) 
        printf("%d %d %d %d\n", arr[i], p[i], *(arr+i), *(p+i));
    //写法2:请画出内存图
    for(p = arr; p < arr+size; p++)
        *p *= 10;
    for(p = arr; p < arr+size; p++)
        printf("%d\n", *p);
    return 0;
}





