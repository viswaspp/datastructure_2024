#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int front = -1, rear = -1;
int q[MAX];

int main() {
    int choice, data;

    while(1) {
        printf("\n\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &data);
                if (rear == MAX - 1) {
                    printf("Queue Overflow\n");
                } else {
                    if (front == -1) {
                        front = 0;
                    }
                    rear++;
                    q[rear] = data;
                }
                break;
            case 2:
                if (front == -1 || front > rear) {
                    printf("Queue Underflow\n");
                } else {
                    data = q[front];
                    front++;
                    if (front > rear) {
                        front = rear = -1;
                    }
                    printf("Deleted element: %d\n", data);
                }
                break;
            case 3:
                if (front == -1) {
                    printf("Queue is empty\n");
                } else {
                    printf("Queue elements: ");
                    for (int i = front; i <= rear; i++) {
                        printf("%d ", q[i]);
                    }
                    printf("\n");
                }
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
