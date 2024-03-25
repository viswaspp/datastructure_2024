#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void ins_beg(struct node *new1);
void ins_end(struct node *new1);
void ins_at_position(int position, struct node *new_node);
void del_beg();
void del_end();
void del_at_position(int position);
void traverse();
void create_nodes();

int main() 
{
    int choice;
    struct node *new1;
    char c;
    printf("Do you want to enter the data in nodes(y/n): ");
    scanf(" %c", &c);
    if (c == 'y' || c == 'Y') 
    {
        create_nodes();
    } 
    else 
    {
        printf("!Empty Node!\n");
    }

    while (1) 
    {
        printf("\nEnter the choice\n");
        printf("1. Insertion at Beg\n2. Inserstion at End\n3. Inserstion at Particular location\n");
        printf("4. Deletion at Beg\n5. Deletion at End\n6. Deletion at particular location\n");
        printf("7. Traverse\n8. Exit\n");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                new1 = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data: ");
                scanf("%d", &new1->data);
                new1->next = NULL;
                ins_beg(new1);
                break;
            case 2:
                new1 = (struct node *)malloc(sizeof(struct node));
                printf("Enter the data: ");
                scanf("%d", &new1->data);
                new1->next = NULL;
                ins_end(new1);
                break;
            case 3:
                {
                    int position;
                    printf("Enter the position for insertion: ");
                    scanf("%d", &position);
                    if (position < 1) 
                    {
                        printf("Invalid position\n");
                        break;
                    }
                    new1 = (struct node *)malloc(sizeof(struct node));
                    if (new1 == NULL) 
                    {
                        printf("Memory allocation failed\n");
                        break;
                    }
                    printf("Enter the data: ");
                    scanf("%d", &new1->data);
                    new1->next = NULL;
                    ins_at_position(position, new1);
                    break;
                }
            case 4:
                del_beg();
                break;
            case 5:
                del_end();
                break;
            case 6:
                {
                    int position;
                    printf("Enter the position for deletion: ");
                    scanf("%d", &position);
                    if (position < 1) 
                    {
                        printf("Invalid position\n");
                        break;
                    }
                    del_at_position(position);
                    break;
                }
            case 7:
                traverse();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
}

void ins_beg(struct node *new1) 
{
    if (head == NULL)
        head = new1;
    else {
        new1->next = head;
        head = new1;
    }
}

void ins_end(struct node *new1) 
{
    struct node *temp = head;
    if (head == NULL)
        head = new1;
    else 
    {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new1;
    }
}

void ins_at_position(int position, struct node *new_node) 
{
    if (position == 1) 
    {
        new_node->next = head;
        head = new_node;
        return;
    }
    struct node *current = head;
    int count = 1;
    while (current != NULL && count < position - 1) 
    {
        current = current->next;
        count++;
    }
    if (current == NULL) 
    {
        printf("Position out of range\n");
        return;
    }
    new_node->next = current->next;
    current->next = new_node;
}

void del_beg() 
{
    if (head == NULL) 
    {
        printf("No item to delete\n");
        return;
    }
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void del_end() 
{
    if (head == NULL) 
    {
        printf("No item to delete\n");
        return;
    }
    if (head->next == NULL) 
    {
        free(head);
        head = NULL;
        return;
    }
    struct node *temp = head;
    struct node *prev = NULL;
    while (temp->next != NULL) 
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}

void del_at_position(int position) 
{
    if (position == 1) {
        struct node *temp = head;
        if (head == NULL) 
        {
            printf("No item to delete\n");
            return;
        }
        head = head->next;
        free(temp);
        return;
    }
    struct node *current = head;
    int count = 1;
    while (current != NULL && count < position - 1) 
    {
        current = current->next;
        count++;
    }
    if (current == NULL || current->next == NULL) 
    {
        printf("Position out of range\n");
        return;
    }
    struct node *temp = current->next;
    current->next = temp->next;
    free(temp);
}

void traverse() 
{
    struct node *temp = head;
    if (head == NULL) 
    {
        printf("No item to traverse\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void create_nodes() 
{
    int num_nodes, data;
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &num_nodes);
    for (int i = 0; i < num_nodes; i++) 
    {
        struct node *new_node = (struct node *)malloc(sizeof(struct node));
        if (new_node == NULL) 
        {
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        new_node->data = data;
        new_node->next = NULL;
        if (head == NULL) 
        {
            head = new_node;
        } else 
        {
            struct node *temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = new_node;
        }
    }
}
