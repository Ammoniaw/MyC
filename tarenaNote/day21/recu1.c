//recu1.c:利用递归函数打印:1 2 3
#include <stdio.h>
//main
//  print(int max=3)
//      print(int max=2)
//          print(int max=1)
//              printf打印1
//              return
//          printf打印2
//          return
//      printf打印3
//      return
//  换行
//  return 0
void print(int max) {
    //3.最后添加递归退出的条件
    if(max == 1) {
        printf("1 ");
        return;
    }
    //2.然后发现此函数打印３和打印２和打印１都是一样的动作,所有采用递归来实现重复相同的事情
    print(max-1);
    //1.首先想到此函数就是要打印一个数字
    printf("%d ", max);
    return;
}
int main(void) {
    int max = 3;
    print(max);
    printf("\n");
    return 0;
}
