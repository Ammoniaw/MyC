//12-05 修改下列代码，避免数组的越界访问
#include <stdio.h>

int main()
{
	char ch[6] = "FishC";
	int i;
	
	printf("请输入你想访问的字符序号(0~5)：");
	scanf("%d", &i);
	if (i >= 0 && i <= 5){
		printf("%c\n", ch[i]);
	}
	else{
		printf("请重新输入数字！");
	}
	
	return 0;
}
