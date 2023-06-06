#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

// Printing Nodes
void linkedListTraversal(struct Node* ptr){
    while(ptr != NULL){
        printf("%d \t",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
// Printing Nodes (reversely)
void revLinkedListTraversal(struct Node* ptr){
    // Base Case
    if (ptr == NULL)
       return;
 
    // Recursive Call
    revLinkedListTraversal(ptr->next);
    printf("%d \t", ptr->data);
}

// Count Nodes
int getCount(struct Node* head)
{
    int count = 0; 
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// insert at any index
struct Node* insertAtPosition(struct Node* head, int d, int pos){
    struct Node* ptr = (struct Node*) malloc (sizeof(struct Node));
    struct Node* temp = head;
    int i = 0;

    // edge cases
    if(pos <= 0){
        ptr->data = d;
        ptr->next = head;
        return ptr;
    }
    if(pos > getCount(head)){
        while(temp->next != NULL){
            temp = temp->next;
            i++;
        }

        ptr->data = d;
        ptr->next = NULL;
        temp->next = ptr;

        return head;
    }
    
    // at any index (0,n)
    while(i < pos-1){
        temp = temp->next;
        i++;
    }
    ptr->data = d;
    ptr->next = temp->next;
    temp->next = ptr;

    return head;
}

// Delete in any index
struct Node* deleteAtIndex(struct Node* head, int pos){
    struct Node* ptr = head;
    struct Node* temp = ptr->next;
    int i = 0;

    // edge cases
    if(pos <= 0){
        struct Node* ptr = head;
        head = head->next;
        free(ptr);
        return head;
    }

    if(pos > getCount(head)-1){
        struct Node* q = temp->next;
        while(q->next != NULL){
            temp = temp->next;
            q = q->next;
            i++;
        }
        temp->next = NULL;
        free(q);
        return head;
    }
    // at any index (0,n)
    while(i != pos-1){
        ptr = ptr->next;
        i++;
    }
    ptr->next = temp->next;

    free(temp);
    return head;
}
// Reverse Linked List
struct Node* revLinkedList(struct Node* head){
    struct Node* curr = head;
    struct Node* prev = NULL;

    while(curr != NULL){
        struct Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
int main(){

    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    struct Node* tail = (struct Node*) malloc(sizeof(struct Node));
    struct Node* second = (struct Node*) malloc(sizeof(struct Node));
    struct Node* third = (struct Node*) malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*) malloc(sizeof(struct Node));
  
    // Linking the nodes
    head->data = 2;
    head->next = second;
    second->data = 13;
    second->next = third;
    third->data = 20;
    third->next = fourth;
    fourth->data = 12;
    fourth->next = NULL;

    linkedListTraversal(head);
    // head = insertAtPosition(head,35,3);
    // head = deleteAtIndex(head,4);
    head = revLinkedList(head);
    // revLinkedListTraversal(head);
    linkedListTraversal(head);
    return 0;
}