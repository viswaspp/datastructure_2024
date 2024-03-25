#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];  // Stack array to store 
int *top = NULL; // Pointer to the top of the stack

void push(int value);
void pop();
void peek();
void traverse();

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
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;    
            case 4:
                traverse();
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

void push(int value) {
    if (top == &stack[MAX - 1]) // Check for stack overflow
    {
        printf("Stack Overflow... Cannot push element.\n");
    } 
    else 
    {
        if (top == NULL) 
        {
            top = stack; // Initialize top if it's NULL
        } 
        else 
        {
            top++; // Move the pointer to the next position
        }
        *top = value; // Push the value onto the stack
    }
}

void pop() {
    if (top == NULL)  // Check for stack underflow
    {
        printf("Stack Underflow... Cannot pop element.\n");
    }
    else 
    {
        printf("Popped element: %d\n", *top);
        if (top == stack) 
        {
            top = NULL; // Reset top if it's pointing to the base of the stack
        } 
        else 
        {
            top--; // Move the pointer to the previous position
        }
    }
}

void peek() {
    if (top == NULL) 
    {
        printf("Stack is empty.\n");
    } 
    else 
    {
        printf("Top element: %d\n", *top);
    }
}

void traverse() {
    if (top == NULL) 
    {
        printf("Stack is empty.\n");
    }
    else 
    {
        printf("Stack elements: ");
        int *tmp = top;
        while (tmp >= stack) // Traverse from top to bottom
        {
            printf("%d ", *tmp);
            tmp--; // Move to the previous element in the stack
        }
        printf("\n");
    }
}
