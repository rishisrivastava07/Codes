// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
//     struct Node* prev;
// };

// struct Node* addToEmpty(struct Node* head, int data){
//     struct Node* temp = malloc(sizeof(struct Node));
//     temp->prev = NULL;
//     temp->data = data;
//     temp->next = NULL;
//     head = temp;
//     return head;
// }
// struct Node* insertAtBegin(struct Node* head, int data){
//     struct Node* temp = (struct Node*) malloc (sizeof(struct Node*));
//     temp->prev = NULL;
//     temp->data = data;
//     temp->next = NULL;

//     temp->next = head;
//     head->prev = temp;
//     head = temp;

//     return head;
// }

// struct Node* insertAtLast(struct Node* head, int data){
//     struct Node *temp, *tp;
//     temp = malloc(sizeof(struct Node*));
//     temp->prev = NULL;
//     temp->data = data;
//     temp->next = NULL;

//     tp = head;
//     while(tp->next != NULL){
//         tp = tp->next;
//     }
//     tp->next = temp;
//     temp->prev = tp;
//     return head;
// }

// struct Node* insertAtIndex(struct Node* head, int data, int pos){
//     struct Node* newP = NULL;
//     struct Node* temp = head;
//     struct Node* temp2 = NULL;

//     newP = addToEmpty(newP,data);

//     while(pos != 1){
//         temp = temp->next;
//         pos--;
//     }
//     if(temp->next == NULL){
//         temp->next = newP;
//         newP->prev = temp;
//     }
//     else{
//         temp2 = temp->next;
//         temp->next = newP;
//         temp2->prev = newP;

//         newP->prev = temp;
//         newP->next = temp2;
//     }

//     return head;
// }

// // struct Node* insertAtTail(struct Node* tail,int data){
// //     struct Node* ptr =
// // }
// int main(){
//     struct Node* head = NULL;
//     struct Node* ptr;
//     head = addToEmpty(head,45);
//     head = insertAtBegin(head,6);
//     head = insertAtLast(head,96);
//     // head = insertAtLast(head,16);
//     head = insertAtIndex(head,7,3);

//     ptr = head;
//     while(ptr != NULL){
//         printf("%d \t",ptr->data);
//         ptr = ptr->next;
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node* prev;
//     struct Node* next;
// };

// int main(){
//     struct Node* head;
//     struct Node* second;
//     struct Node* third;
//     struct Node* fourth;
//     struct Node* fifth;
//     struct Node* ptr = NULL;

//     head->prev = NULL;
//     head->data = 7;
//     head->next = second;
//     second->prev = head;
//     second->data = 9;
//     second->next = third;
//     third->prev = second;
//     third->data = 1;
//     third->next = fourth;
//     fourth->prev = third;
//     fourth->data = 29;
//     fourth->next = fifth;
//     fifth->prev = fourth;
//     fifth->data = 17;
//     fifth->next = NULL;

//     // while(ptr->next != NULL){
//     //     ptr = ptr->next;
//     // }
//     printf("%d \t",head->data);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head;
void insertbeginning(int item){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL){
        printf("\nOVERFLOW");
    }
    else{
        if (head == NULL){
            ptr->next = NULL;
            ptr->prev = NULL;
            ptr->data = item;
            head = ptr;
        }
        else{
            ptr->data = item;
            ptr->prev = NULL;
            ptr->next = head;
            head->prev = ptr;
            head = ptr;
        }
    }
}

int main(){
    int choice, item;
    printf("Enter an data to be")
    do{
        printf("\nEnter the item which you want to insert : ");
        scanf("%d", &item);
        insertbeginning(item);
        printf("\nPress 1 to insert more ? ");
        scanf("%d", &choice);
    } while (choice == 1);
    return 0;
}
