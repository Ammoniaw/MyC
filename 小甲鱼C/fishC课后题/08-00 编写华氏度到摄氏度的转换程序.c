//08-00 编写华氏度到摄氏度的转换程序
/*
  提示：1摄氏度 =（1华氏度 – 32）* 5 / 9
  分析需求：
	  输入华氏度，输出摄氏度的结果，并且保留两位小数
  实现流程：
	  变量的定义
	  scanf()函数的应用
	  printf()函数格式化输出的应用
 */
#include<stdio.h>
int main()
{
	float h,c;
	
	printf("请输入华氏度：");
	scanf("%f", &h);
	c = (h-32)*5/9;
	printf("转换为摄氏度是：%.2f", c);
	
	return 0;
}
