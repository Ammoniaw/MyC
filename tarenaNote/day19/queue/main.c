//main.c:测试
#include "queue.h"
int main(void) {
    queue_t queue;
    queue_init(&queue, 4);
    for(int i = 10; i <= 40; i += 10)
        if(!queue_full(&queue))
            queue_push(&queue, i);//入:10 20 30 40
    printf("有效个数:%d\n", queue_size(&queue));
    for(int i = 0; i < 2; i++)
        if(!queue_empty(&queue))
            printf("%d ", queue_pop(&queue));//10 20
    printf("\n");
    printf("有效个数:%d\n", queue_size(&queue));
    for(int i = 50; i <= 60; i += 10)
        if(!queue_full(&queue))
            queue_push(&queue, i);//入:50 60 30 40
    while(!queue_empty(&queue))
        printf("%d ", queue_pop(&queue));//30...60
    printf("\n");
    queue_deinit(&queue);
    return 0;
}
