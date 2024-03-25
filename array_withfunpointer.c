#include <stdio.h>
#include <stdlib.h>

void traverse(int arr[], int size);
void ins_Beg(int arr[], int *size, int element);
void ins_End(int arr[], int *size, int element);
void ins_Loc(int arr[], int *size, int element, int location);
void ins_BeforeAfterElem(int arr[], int *size, int element, int target, char position);
void del_Beg(int arr[], int *size);
void del_End(int arr[], int *size);
void del_Loc(int arr[], int *size, int location);
void del_BeforeAfterElem(int arr[], int *size, int target, char position);

int main() 
{
    int choice, size;
    int *arr = NULL;
    char c;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array (plus one additional element for insertion)
    arr = (int *)malloc((size + 1) * sizeof(int));

    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        return -1;
    }
    
    printf("Do you want to enter the data(y/n): ");
    scanf(" %c",&c);
    if(c=='y' || c=='Y')
    {
    for (int i = 0; i < size; i++) 
    {
        arr[i] = 0;
    }
    
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    traverse(arr, size);
    printf("\n");
    }
    else
    {
        printf("Array is empty");
    }
    do {
        printf("\nMenu:\n");
        printf("1. Traverse Array\n");
        printf("2. Insertion\n");
        printf("3. Deletion\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
    case 1:
        printf("\nArray elements: ");
        traverse(arr, size);
        break;
    case 2:
        printf("\nInsertion Operations:\n");
        printf("1. Insert at Beginning\n2. Insert at End\n3. Insert at Location\n4. Insert Before/After Element\nEnter your choice: ");
        int insertChoice;
        scanf("%d", &insertChoice);
        switch (insertChoice) 
        {
            case 1: 
            {
                int element;
                printf("Enter element to insert at beginning: ");
                scanf("%d", &element);
                ins_Beg(arr, &size, element);
                break;
            }
            case 2: 
            {
                int element;
                printf("Enter element to insert at end: ");
                scanf("%d", &element);
                ins_End(arr, &size, element);
                break;
            }
            case 3: 
            {
                int element, location;
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter location to insert: ");
                scanf("%d", &location);
                ins_Loc(arr, &size, element, location);
                break;
            }
            case 4: 
            {
                int element, target;
                char position;
                printf("Enter element to insert: ");
                scanf("%d", &element);
                printf("Enter target element: ");
                scanf("%d", &target);
                printf("Enter 'B' to insert before or 'A' to insert after: ");
                scanf(" %c", &position);
                ins_BeforeAfterElem(arr, &size, element, target, position);              
                break;
            }
            default:
                printf("Invalid choice!\n");
        }
        break;
    case 3:
        printf("\nDeletion Operations:\n");
        printf("1. Delete from Beginning\n2. Delete from End\n3. Delete from Location\n4. Delete Before/After Element\nEnter your choice: ");
        int deleteChoice;
        scanf("%d", &deleteChoice);
        switch (deleteChoice) 
        {
            case 1:
                del_Beg(arr, &size);
                break;
            case 2:
                del_End(arr, &size);
                break;
            case 3: 
            
            {
                int location;
                printf("Enter location to delete: ");
                scanf("%d", &location);
                del_Loc(arr, &size, location);
                break;
            }
            case 4: 
            {
                int target;
                char position;
                printf("Enter target element: ");
                scanf("%d", &target);
                printf("Enter 'B' to delete element before or 'A' to delete element after: ");
                scanf(" %c", &position);
                del_BeforeAfterElem(arr, &size, target, position);
                break;
            }
            default:
                printf("Invalid choice!\n");
        }
        break;
    case 4:
        printf("Exiting...\n");
        break;
    default:
        printf("Invalid choice!\n");
        }
        if (choice != 4) 
        {
    printf("\nArray elements after operation: ");
    traverse(arr,size);
    printf("\n");
        }
    } while (choice != 4);

    free(arr);
    return 0;
}

void traverse(int arr[], int size) 
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void ins_Beg(int arr[], int *size, int element) 
{
    // Shift elements to the right
    for (int i = *size - 1; i >= 0; i--)
        arr[i + 1] = arr[i];
    arr[0] = element;
    (*size)++;
}

void ins_End(int arr[], int *size, int element) 
{
    arr[*size] = element;
    (*size)++;
}

void ins_Loc(int arr[], int *size, int element, int location) 
{
    // Shift elements to the right from the given location
    for (int i = *size - 1; i >= location; i--)
        arr[i + 1] = arr[i];
    arr[location] = element;
    (*size)++;
}

void ins_BeforeAfterElem(int arr[], int *size, int element, int target, char position) 
{
    int location;
    for (int i = 0; i < *size; i++) 
    {
        if (arr[i] == target) 
        {
            location = i;
            break;
        }
    }
    if (position == 'B')
        ins_Loc(arr, size, element, location - 1);
    else if (position == 'A')
        ins_Loc(arr, size, element, location + 1);
}

void del_Beg(int arr[], int *size) 
{
    // Shift elements to the left
    for (int i = 0; i < *size - 1; i++)
        arr[i] = arr[i + 1];
    (*size)--;
}

void del_End(int arr[], int *size) 
{
    (*size)--;
}

void del_Loc(int arr[], int *size, int location) 
{
    // Shift elements to the left from the given location
    for (int i = location; i < *size - 1; i++)
        arr[i] = arr[i + 1];
    (*size)--;
}

void del_BeforeAfterElem(int arr[], int *size, int target, char position) 
{
    int location;
    for (int i = 0; i < *size; i++) 
    {
        if (arr[i] == target) 
        {
            location = i;
            break;
        }
    }
    if (position == 'B')
        del_Loc(arr, size, location - 1);
    else if (position == 'A')
        del_Loc(arr, size, location + 1);
}
