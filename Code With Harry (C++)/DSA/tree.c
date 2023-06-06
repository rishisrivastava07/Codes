#include<stdlib.h>
#include<stdio.h>

typedef struct Queue{
    int size;
    int front;
    int rear;
    int* arr;
}queue;

void create(queue* q, int sz){
    q->size = sz;
    q->front = q->rear = 0;
    q->arr = (int*) malloc (q->size * sizeof(int));
}

void enqueue(queue* q, int val){
    if(q->rear == q->size){
        printf("Queue Overflow\n");
        return;
    }
    q->rear++;
    q->arr[q->rear] = val;
}

int dequeue(queue* q){
    if(q->front > q->rear){
        printf("Queue Underflow\n");
        return -1;
    }
    q->front++;
    return q->arr[q->front];
}
int main(){
    
    return 0;
}