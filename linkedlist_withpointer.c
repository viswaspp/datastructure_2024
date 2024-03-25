#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

int main()
{
    int choice;
    struct node *temp;// A temporary pointer for traversing the linked list
    char c;
    printf("Do you want to enter the data in nodes(y/n): ");
    scanf(" %c",&c);
    if(c=='y' || c=='Y')
    {
        int num_nodes, data;
        struct node *new_node;

        printf("Enter the number of nodes you want to create: ");
        scanf("%d", &num_nodes);

        for(int i = 0; i < num_nodes; i++) 
        {
            // Allocate memory for a new node
            new_node = (struct node*)malloc(sizeof(struct node));
            printf("Enter data for node %d: ", i+1);
            scanf("%d", &data);
            new_node->data = data;
            new_node->next = NULL;
            if(head == NULL)
                head = new_node;
            else 
            {
                struct node *temp = head;
                while(temp->next != NULL)
                    temp = temp->next;
                temp->next = new_node;
            }
        }
    }
    else
    {
        printf("!Empty Node!");
    }

    while(1)
    {
        printf("\nEnter the choice\n");
        printf("1. Insertion at Beg\n2. Inserstion at End\n3. Deletion at Beg\n4. Deletion at End\n5. Traverse\n6. Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:// Insertion at the beginning of the linked list
                {
                    struct node *new1 = (struct node*)malloc(sizeof(struct node));
                    printf("Enter the data\n");
                    scanf("%d",&new1->data);
                    new1->next = head;
                    head = new1;
                    break;
                }
            case 2:// Insertion at the end of the linked list
                {
                    struct node *new1 = (struct node*)malloc(sizeof(struct node));
                    printf("Enter the data\n");
                    scanf("%d",&new1->data);
                    new1->next = NULL;
                    if(head == NULL)
                        head = new1;
                    else
                    {
                        temp = head;
                        while(temp->next != NULL)
                            temp = temp->next;
                        temp->next = new1;
                    }
                    break;
                }
            case 3:// Deletion at the beginning of the linked list
                {
                    if(head == NULL)
                        printf("No item to delete\n");
                    else
                    {
                        temp = head;
                        head = head->next;
                        free(temp);// Free the memory of the deleted node
                    }
                    break;
                }
            case 4:// Deletion at the end of the linked list
                {
                    if(head == NULL)
                        printf("No item to delete\n");
                    else
                    {
                        struct node *prev = NULL;
                        temp = head;
                        while(temp->next != NULL)
                        {
                            prev = temp;
                            temp = temp->next;
                        }
                        if(prev == NULL) // Only one node
                            head = NULL;
                        else
                            prev->next = NULL;
                        free(temp);// Free the memory of the deleted node
                    }
                    break;
                }
            case 5: // Traverse the linked list and print its elements
                {
                    temp = head;
                    if(head == NULL)
                        printf("No item to traverse\n");
                    else
                    {
                        while(temp != NULL)
                        {
                            printf("%d ",temp->data);
                            temp = temp->next;
                        }
                    }
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
