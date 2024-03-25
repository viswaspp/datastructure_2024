#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int front = -1, rear = -1;
int q[MAX];

void Ins_queue(int data); 
int Del_queue();
void traverse();

int main() 
{
    int choice, data;

    while(1) 
    {
        printf("\n\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &data);
                Ins_queue(data);
                break;
            case 2:
                data = Del_queue();
                if (data != -1)
                    printf("Deleted element: %d\n", data);
                break;
            case 3:
                traverse();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } 

    return 0;
}

void Ins_queue(int data) 
{
    if (rear == MAX - 1) 
    {
        printf("Queue Overflow\n");
    } 
    else 
    {
        if (front == -1) {
            front = 0;
        }
        rear++;
        q[rear] = data;
    }
}

int Del_queue() 
{
    int data;
    if (front == -1 || front > rear) 
    {
        printf("Queue Underflow\n");
        return -1; 
    } 
    else 
    {
        data = q[front];
        front++;
        if (front > rear) 
        {
            front = rear = -1;
        }
        return data;
    }
}

void traverse() 
{
    if (front == -1) 
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) 
    {
        printf("%d ", q[i]);
    }
    printf("\n");
}
