// 12-07 补充代码
#include <Servo.h>

// 为了方便调用，我们为控制左右电机
// 前进后退的数字引脚进行了宏定义
#define LEFT_MOTO_GO    8 
#define LEFT_MOTO_BACK    9
#define RIGHT_MOTO_GO    10
#define RIGHT_MOTO_BACK    11

// ...省略部分代码...

void loop()
{
	char ch; // 用于接受命令
	
	switch(ch)
	{
		// 这里的内容需要你来补充！！！
		case ('g'):  // 表示前进 左右轮都动
			digitalwrite(8, HIGH);
			digitalwrite(9, LOW);
			digitalwrite(10, HIGH);
			digitalwrite(11, LOW);
			break
		case ('b'):  // 表示左右轮都后退
			digitalwrite(9, HIGH);
			digitalwrite(8, LOW);
			digitalwrite(11, HIGH);
			digitalwrite(10, LOW);
			break
		case ('r'):  // 表示右转
			digitalwrite(8, HIGH);
			digitalwrite(9, LOW);	
			digitalwrite(11, LOW);
			digitalwrite(10, LOW);
			break
		case ('l'):
			digitalwrite(8, LOW);
			digitalwrite(9, LOW);	
			digitalwrite(10, HIGH);
			digitalwrite(11, LOW);
			break
		default:	
			digitalwrite(8, LOW);
			digitalwrite(9, LOW);	
			digitalwrite(10, LOW);
			digitalwrite(11, LOW);	
	}
	
	// ...省略部分代码...
}
