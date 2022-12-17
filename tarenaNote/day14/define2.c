#include <stdio.h>
#include <stdlib.h>
#define ISLEAP(y)   ((y)%4==0 && (y)%100!=0 || (y)%400==0)
#define ISSMALL(m)  ((m)==4 || (m)==6 || (m)==9 ||(m)==11)
#define NORMAL(m)   (ISSMALL(m)?30:31)
#define DAYS(y, m)  ((m)==2?28+ISLEAP(y):NORMAL(m))
#define IN(x, from, to)     ((x)>=(from) && (x)<=(to))
#define VALID(y, m, d)  ((y)>0&&IN(m,1,12)&&IN(d,1,DAYS(y,m)))
int main(int argc, char *argv[]) {
    if(argc != 4) {
        printf("用法: %s year  month day\n", argv[0]);
        printf("例如: %s 2021 8 25\n", argv[0]);
        return -1;
    }
    int year = atoi(argv[1]);
    int month = atoi(argv[2]);
    int day = atoi(argv[3]);
    if(VALID(year, month, day))
        printf("%d-%d-%d 是有效日期\n", year, month, day);
    else
        printf("%d-%d-%d 不是有效日期\n", year, month, day);
    
    int *p = NULL;
    if(!p) {
        printf("这里非法地址访问,因为p保存着空指针:%s %s %s %s %d\n",
                __DATE__, __TIME__, __FILE__, __FUNCTION__, __LINE__);
        return -1;
    }
    return 0;
}




