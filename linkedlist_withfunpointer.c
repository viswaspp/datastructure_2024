#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp = NULL;

void ins_beg();
void ins_end();
void del_beg();
void del_end();
void traverse();
void print_list();  
void create_nodes(); 

int main()
{
    int choice, n;
    struct node *new1;
    char c;
    printf("Do you want to enter the data in nodes(y/n): ");
    scanf(" %c",&c);
    if(c=='y' || c=='Y')
    {
    create_nodes();
    print_list();
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
        switch(choice){
            case 1:
                    new1 = (struct node*)malloc(sizeof(struct node));
                    printf("Enter the data\n");
                    scanf("%d",&new1->data);
                    new1->next = NULL;
                    ins_beg(new1);
                    print_list();
                    break;
            case 2:
                    new1 = (struct node*)malloc(sizeof(struct node));
                    printf("Enter the data\n");
                    scanf("%d",&new1->data);
                    new1->next = NULL;
                    ins_end(new1);
                    print_list();
                    break;
            case 3:
                    del_beg();
                    print_list();
                    break;
            case 4:
                    del_end();
                    print_list();
                    break;
            case 5:
                    traverse();
                    break;
            default:
                    exit(1);
        }
    }
}

void ins_beg(struct node *new1)
{
    if(head == NULL)
        head = new1;
    else
    {
        new1->next = head;
        head = new1;
    }
}

void ins_end(struct node *new1)
{
    temp = head;
    if(head == NULL)
        head = new1;
    else
    {
        while(temp->next!= NULL)
            temp = temp->next;
        temp->next = new1;
    }
}

void del_beg(){
    struct node *temp = head;
    if(head == NULL)
        printf("No item to delete\n");
    else
        head = head->next;
        free(temp);
        temp = NULL;
}

void del_end()
{
    struct node *temp = head;
    struct node *temp1 = head;
    if(head == NULL)
        printf("No item to delete\n");
    else
    {
        while(temp1->next != NULL)
        {
            temp = temp1;
            temp1 = temp1->next;
        }
        if(temp1 == head)
            head = NULL;
        else
            temp->next = NULL;
    }
    free(temp1); 
    temp1 = NULL;
}

void traverse()
{
    struct node *temp = head;
    if(head == NULL)
        printf("No item to traverse\n");
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void print_list() 
{
    printf("Linked List: ");
    traverse();
    printf("\n");
}

void create_nodes() 
{
    int num_nodes, data;
    struct node *new_node;
    
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &num_nodes);
    
    for(int i = 0; i < num_nodes; i++) 
    {
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
