# S1E11-if语句

## 2. 练习题

### 2 动动手

#### 00 定义常量来为程序添加结构

```c
#include <stdio.h>
#define STRING char *
#define IF if(
#define THEN ){
#define ELSE }else{
#define FI ;}
#define WHILE while(
#define DO ){
#define OD ;}
#define INT int
#define BEGIN {
#define END }
int main()
BEGIN
        INT i;

        printf("请输入您的年龄：");
        scanf("%d", &i);

        IF (i < 18) BEGIN
                printf("您未满18周岁，不得使用这个程序！\n");
    	END
        ELSE BEGIN
                printf("您已满18周岁，欢迎使用本程序，嘿嘿嘿...\n");
		END
        return 0;
END
```

#### 01根据下边代码画出流程图，并说明改程序的用途

```c
#include <stdio.h>

int main()
{
        int a, b, c, t;

        printf("请输入3个整数(使用空格隔开):");
        scanf("%d%d%d", &a, &b, &c);

        if (a > b) // 交换a,b的值
        {
                t = a;
                a = b;
                b = t;
        }

        if (a > c)  // 交换a,c的值
        {
                t = a;
                a = c;
                c = t;
        }

        if (b > c)  // 交换b,c的值
        {
                t = b;
                b = c;
                c = t;
        }

        printf("%d %d %d\n", a, b, c);

        return 0;
}
```

##### 说明：程序的用途是按照大小对单个数字进行排序

##### 流程图示意：![img](https://xxx.ilovefishc.com/forum/201601/27/121101f3misd4stsxuzpvp.png)

#### 02 要求用户输入一个字符，如果是大写字母，将其转换为小写；如果是小写字母，将其转换为大写；其他字符不做处理，并输出结果。

我的做法

``` c
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
```

小甲鱼做法

```c
#include <stdio.h>

int main()
{
        char ch;

        printf("请输入一个字符：");
        scanf("%c", &ch);

        if (ch >= 'A' && ch <= 'Z')  // 字符之间是可以直接进行比较大小的
        {
                ch = ch + 32; // ch加32，变成小写，然后赋值回ch
        }
        else if (ch >= 'a' && ch <= 'z')
        {
                ch = ch - 32; // 同上
        }

        printf("%c\n", ch);  // 最后都要输出字符，因此放到最后最后是比较合适的。

        return 0;
}
```



#### 03 根据流程图来编写代码

##### 流程图：![img](https://xxx.ilovefishc.com/forum/201601/24/044724nyagxcd3my45p57i.png)

###### 题目提示：

```
A. 通过调用 getHeartRate() 函数可以获得用户当前的心率。otW$}{.Q
该函数没有参数；返回用户当前的心率，返回值是整型。
比如 i = getHeartRate()，表示获得用户当前的心率，并赋值给变量 i。
该函数定义在头文件 ssebtr1.h 中（#include "ssebtr1.h"）。

B. 通过调用 playSound() 函数播放指定节奏的音乐。JNxtW
该函数有一个参数，用于指定待播放音乐的 BPM（次心跳/分钟）；如果该函数成功调用并播放，返回值为 0，如果找不到对应 BPM 的音乐或调用失败，返回值为 -1。
该函数定义在头文件 ssebtr1.h 中（#include "ssebtr1.h"）。
程序刚开始默认播放 BPM == 150 的音乐，每次提升或降低的单位为 20。

C. 最高心率 == 220 – 用户年龄<'q8BJ^
-vZFekBc]il:X}>=;D#j(,_2^|
D. 耐力跑心率保持在：最高心率 * 75% ~ 最高心率 * 85%a
```



```c
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
```