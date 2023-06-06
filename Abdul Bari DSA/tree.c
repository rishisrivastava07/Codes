#include<stdlib.h>
#include<stdio.h>
#include "queueHeader.h"

struct Node* root = NULL;
void createTree(){
    struct Node *p, *t;
    int x;
    struct Queue q;
    create(&q,100);

    printf("Enter the root value = ");
    scanf("%d",&x);

    root = (struct Node*) malloc (sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q,root);

    while(!isEmpty(q)){
        p = dequeue(&q);
        printf("Enter the value of lchild of %d = ",p->data);
        scanf("%d",&x);
        if(x != -1){
            t = (struct Node*) malloc (sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q,t);
        }
        printf("Enter the value of rchild of %d = ",p->data);
        scanf("%d",&x);
        if(x != -1){
            t = (struct Node*) malloc (sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q,t);
        }
    }
}
void levelOrder(struct Node* root){
    struct Queue q;
    create(&q,100);

    printf("%d",root->data);
    enqueue(&q,root);

    while(!isEmpty(q)){
        root = dequeue(&q);
        if(root->lchild){
            printf("%d",root->lchild->data);
            enqueue(&q,root->lchild);
        }
        if(root->rchild){
            printf("%d ",root->rchild->data);
            enqueue(&q,root->rchild);
        }
    }
}
void preOrderTraversal(struct Node* p){
    if(p){
        printf("%d ",p->data);
        preOrderTraversal(p->lchild);
        preOrderTraversal(p->rchild);
    }
}
void inOrderTraversal(struct Node* p){
    if(p){
        inOrderTraversal(p->lchild);
        printf("%d ",p->data);
        inOrderTraversal(p->rchild);
    }
}
void postOrderTraversal(struct Node* p){
    if(p){
        postOrderTraversal(p->lchild);
        postOrderTraversal(p->rchild);
        printf("%d ",p->data);
    }
}
int main(){
    createTree();
    printf("\n");
    levelOrder(root);
    // preOrderTraversal(root);
    // printf("\n");
    // inOrderTraversal(root);
    // printf("\n");
    // postOrderTraversal(root);
    // printf("\n");
    return 0;
}