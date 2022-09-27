// 07-02 使用scanf()函数
#include<stdio.h>
#include<math.h>
int main()
{
	int number;
	double result;
	printf("请输入一个整数：");
	scanf("%d", &number);
	result = pow(number, 5);
	printf("%d的五次方是%.2f", number, result);
	
	return 0;
}
