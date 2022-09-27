//练习题2-0 整数四则运算
/*需求分析：
	1. 获取用户输入 两个正整数
	2. 计算两个数的四则运算
	3. 按照既定格式输出算式和结果*/
/*实现思路：
	1.使用scanf实现用户获取输入
    2.使用格式符进行输出
 */
#include <stdio.h>
int main(){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	// 进行四则运算操作
	printf("%d + %d = %d\n", a,b,a+b);
	printf("%d - %d = %d\n", a,b,a-b);
	printf("%d * %d = %d\n", a,b,a*b);
	printf("%d / %d = %d\n", a,b,a/b);
	return 0;
}
