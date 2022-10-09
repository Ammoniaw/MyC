/*
   要求用户输入一个字符，
  \如果是大写字母，将其转换为小写；
  如果是小写字母，将其转换为大写；
  其他字符不做处理，并输出结果
 */
/*
  分析需求：可以使用scanf获取输入，
		  使用if语句判断是否在大写字母或者是小写字母的区间范围
		  之后进行相对应格式的改变
 */
#include<stdio.h>
int main()
{
	char word;  // 使用char类型存储字符
	printf("请输入任意一个字符：");
	scanf("%c", &word);  //使用char类型的word变量进行接收
	
	// 进行判断
	if ((int)word >= 65 && (int)word <= 90)  // 说明这是一个大写字母
	{
		printf("将字符%c转化为字符%c\n" , word, (int)word + 32);  // 观察Ascii编码的规律
	}
	
	else if ((int)word >= 97 && (int)word <= 122)
	{
		printf("将字符%c转化为字符%c\n" , word, ((int)word - 32));	
	}
	
	else{
		printf("输入的字符%c不是字母，原样输出%c", word,word);
	}
	
	return 0;
}


