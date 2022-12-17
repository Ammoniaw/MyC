//queue.c:队列的各种定义
#include "queue.h"
void queue_init(queue_t *queue, int cap) {
    queue->arr = malloc(sizeof(int)*cap);
    queue->cap = cap;
    queue->size = 0;
    queue->rear = 0;
    queue->front = 0;
}
void queue_deinit(queue_t *queue) {
    free(queue->arr);
    queue->cap = 0;
    queue->size = 0;
    queue->rear = 0;
    queue->front = 0;
}
int queue_full(queue_t *queue) {
    return queue->size >= queue->cap;//满返回1否则0
}
int queue_empty(queue_t *queue) {
    return !queue->size;//空返回1否则0
}
void queue_push(queue_t *queue, int data) {
    if(queue->rear >= queue->cap)
        queue->rear = 0;//构造循环入队
    queue->arr[queue->rear++] = data;
    queue->size++;//更新计数
}
int queue_pop(queue_t *queue) {
    if(queue->front >= queue->cap)
        queue->front = 0; //构造循环出队
    queue->size--; //更新计数
    return queue->arr[queue->front++];
}
int queue_size(queue_t *queue) {
    return queue->size;
}





