//函数玩法
#include <stdio.h>
//函数玩法步骤一:函数定义
//形式1:定义无返回值并且没有形参的函数
void foo(void) {
    printf("void foo(void)\n");
    //return; //return可以省略
}
void foo1(void) {
    printf("void foo1(void)\n");
    return; //函数从这里直接返回
    printf("我会被执行吗?\n");
}
//形式2:定义无形参有返回值
int bar(void) {
    return 520; //返回常量(默认类型也是int)
}
int bar1(void) {
    int a = 520;
    a++;
    return a; //返回a变量的值521
}
int bar2(void) {
    printf("int bar2(void)\n");
} //忘记编写return,gcc会给返回一个乱七八糟的随机数
char bar3(void) {
    return 300;//返回int类型的300,而函数要求返回一个char类型,所以gcc将int类型转换为
                //char类型之后返回最终的结果44
}
//形式3:定义有形参无返回值的函数
void swap(int a, int b) {//形参变量a,b分别保存将来调用swap函数时给函数传递的参数
    //实现两个数的交换
    int c = a;
    a = b;
    b = c;
    printf("swap函数:a = %d, b = %d\n", a, b); //形参交换成功
}
//形式4:定义有返回值有形参的函数
int add(int a, int b) {
    return a + b; //返回a,b相加的结果
}
//定义main函数,程序的入口只认main函数,所以在main函数内部调用其他函数
int main(void) {
    //函数玩法步骤二:函数调用,使用函数
    foo(); //调用无形参无返回值函数
    foo1(); //调用无形参无返回值函数
    int ret = 0; //用ret变量暂存函数的返回值
    ret = bar(); //调用无形参有返回值函数bar,返回520,用ret来保存返回值520
    printf("bar函数返回值是%d\n", ret);
    ret = bar1(); //调用无形参有返回值函数bar1,返回a的值521,用ret来保存返回值521
    printf("bar1函数返回值是%d\n", ret);
    ret = bar2(); //调用无形参有返回值函数bar2,返回随机数,用ret来保存返回值
    printf("bar2函数返回值是%d\n", ret);
    ret = bar3(); //调用无形参有返回值函数bar,返回转换之后的值44,用ret来保存返回值
    printf("bar3函数返回值是%d\n", ret);
    int x = 10;
    int y = 20;
    swap(x, y);//x,y分别叫实参变量,两块独立的内存,调用swap函数时会将实参变量x,y的值
               //10,20分别拷贝赋值给swap函数的形参变量a(10),b(20)
               //实参变量和形参变量的内存是独立的,各自是各自的
                //调用此函数的目的就是想实现实参x,y的交换
    printf("x = %d, y = %d\n", x, y); //交换失败
    ret = add(x, y); //调用add函数传递实参变量x,y的值10,20给add函数
                    //将来add函数的形参a,b来保存10,20,并且用ret来保存
                    //add函数的返回值a+b=30
    printf("add函数返回值是%d\n", ret);
    return 0;
}




