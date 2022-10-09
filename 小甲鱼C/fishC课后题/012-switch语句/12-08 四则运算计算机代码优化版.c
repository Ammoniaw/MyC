// 12-08 四则运算模拟器
#include <stdio.h>
#include <stdbool.h>

int main()
{
	float op1, op2;
	char ch;
	float result;
	bool invalid = false;  // 引入bool值
	
	printf("请输入式子：");
	scanf("%f %c %f", &op1, &ch, &op2);
	
	switch (ch)
	{
		case '-': op2 = -op2; // no break  故意不使用break，减法就是特殊的加法
		case '+': result = op1 + op2; break;
		case '*': result = op1 * op2; break;
	case '/':
		if (op2 != 0)
		{
			result = op1 / op2;
			break;
		}
		else
		{
			invalid = true;
			break;
		}
	}
	
	if (invalid)
	{
		printf("除数不能为零！\n");
	}
	else
	{
		printf("结果是：%.2f\n", result);
	}
	
	return 0;
}
