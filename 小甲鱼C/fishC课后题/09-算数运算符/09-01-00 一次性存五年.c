// 一次性存五年
#include<stdio.h>
int main()
{
	float r = 2.75;  // 年利率
	int n = 5;  // 存取年数
	float p;  // 本息和
	int money = 10000;  // 本金
	
	p = (1+(r/100.0)*5) * money;
	
	printf("10000块钱一次性存5年的本息何为：%.2f", p);
	
	
	return 0;
}
