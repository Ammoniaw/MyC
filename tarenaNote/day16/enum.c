#include <stdio.h>
enum Color {
    RED, //好比给0取别名为RED
    GREEN,//好比给1取别名为GREEN
    BLUE, //好比给2取别名为BLUE
    BLACK=10, //好比给10取别名叫BLACK
    YELLOW //好比给11取别名叫YELLOW
};
#define WHITE   12 
int main(void) {
    printf("%d %d %d %d %d %d\n", 
            RED, GREEN, BLUE, BLACK, YELLOW, WHITE);
    return 0;
}
