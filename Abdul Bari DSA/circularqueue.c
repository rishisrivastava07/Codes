#include <stdio.h>
#include <stdlib.h>
typedef struct Queue
{
    int size;
    int front;
    int rear;
    int *arr;
}Queue;
void create(Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->arr = (int *)malloc(q->size * sizeof(int));
}
void enqueue(Queue *q, int x){
    if((q->rear+1)%q->size == q->front){
        printf("Queue is full\n");
        return ;
    }
    q->rear = (q->rear+1)%q->size;
    q->arr[q->rear] = x;
}
int dequeue(Queue *q){
    int x = -1;
    if(q->front == q->rear ){
        printf("Queue is Empty\n");
        return x;
    }
    q->front = (q->front+1)%q->size;
    x = q->arr[q->front];
    return x;
}
void display(Queue q)
{
    int i = q.front + 1;
    do{
        printf("%d ",q.arr[i]);
        i = (i+1)%q.size;
    }while(i != (q.rear+1)%q.size);

    printf("\n");
}
int main()
{
    Queue q;
    create(&q,5);

    enqueue(&q,3);
    display(q);
    enqueue(&q,13);
    display(q);
    enqueue(&q,23);
    display(q);
    enqueue(&q,33);
    display(q);

    printf("Dequeue \n");
    printf("%d \n",dequeue(&q));
    // display(q);
    printf("%d \n",dequeue(&q));
    // display(q);
    printf("%d \n",dequeue(&q));
    // display(q);

    printf("\n");
    
    enqueue(&q,43);
    display(q);
    enqueue(&q,53);
    display(q);
    enqueue(&q,63);
    display(q);
    enqueue(&q,73);
    display(q);
    return 0;
}
