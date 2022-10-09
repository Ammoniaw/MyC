//12-06 编写简单的四则运算计算器
/*
  需求：人为的输入计算表达式，之后输出结果时保留两位小数
  特殊情况：
	  当执行除法运算时，除数不能为0
  代码实现：
	  想想办法使用switch语句
 */
#include<stdio.h>
int main()
{
	float number1,number2, result; 
	char flag;   // flag 表示四则运算运算符
	
    //用户输入
	printf("请输入式子：");
	scanf("%f %c %f", &number1, &flag, &number2);
	
	//根据输入的不同flag进行不同的计算
	switch (flag) {
	case ('+'):
		result = number1 + number2;
		break;
	case ('-'):
		result = number1 - number2;
		break;
	case ('*'):
		result = number1 * number2;
		break;
	}
	printf("结果是：%.2f", result);
	if (flag == '/'){
		if (number2 == 0){
			printf("很遗憾，除数不能为零！");
		}
		else{
			result = number1 / number2;
			printf("结果是：%.2f", result);
		}
	}
	
	return 0;
}
