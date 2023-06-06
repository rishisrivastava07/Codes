#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node* lchild;
    int data;
    struct Node* rchild;
}*root = NULL;
/*
void insertNode(int key){
    struct Node* t = root;
    struct Node* r; // follow the pointer t or tail pointer
    struct Node* p; // used to create new node after searching
    if(root == NULL){
        p = (struct Node*)malloc(sizeof(struct Node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return ;
    }
    while(t != NULL){
        r = t;
        if(key == t->data){
            return ;
        }
        else if(key < t->data){
            t = t->lchild;
        }
        else{
            t = t->rchild;
        }
    }
    p = (struct Node*) malloc (sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if(p->data < r->data){
        r->lchild = p;
    }
    else{
        r->rchild = p;
    }
}
*/

struct Node* insertNode(struct Node* root, int key){
    struct Node* t = NULL;
    if(root == NULL){
        t = (struct Node*) malloc (sizeof(struct Node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if(key < root->data){
        root->lchild = insertNode(root->lchild,key);
    }
    else if(key > root->data){
        root->rchild = insertNode(root->rchild,key);
    }
    return root;
}

struct Node* searchNode(struct Node* root, int key){
    // recursively
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    else if(key < root->data){
        return searchNode(root->lchild,key);
    }
    else{
        return searchNode(root->rchild,key);
    }
    // iteratively
    // struct Node* t = root;
    // while(t != NULL){
    //     if(t->data == key){
    //         return t;
    //     }
    //     else if(key < t->data){
    //         t = t->lchild;
    //     }
    //     else{
    //         t = t->rchild;
    //     }
    // }
    // return NULL;
}
int height(struct Node* p){
    int x,y;
    if(p== NULL) return 0;

    x = height(p->lchild);
    y = height(p->rchild);
    return (x>y?x+1:y+1);
}

struct Node* inOrderPre(struct Node* p){
    while(p != NULL && p->rchild != NULL){
        p = p->rchild;
    }
    return p;
}
struct Node* inOrderSucc(struct Node* p){
    while(p != NULL && p->lchild != NULL){
        p = p->lchild;
    }
    return p;
}
struct Node* deleteNode(struct Node* p, int key){
    struct Node* q;

    if(p == NULL){
        return NULL;
    }
    if(p->lchild == NULL && p->rchild == NULL){
        if(p == root ){
            root = NULL;
        }
        free(p);
        return NULL;
    }
    if(key < p->data){
        p->lchild =  deleteNode(p->lchild,key);
    }
    else if(key < p->data){
        p->rchild =  deleteNode(p->rchild,key);
    }
    else{
        // replace node with inorder predecessor or inorder successor
        // if height of left sub tree is more then delete node from inorder predecessor otherwise from right hand side
        if(height(p->lchild) > height(p->rchild)){
            // delete inorder predeccessor
            q = inOrderPre(p->lchild);
            p->data = q->data;
            p->lchild = deleteNode(p->lchild,q->data);
        }
        else{
            q = inOrderSucc(p->rchild);
            p->data = q->data;
            p->rchild = deleteNode(p->rchild,q->data);
        }
    }
    return p;
}
void inOrder(struct Node* p){
    if(p != NULL){
        inOrder(p->lchild);
        printf("%d -> ",p->data);
        inOrder(p->rchild);
    }
}
int main(){
    // int r,i,n,val;
    // printf("Enter the elements to be inserted : ");
    // scanf("%d",&n);
    // printf("Enter the root element of Binary Search Tree : ");
    // scanf("%d",&r);
    // root = insert(root,r);
    // for ( i = 0; i < n-1; i++)
    // {
    //     scanf("%d",&val);
    //     insert(root,val);
    // }

    struct Node* root = NULL;
    struct Node* temp1;
    root = insertNode(root,10);
    insertNode(root,9);
    insertNode(root,15);
    insertNode(root,5);
    // insertNode(root,20);
    // insertNode(root,16);
    // insertNode(root,8);
    // insertNode(root,12);
    // insertNode(root,3);
    // insertNode(root,6);

    inOrder(root);

    // temp = searchNode(root,12);
    // if(temp != NULL){
    //     printf("Element is found %d",temp->data);
    // }
    deleteNode(root,10);
    deleteNode(root,15);
    printf("\n");
    // inOrder(root);
    // deleteNode(root,12);
    // printf("\n");
    inOrder(root);

}