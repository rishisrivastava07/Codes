#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    struct Node* lchild;
    int data;
    struct Node* rchild;
}Node;

typedef struct Queue
{
    int size;
    int front;
    int rear;
    struct Node **arr; // *arr - is for array && *(*arr) is for Node pointer
}Queue;

void create(Queue *q,int size)
{
    q->size = size;
    q->front = q->rear = 0;
    q->arr = (Node **)malloc(q->size * sizeof(Node *));
}
void enqueue(Queue *q, Node*  x){
    if((q->rear+1)%q->size == q->front){
        printf("Queue is full\n");
        return ;
    }
    q->rear = (q->rear+1)%q->size;
    q->arr[q->rear] = x;
}
Node* dequeue(Queue *q){
    Node* x = NULL;
    if(q->front == q->rear ){
        printf("Queue is Empty\n");
        return x;
    }
    q->front = (q->front+1)%q->size;
    x = q->arr[q->front];
    return x;
}

int isEmpty(Queue q){
    return (q.front == q.rear);
}