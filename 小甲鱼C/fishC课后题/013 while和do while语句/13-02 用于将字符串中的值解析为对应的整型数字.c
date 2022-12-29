#include <stdio.h>
int main()
{
	double r;
	printf("请输入一个圆的半径（本程序会计算圆的周长和半径）：");
	scanf("%lg", &r);
	
	printf("半径为%lg的圆的半径的周长为%lg\n", r,3.14 *2 * r);
	printf("半径为%lg的圆的半径的面积为%lg\n", r,3.14 * r* r);
	
	
	return 0;
}
