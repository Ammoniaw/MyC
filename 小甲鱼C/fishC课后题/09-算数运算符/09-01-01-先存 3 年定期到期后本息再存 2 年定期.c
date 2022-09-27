// 先存 3 年定期，到期后本息再存 2 年定期；
#include<stdio.h>
int main()
{
	float r3 = 2.75;
	float r2 = 2.25;
	int money = 10000;
	float p3, p;  // 本息和
	
	p3 = money * (1 + r3 / 100.0 * 3);
	p = p3 * (1 + r2 / 100.0 * 2);
	
	printf("先存 3 年定期，到期后本息再存 2 年定期的本息何为：%.2f", p);
	
	return 0;
}
