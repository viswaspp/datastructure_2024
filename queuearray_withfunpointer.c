#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int *front = NULL, *rear = NULL;
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
                exit(0); 
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    } 
    return 0;
}

void Ins_queue(int data) 
{
    if (rear == &q[MAX - 1]) 
    {
        printf("Queue Overflow\n");
    } 
    else 
    {
        if (front == NULL) 
        {
            front = q;
            rear = q;
        } 
        else 
        {
            rear++;
        }
        *rear = data;
    }
}

int Del_queue() 
{
    int data;
    if (front == NULL || front > rear) 
    {
        printf("Queue Underflow\n");
        return -1;
    } 
    else 
    {
        data = *front;
        front++;
        if (front > rear) 
        {
            front = NULL;
            rear = NULL;
        }
        return data;
    }
}

void traverse() 
{
    if (front == NULL) 
    {
        printf("Queue is empty\n");
    } 
    else 
    {
        printf("Queue elements: ");
        for (int *i = front; i <= rear; i++) 
        {
            printf("%d ", *i);
        }
        printf("\n");
    }
}
