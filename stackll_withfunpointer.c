#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node 
{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int value);
void pop();
void traverse();

int main() 
{
    int choice, value;
    printf("\nStack Operations\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Traverse\n");
    printf("4. Exit\n");
    
    while (1) 
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                traverse();
                break;
            case 4:
                printf("Exiting program\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}

void push(int value) 
{
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL) 
    {
        printf("Stack Overflow...\n");
        return;
    }
    newnode->data = value;
    newnode->next = top;
    top = newnode;
    printf("%d pushed to stack\n", value);
}

void pop() 
{
    if (top == NULL) 
    {
        printf("Stack Underflow\n");
        return;
    }
    struct Node* temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
}

void traverse() 
{
    if (top == NULL) 
    {
        printf("Stack is empty\n");
        return;
    }
    struct Node* tmp = top;
    printf("Stack elements: ");
    while (tmp != NULL) 
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}
