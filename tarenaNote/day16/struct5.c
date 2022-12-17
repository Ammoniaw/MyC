//结构体作为函数的返回值和形参,要通过形参访问结构体函数的形参必是指针!
#include <stdio.h>
//声明描述学生信息的结构体类型
typedef struct {
    char name[32];
    int age;
}stu_t;
void show(stu_t st) {//st=stu1,gcc会把实参stu1的值赋值给st形参
    printf("%s, %d\n", st.name, st.age);
}
void grow(stu_t st) {
    st.age++; //仅仅修改的是形参st,压根没有修改实参stu1.age
}
void show_ok(stu_t *pst) {//pst=&stu1,通过pst可以直接访问实参stu1
    printf("%s, %d\n", pst->name, pst->age);
}
void grow_ok(stu_t *pst) {
    pst->age++; //直接修改实参stu1.age
}
stu_t get_student_info(void){
    stu_t stu = {"张三", 19};
    return stu; //返回结构体变量stu的值
}
stu_t *get_student_info_p(void) {
    stu_t stu = {"李四", 19};
    return &stu; //不能返回局部结构体变量stu的地址,否则返回空指针
}
int main(void) {
    stu_t stu1 = {"游哥", 18};
    show(stu1);//传递实参结构体变量stu1
    grow(stu1);//传递实参结构体变量stu1
    show(stu1);//传递实参结构体变量stu1
    show_ok(&stu1);//传递实参结构体变量stu1的首地址
    grow_ok(&stu1);//传递实参结构体变量stu1的首地址
    show_ok(&stu1);//传递实参结构体变量stu1的首地址
    stu_t stu2 = get_student_info();//stu2保存张三的信息
    printf("%s, %d\n", stu2.name, stu2.age);
    stu_t *pstu = get_student_info_p();//pstu保存返回的地址
    printf("%p\n", pstu);
    printf("%s, %d\n", pstu->name, pstu->age);
    return 0;
}
