#include<stdio.h>
int main()
{
	int a = 50;
	printf("a = %d\n",a);
	printf("a = %ld\n",a);
	
	long b = 50;
	
	printf("b = %ld\n", b);
	printf("b = %d\n", b);
	
	// 使用sizeof运算符，展示整型数后缀值的作用
	printf("%d\n", sizeof(520));
	printf("%ld\n", sizeof(520L));
	
	return 0;
}
