#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int *front = NULL, *rear = NULL;
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
                if (rear == &q[MAX - 1]) {
                    printf("Queue Overflow\n");
                } else {
                    if (front == NULL) {
                        front = q;
                        rear = q;
                    } else {
                        rear++;
                    }
                    *rear = data;
                }
                break;
            case 2:
                if (front == NULL || front > rear) {
                    printf("Queue Underflow\n");
                } else {
                    data = *front;
                    front++;
                    if (front > rear) {
                        front = NULL;
                        rear = NULL;
                    }
                    printf("Deleted element: %d\n", data);
                }
                break;
            case 3:
                if (front == NULL) {
                    printf("Queue is empty\n");
                } else {
                    printf("Queue elements: ");
                    for (int *i = front; i <= rear; i++) {
                        printf("%d ", *i);
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
