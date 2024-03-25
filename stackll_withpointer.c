#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node 
{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

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
            {
                struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
                if (newnode == NULL) 
                {
                    printf("Stack Overflow...\n");
                    break;
                }
                printf("Enter value to push: ");
                scanf("%d", &value);
                newnode->data = value;
                newnode->next = top;
                top = newnode;
                printf("%d pushed to stack\n", value);
                break;
            }
            case 2:
            {
                if (top == NULL) 
                {
                    printf("Stack Underflow\n");
                    break;
                }
                struct Node* temp = top;
                printf("Popped element: %d\n", temp->data);
                top = top->next;
                free(temp);
                break;
            }
            case 3:
            {
                if (top == NULL) 
                {
                    printf("Stack is empty\n");
                    break;
                }
                struct Node* tmp = top;
                printf("Stack elements: ");
                while (tmp != NULL) 
                {
                    printf("%d ", tmp->data);
                    tmp = tmp->next;
                }
                printf("\n");
                break;
            }
            case 4:
                printf("Exiting program\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
