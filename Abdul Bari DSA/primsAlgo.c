#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
}stack;

stack *top = NULL;

void push(int value)
{
    stack *newNode;
    newNode = (stack *)malloc(sizeof(stack));
    newNode->data = value;

    if (top == NULL){
        newNode->next = NULL;
    }
    else{
        newNode->next = top;
    }
    top = newNode;
    printf("%d is pushed\n", top->data);
}

void pop()
{
    if (top == NULL){
        printf("\nStack Underflow\n");
    }
    else{
        stack *temp = top;
        int temp_data = top->data;
        top = top->next;
        free(temp);
        printf("%d is popped\n", temp_data);
    }
}
void display()
{
    if (top == NULL)
    {
        printf("\nStack Underflow\n");
    }

    else
    {
        printf("The stack is \n");
        stack *temp = top;

        while (temp)
        {
            printf("| %d |\n", temp->data);
            temp = temp->next;
        }

        printf("-----\n");
    }
}

int main()
{
    int choice, value;
    printf("\nImplementation of Stack using Linked List\n");

    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);

            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("\nWrong Choice\n");
        }
    }
}