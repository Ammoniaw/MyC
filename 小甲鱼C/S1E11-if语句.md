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

01根据下边代码画出流程图，并说明改程序的用途

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

#### 02 要求用户输入一个字符，如果是大写字母，将其转换为小写；如果是小写字母，将其转换为大写；其他字符不做处理，并输出结果。

``` c

```

#### 03 根据流程图来编写代码

```c

```