#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
    int size;
    int front;
    int back;
    int* arr;
}Queue;

void enqueue(Queue* q,int x){
    if(q->back == q->size-1){
        printf("Queue Overflow\n");
        return;
    }
    (q->back)++;
    printf("Element %d is enqueued\n",x);
    q->arr[q->back] = x;
}
int dequeue(Queue* q){
    if(q->front == q->back){
        printf("Queue Underflow\n");
        return -1;
    }
    // int temp = q->front;
    q->front++;
    return q->arr[q->front];
}
int main(){
    Queue q;
    q.size = 5;
    q.arr = (int*) malloc (q.size * sizeof(int));
    q.front = q.back = -1;

    enqueue(&q,2);
    enqueue(&q,3);
    enqueue(&q,4);
    enqueue(&q,6);
    enqueue(&q,14);
    enqueue(&q,10);
    enqueue(&q,10);
    int deq = dequeue(&q);
    printf("dequeue = %d\n",deq);
    deq = dequeue(&q);
    printf("dequeue = %d\n",deq);
    deq = dequeue(&q);
    printf("dequeue = %d\n",deq);
    deq = dequeue(&q);
    printf("dequeue = %d\n",deq);
    deq = dequeue(&q);
    printf("dequeue = %d\n",deq);
    deq = dequeue(&q);
    printf("dequeue = %d\n",deq);
    deq = dequeue(&q);
    printf("dequeue = %d\n",deq);
    return 0;
}