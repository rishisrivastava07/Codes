#include<stdio.h>
#include<stdlib.h>
struct Node{
    int player_id;
    struct Node *next;
};

int main(){
    int n,k,i,count;
    printf("Enter the number of Players : ");
    scanf("%d",&n);
   
    printf("Enter the value of k : ");
    scanf("%d",&k);
   
    struct Node* start = (struct Node*) malloc (sizeof(struct Node));
    struct Node *ptr, *new_node;
    
    start->player_id = 1;
    
    ptr = start;
    for(i = 2; i <= n; i++){
        new_node = malloc(sizeof(struct Node));
        ptr->next = new_node;
        new_node->player_id = i;
        new_node->next = start;
        ptr = new_node;
    }

    for(count = n; count > 1; count --){
        for(i = 1; i < k; ++i){
            ptr = ptr->next;
        }
        printf("%d deleted ",ptr->next->player_id );
        ptr->next = ptr->next->next;
        printf("\n");
    }
    printf("\n The Winner is Player %d",ptr->player_id);
    return 0;
}