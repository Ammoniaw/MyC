// 11-03 根据流程图编写代码
#include <stdio.h>
#include "ssebtr1.h"
int main()
{
	int age, max_xin_lv, BPM, i;
	printf("请您输入您的年龄：");
	scanf("%d", &age);
	max_xin_lv = 220 - age;
	BPM = 150;
	playSound(BPM);
	i = getHeartRate();
	if (i > max_xin_lv){
		printf("请马上停止跑步，否则会有生命危险......\n");
	}
	else if (i > max_xin_lv * 0.85){
		printf("请放慢脚步\n");
		BPM -= 20;
		playSound(BPM);
	}
	else if (i < max_xin_lv * 0.75 ){
		printf("Come on, 请加快节奏！\n");
		BPM += 20;
		playSound(BPM);
	}
	else{
		playSound(BPM)
	}

	return 0;
}
