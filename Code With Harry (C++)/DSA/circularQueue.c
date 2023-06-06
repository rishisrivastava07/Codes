#include<stdio.h>
#include<stdlib.h>

typedef struct Queue{
    int size;
    int front;
    int back;
    int* arr;
}Queue;

void createQueue(Queue* q, int sz){
    q->size = sz;
    q->front = q->back = -1;
    q->arr = (int*) malloc (q->size * sizeof(int));
}
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
    int x = -1;
    if(q->front == q->back){
        printf("Queue Underflow\n");
        // q->front = -1;
        return x;
    }
    // int temp = q->front;
    q->front++;
    x = q->arr[q->front];
    return x;
}
void display(Queue q){
    int i;
    for (i = q.front+1 ; i <= q.back; i++){
        printf("%d ",q.arr[i]);
    }
    printf("\n");
}
int main(){
    Queue q;
    int size,i,val;
    printf("Enter the size of Queue \n");
    scanf("%d",&size);
    createQueue(&q,size);

    for (i = 0; i < size; i++)
    {
        printf("Enter the value to queue : \n");
        scanf("%d",&val);
        enqueue(&q,val);
    }

    display(q);
    // printf("Dequeue element %d \n",dequeue(&q));
    // printf("Dequeue element %d \n",dequeue(&q));
    // printf("Dequeue element %d \n",dequeue(&q));

    
}