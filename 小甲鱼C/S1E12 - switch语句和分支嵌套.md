# S1E12 - switch语句和分支嵌套

## 2. 课后题

### 2.1 测试题

#### 00 你见过最“短小快”的 C 语言语句是什么？

说明：单个分号的结束语句

#### 01 什么是程序块（语句块）

说明:当你用一对大括号将若干语句包裹起来，那么这些语句就构成了一个程序块，在编译系统看来，它们是一个整体

#### 02 请问下边代码是否有错，如有错误，请指出来？

```c
#include <stdio.h>

int main()
{
        int i;

        printf("请输入成绩：");
        scanf("%d", &i);

        switch (i)
        {
                case i >= 90: printf("A\n"); break;
                case i >= 80 && i < 90: printf("B\n"); break;
                case i >= 70 && i < 80: printf("C\n"); break;
                case i >= 60 && i < 70: printf("D\n"); break;
                case i < 60: printf("E\n"); break;
                default: printf("请输入合法的数字！\n"); break;
        }

        return 0;
}
```

##### 说明：case后面是一个常数值，而不是一个范围；C 语言的 ==switch 语句没有任何简便的方法指定某个范围的值，除非你将该范围内的每个值都以单独的 case 标签给出。如果这个范围非常大，建议改用一系列 if-else if-else 语句或嵌套的 if 语句代替。==

#### 03 请问下边代码是否有错，如有错误，请指出来？

```c
#include <stdio.h>

int main()
{
        float i;

        printf("请输入一个小数：");
        scanf("%f", &i);

        switch (i)
        {
                case 1.2: printf("1.2\n"); break;
                case 2.2: printf("2.2\n"); break;
                case 3.2: printf("3.2\n"); break;
                case 4.2: printf("4.2\n"); break;
                case 5.2: printf("5.2\n"); break;
        }

        return 0;
}
```

##### 说明：case 后边应该只能跟整型常量或常量表达式，==不能是浮点型常量==

#### 04 请问下边代码是否有错，如有错误，请指出来？

```c
#include <stdio.h>

int main()
{
        int i;

        printf("请输入一个整数：");
        scanf("%d", &i);

        switch (i)
        {
                case 1 + 1: printf("1 + 1\n"); break;
                case 8 / 4: printf("2 / 1\n"); break;
                case 1 + 2: printf("1 + 2\n"); break;
                case 1 - 2: printf("1 - 2\n"); break;
                case 1 - 3: printf("1 - 3\n"); break;
        }

        return 0;
}
```

##### 说明：第一个 case 后边整型常量值计算后结果是 2，第二个 case 后边也是 2，==任意两个 case 跟随的整型常量值不能相同（否则编译系统无法判断你要往哪儿跳转）==

#### 05 之前小甲鱼简单的介绍过字符串，当时是用字符数组的形式来存放，语言的数组会有一个越界访问的问题，比如说访问到字符串索引值之外的数据时会抛出乱码（访问到了字符数组的以外的内存数据）、修改下列代码，避免问题产生

```c
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
```

##### 更加优秀的办法

``` c
#include <stdio.h>

int main()
{
        char ch[6] = "FishC";
        int i;

        printf("请输入你想访问的字符序号(0~5)：");
        scanf("%d", &i);

        if (!(i >= 0 && i <= 5 && printf("%c\n", ch[i])))
        {
                printf("非法访问！\n");
        }

        return 0;
}
```



### 2.2动动手

#### 00 写一个最简单的计算器，支持四则运算。

##### 程序实现细节：![img](https://xxx.ilovefishc.com/forum/201601/31/165424wqhhunca6f3lftel.png)

##### 代码实现

```c
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
```

##### 小甲鱼代码优化版

```c
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
```



#### 01 补充代码

说明：

```
A 如图所示，智能小车是两轮驱动，每个轮子上均有电机，每个电机可以向前或向后转动。

B. 控制左右两个电机的数字引脚号分别是 8、9、10、11。其中 8 和 9 控制左电机的前进和后退。10 和 11 控制右电机的前进和后退。

C. 通过调用 digitalWrite() 函数为指定的数字引脚赋值高电平（HIGH）或低电平（LOW）来实现电机的运行或停止。比如 digitalWrite(8, HIGH); digitalWrite(9, LOW); 表示左电机前进。反之，digitalWrite(8, LOW); digitalWrite(9, HIGH); 表示左电机后退。

D. 程序使用一个字符变量 ch 来接收指令，'g' 表示前进；'b' 表示后退；'r' 表示右转；'l' 表示左转。"
E. 要让小车左转，那么就是左轮不动，右轮前进。

F. 如果没有接收到控制信号，则什么事儿都不要做！
```

代码实现：也就是实现五种命令

```c
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
```

