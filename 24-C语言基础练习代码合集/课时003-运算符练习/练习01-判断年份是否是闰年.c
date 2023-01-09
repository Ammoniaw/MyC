//课时作业3-01
/*
description:
	  判断某个年份是不是闰年，如果是闰年，请输出“yes”，否则请输出“no”
input:
	输入一行，只有一个整数x (0<=x <=10000)
output:
	输出只有一行字符
 */
#include <stdio.h>
#include <stdlib.h>
int main(){
	int year;
	scanf("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("yes\n");
	}
	else{
		printf("no\n");
		
	}
	
	
	
	return 0;
}
