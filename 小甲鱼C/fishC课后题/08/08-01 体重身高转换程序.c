//08-01 体重身高转换程序
/*
  分析需求：
	  获取用户的输入 - scanf
	  单位转换 - 计算
	  输出结果 - printf()格式化输出
 */
#include<stdio.h>
int main()
{
	char name[]={};
	float height, weight;
	printf("请输入你的姓名：");
	scanf("%s", name);  // 字符串不使用&符号。
	printf("请输入你的身高(厘米)：");
	scanf("%f", &height);
	printf("请输入你的体重(kg)：");
	scanf("%f", &weight);
	height = height / 2.54;
	weight = weight * 2.205;
	printf("=====正在为您转换=====\n");
	printf("%s的身高是%.2f(in),体重是%.2f(lb)", name,height,weight);
	return 0;
}
