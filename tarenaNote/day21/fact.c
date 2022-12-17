#include <stdio.h>
//n!=n*(n-1)!
unsigned int fact(unsigned int n) {
    if(n <= 1)
        return 1;
    return n*fact(n-1);
}
int main(void) {
    unsigned int n = 5;
    printf("%d\n", fact(n));
    return 0;
}
