#include <stdio.h>

int main()
{
	float fah, cel;
	
	printf("请输入摄氏度：");
	scanf("%f", &cel);
	
	// fah = 9 / 5 * cel + 32; 
	// 在C语言中整数直接的除法采取的方法是舍去小数的操作
	fah = (9.0/5.0) * cel + 32;
	printf("转换为华摄度是：%.2f\n", fah);
	
	return 0;
}
