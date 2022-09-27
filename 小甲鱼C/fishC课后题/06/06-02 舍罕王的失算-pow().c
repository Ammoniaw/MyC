// 06-02 舍罕王的失算-pow()
#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int temp, weight, sum = 0;
	int i;
	for (i=0;i<64;i++)
	{
		temp = pow(2, i);
		sum = sum + temp;
	}
	weight = sum / 25000;
	printf("舍罕王应该给予达伊尔%llu粒麦子！\n", sum);
	printf("如果每25000粒麦子为1Kg,那么应该给%lluKg麦子！\n", sum/25000.0);
	
	return 0;
}
