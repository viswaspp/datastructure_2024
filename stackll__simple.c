#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Node structure for the linked list
struct Node 
{
    int data;
    int next; // Index of the next element in the array
};

struct Node stack[MAX + 1]; // Initializing an empty stack

int top = 0; // Index of the top element in the stack

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
                if (top == MAX) 
                {
                    printf("Stack Overflow\n");
                    break;
                }
                stack[top].data = value;
                stack[top].next = top + 1; // Update next pointer to point to the next index
                top++;
                printf("%d pushed to stack\n", value);
                break;
            case 2:
                if (top == 0) 
                {
                    printf("Stack Underflow\n");
                    break;
                }
                printf("Popped element: %d\n", stack[top - 1].data);
                top--;
                break;
            case 3:
                if (top == 0) 
                {
                    printf("Stack is empty\n");
                    break;
                }
                printf("Stack elements: ");
                int index = 0;
                while (index != top) 
                {
                    printf("%d ", stack[index].data);
                    index = stack[index].next;
                }
                printf("\n");
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
