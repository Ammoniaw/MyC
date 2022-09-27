// 存 1 年定期，到期后本息再存 1 年定期，连续存 5 次
#include<stdio.h>
#include<math.h>
int main()
{
	float r = 1.75;
	int money = 10000;
	int time = 5;
	float p;
	
	p = money * (pow((1 + r / 100.0), 5));
	printf("存 1 年定期，到期后本息再存 1 年定期，连续存 5 次的本息和是：%.2f", p);
	
	return 0;
}
