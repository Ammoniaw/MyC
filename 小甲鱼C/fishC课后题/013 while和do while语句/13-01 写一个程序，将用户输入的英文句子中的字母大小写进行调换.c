// 
//（即大写字母转换为小写字母，小写字母转换为大写字母）
/* 
 需求分析：
	  转换大小写字母
  实现：
	  getchar()获取所输入的字符
	  while循环和if语句循环对句子中的每一个字符进行判断
	  使用putchar()函数输出字母
 */
#include <stdio.h>

int main()
{
	int ch;
	
	printf("请输入一行英文句子：");
	
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch - 'A' + 'a';  //使用int类型存放字符
		}
		else if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 'a' + 'A';
		}
		
		putchar(ch);
	}
	
	putchar('\n');
	
	return 0;
}
