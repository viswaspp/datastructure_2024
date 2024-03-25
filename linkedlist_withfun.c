#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct node 
{
    int data;
    int next;
};
struct node nodes[MAX];
int head = -1; // Index of the first node in the linked list
int num_nodes = 0;

void createLinkedList();
void ins_Beg(int data);
void ins_End(int data);
void del_Beg();
void del_End();
void traverse();

int main() 
{
    char c;
    printf("Do you want to enter the data in nodes (y/n): ");
    scanf(" %c", &c);
    if (c == 'y' || c == 'Y') 
    {
        createLinkedList();
    } 
    else 
    {
        printf("!!!Empty Node!!!");
    }
    
    int choice;
    while (1) 
    {
        printf("\nEnter the choice\n");
        printf("1. Insertion at Beg\n2. Inserstion at End\n3. Deletion at Beg\n4. Deletion at End\n5. Traverse\n6. Exit\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                {
                    int data;
                    printf("Enter the data\n");
                    scanf("%d", &data);
                    ins_Beg(data);
                    break;
                }
            case 2:
                {
                    int data;
                    printf("Enter the data\n");
                    scanf("%d", &data);
                    ins_End(data);
                    break;
                }
            case 3:
                {
                    del_Beg();
                    break;
                }
            case 4:
                {
                    del_End();
                    break;
                }
            case 5:
                {
                    traverse();
                    break;
                }
            case 6:
                {
                    exit(0);
                }
            default:
                {
                    printf("Invalid choice\n");
                    break;
                }
        }
    }
    return 0;
}

void createLinkedList() {
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &num_nodes);

    for (int i = 0; i < num_nodes; i++) {
        int data;
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        
        nodes[i].data = data;
        if (i == num_nodes - 1) 
        {
            nodes[i].next = -1; // No next node
        } else {
            nodes[i].next = i + 1; // Next node's index
        }
        if (head == -1)
            head = i;
    }
}

void ins_Beg(int data) 
{
    // Create a new node and add at the beginning of the linked list
    nodes[num_nodes].data = data;
    nodes[num_nodes].next = head;
    head = num_nodes;
    num_nodes++;
}

void ins_End(int data) 
{
    // Create a new node and add at the end of the linked list
    nodes[num_nodes].data = data;
    nodes[num_nodes].next = -1;
    // If linked list is empty, set head to the new node, else find the last node and update its next
    if (head == -1)
        head = num_nodes;
    else 
    {
        int temp = head;
        while (nodes[temp].next != -1)
            temp = nodes[temp].next;
        nodes[temp].next = num_nodes;
    }
    num_nodes++;
}

void del_Beg() 
{
    if (head == -1)
        printf("No item to delete\n");
    else // Move head to the next node
    {
        head = nodes[head].next;
    }
}

void del_End() 
{
    if (head == -1)
        printf("No item to delete\n");
    else // Find the last node and remove its next 
    {
        int temp = head;
        int prev = -1;
        while (nodes[temp].next != -1) 
        {
            prev = temp;
            temp = nodes[temp].next;
        }
        if (prev == -1)
            head = -1;
        else
            nodes[prev].next = -1;
    }
}

void traverse() 
{
    if (head == -1)
        printf("No item to traverse\n");
    else 
    {
        int temp = head;
        while (temp != -1) 
        {
            printf("%d ", nodes[temp].data);
            temp = nodes[temp].next;
        }
        printf("\n");
    }
}
