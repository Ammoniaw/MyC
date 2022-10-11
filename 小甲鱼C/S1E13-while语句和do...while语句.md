# S1E13-while语句和do...while语句

## 2 课后题

### 2.1 测试题

#### 00 如果下边代码被执行，程序将怎么样？

```c
#include <stdio.h>

int main()
{
        while (1)
                ;

        return 0;
}
```

说明：程序无限运行，没有任何输出，即什么也不显示

#### 01 请问下边进入循环的条件是什么？

```c
……
while (!condition)
{
        // 循环体
}
……
```

说明：表达式 ！condition的结果为真值即为True

#### 02  比起 while 语句，do…while 语句的特点是什么？

说明：while语句是先根据判断条件是否执行循环体；而do...while语句则是先执行一次循环体，之后再进行判断。（必定先执行一次循环体中的代码）

#### 03  如果不上机实验，你能看出下边代码会打印哪个范围内的所有数值呢？

```c
#include <stdio.h>

int main()
{
        signed char i = 0;

        while (i <= 0)
        {
                printf("%d", i);
                i = i - 1;
        }

        return 0;
}
```

说明：声明的变量i 是表示有符号数，char类型的有符号数的取值范围为-128~127，则改程序最终输出的值的范围是[-128-0]

#### 04  请说明下边语句的作用。

```c
while ((ch = getchar()) == ' ')
        ;
```

说明;过滤掉空格。先 getchar() 函数获得的值存放到变量 ch 中，再检测 ch 的值是否为空格（' '），如果是，执行循环体的内容，即空语句，然后开始第二轮循环……

#### 05   为什么小甲鱼说 getchar() 返回值为 int 是为了==存放 EOF，而 EOF 通常被定义为 -1，char 类型即可存放，为啥还要 int 类型==？

说明：因为 char 默认定义为 unsigned char 还是 signed char 是取决于编译系统，所以 char 在某些编译系统可能无法存放负数；而 int 默认是 signed int。

### 2.2 动动手

#### 00 统计从键盘输入的一行英文句子中大写字母的个数。

##### 效果：![img](https://xxx.ilovefishc.com/forum/201602/13/171228gssrpey525vpri5u.png)

##### 代码实现

```c
//动动手 13-00 统计从键盘输入的一行英文句子中大写字母的个数。 
/*
  分析：需要一个变量存储大写字母的个数
  使用while循环和getchar()函数进行实现
  getchar()函数读取到换行（回车)符号的时候表示结束这行英文句子
 */
#include <stdio.h>

int main()
{#include <stdio.h>

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
```

#### 01  写一个程序，将用户输入的英文句子中的字母大小写进行调换（即大写字母转换为小写字母，小写字母转换为大写字母）

##### 实现效果![img](https://xxx.ilovefishc.com/forum/201602/13/171312n2kskuclcov2osth.png)

##### 代码实现

```c
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
```

#### 02 C 语言中有个 [atoi](http://bbs.fishc.com/thread-68742-1-1.html) 函数（定义于 <stdlib.h> 头文件中），用于将字符串中的值解析为对应的整型数字。现在要求我们自己写一个程序，实现类似的功能

##### 要求：

```
A.将用户输入的字符串中代表数字的字符转换为整型数值
B. 打印转换结果
C. 只打印第一组数字
```

##### 实现效果![img](https://xxx.ilovefishc.com/forum/201602/13/171504txvmshc7gg888qq4.png)

###### 代码实现

```c
#include <stdio.h>

int main()
{
        int ch;
        int num = 0;

        printf("请输入待转换的字符串：");

        do
        {
                ch = getchar();

                if (ch >= '0' && ch <= '9')
                {
                        num = 10 * num + (ch - '0');
                }
                else
                {
                        if (num)
                        {
                                break; // 如果已有数字，则退出循环
                        }
                }

        }
        while (ch != '\n');

        printf("结果是：%d\n", num);

        return 0;
}
```

##### 进阶要求

```
进阶要求（如果下边要求你能成功实现，请给自己点个赞！）
A. 如果字符串中不存在任何表示数值的字符，则打印“并未找到任何数值”.

B. 检测数值是否超出整型变量（int）可存放的范围，如果超出范围，则打印“数值超出范围，结果未定义！”的提醒。

C. 为了达到锻炼的效果，整型变量的范围需要自己计算，不使用 <limits.h> 头文件
```

###### 代码实现

```c
#include <stdio.h>
#include <math.h>

int main()
{
        int ch;
        long long num = 0;
        long long temp; // 临时变量，用于测试是否超出范围
        int is_overflow = 0;

        const int max_int = pow(2, sizeof(int) * 8) / 2 - 1;
        const int min_int = pow(2, sizeof(int) * 8) / 2 * (-1);

        printf("请输入待转换的字符串：");

        do
        {
                ch = getchar();

                if (ch >= '0' && ch <= '9')
                {
                        temp = 10 * num + (ch - '0');
                        if (temp > max_int || temp < min_int)
                        {
                                is_overflow = 1;
                                break;
                        }
                        else
                        {
                                num = temp;
                        }
                }
                else
                {
                        if (num)
                        {
                                break; // 如果已有数字，则退出循环
                        }
                }

        }
        while (ch != '\n');

        if (is_overflow)
        {
                printf("数值超出范围，结果未定义！\n");
        }
        else
        {
                if (!num)
                {
                        printf("并未找到任何数值！\n");
                }
                else
                {
                        printf("结果是：%d\n", num);
                }
        }

        return 0;
}
```

