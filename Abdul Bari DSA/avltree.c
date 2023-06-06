#include<stdio.h>

struct Node{
    struct Node* lchild;
    int data;
    int height;
    struct Node* rchild;
}*avlnode = NULL;
int nodeHeight(struct Node* p){
    int hl,hr;
    hl = p && p->lchild?p->lchild->height : 0;
    hr = p && p->rchild?p->rchild->height : 0;
    return (hl>hr?hl+1:hr+1);
}

int balanceFactor(struct Node* p){
    //height of left sub-tree
    int hl,hr;
    hl = p && p->lchild?p->lchild->height : 0;
    hr = p && p->rchild?p->rchild->height : 0;

    return (hl-hr);
}
struct Node* LLRotation(struct Node* p){

    // struct Node* t = avlnode;
    struct Node* pL = p->lchild;
    struct Node* pLR = pL->rchild;

    // pL = avlnode;
    pL->rchild = p;
    p->rchild = pLR;
    p->height = nodeHeight(p);
    pL->height = nodeHeight(pL);

    if(avlnode == p){
        avlnode = pL;
    }
    return pL;
}
struct Node* LRRotation(struct Node* p){
    struct Node* pL = p->lchild;
    struct Node* pLR = pL->rchild;

    pL->rchild = pLR->lchild;
    p->lchild = pLR->rchild;

    pLR->lchild = pL;
    pLR->rchild = p;

    pL->height = nodeHeight(pL);
    p->height = nodeHeight(p);
    pLR->height = nodeHeight(pLR);

    if(avlnode == p){
        avlnode = pLR;
    }
    return pLR;
}
struct Node* rinsert(struct Node* p, int key){
    struct Node* t = NULL;

    if(p == NULL){
        t = (struct Node*) malloc (sizeof(struct Node*));
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if(key < p->data){
        p->lchild = rinsert(p->lchild,key);
    }
    else if(key > p->data){
        p->rchild = rinsert(p->rchild,key);
    }

    p->height = nodeHeight(p);
    if(balanceFactor(p) == 2 && balanceFactor(p->lchild) == 1){
        return LLRotation(p);
    }
    else if(balanceFactor(p) == 2 && balanceFactor(p->rchild) == -1){
        return LRRotation(p);
    }
    else if(balanceFactor(p) == -2 && balanceFactor(p->rchild) == -1){
        return RRRotation(p);
    }
    else if(balanceFactor(p) == -2 && balanceFactor(p->rchild) == 1){
        return RLRotation(p);
    }
    return p;
}
int main(){
    avlnode = rinsert(avlnode,10);
    rinsert(avlnode,5);
    rinsert(avlnode,2);


    return 0;
}