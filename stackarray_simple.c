#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];  // Stack array to store 
int top = -1;

int main() 
{
    int choice;
    int value;

    while (1) 
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Traverse\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the value to push: ");
                scanf(" %d", &value);
                if (top == MAX - 1) // Check for stack overflow
                {
                    printf("Stack Overflow... Cannot push element.\n");
                } 
                else 
                {
                    top = top + 1;
                    stack[top] = value; // Push the value onto the stack
                }
                break;
            case 2:
                if (top == -1)  // Check for stack underflow
                {
                    printf("Stack Underflow... Cannot pop element.\n");
                }
                else 
                {
                    printf("Popped element: %d\n", stack[top]);
                    top = top - 1; // Decrement top to remove the element
                }
                break;
            case 3:
                if (top == -1) 
                {
                    printf("Stack is empty.\n");
                } 
                else 
                {
                    printf("Top element: %d\n", stack[top]);
                }
                break;    
            case 4:
                if (top == -1) 
                {
                    printf("Stack is empty.\n");
                }
                else 
                {
                    printf("Stack elements: ");
                    int tmp = top;
                    for (int i = tmp; i > -1; i--) 
                    {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
                break;
            case 5:
                printf("Exiting..\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
