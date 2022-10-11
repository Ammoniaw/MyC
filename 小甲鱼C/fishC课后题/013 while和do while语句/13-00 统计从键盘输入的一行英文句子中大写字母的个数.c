//动动手 13-00 统计从键盘输入的一行英文句子中大写字母的个数。 
/*
  分析：需要一个变量存储大写字母的个数
  使用while循环和getchar()函数进行实现
  getchar()函数读取到换行（回车)符号的时候表示结束这行英文句子
 */
#include <stdio.h>

int main()
{
	int ch, count = 0;
	
	printf("请输入一行英文句子：");
	
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			count = count + 1;
		}
	}
	
	printf("你总共输入了%d个大写字母！\n", count);
	
	return 0;
}
