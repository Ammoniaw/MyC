#include <stdio.h>
#include <string.h>
void merge(const char *a, const char *b, char *c) {
    for(;;) {
        if(*a && *b) { //a,b都不空
            if(*a < *b)
                *c++ = *a++; //放a
            else
                *c++ = *b++; //放b
        } else if(*a) { //b空a不空
            *c++ = *a++;
        } else if(*b) { //a空b不空
            *c++ = *b++;
        } else
            break; //都空了
    }
    *c = '\0'; //最后追加结束符
}
int main(void) {
    char a[] = "adgkmnoquw";
    char b[] = "behjloprsvwxy";
    char c[strlen(a)+strlen(b)+1]; //1:给结束符也留个位置
    merge(a, b, c);
    printf("%s + %s = %s\n", a, b, c);
    return 0;
}
