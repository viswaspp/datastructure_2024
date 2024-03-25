#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int choice, size;
    char c;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Do you want to enter the data (y/n): ");
    scanf(" %c", &c);

    if (c == 'y' || c == 'Y') 
    {
        printf("Enter %d elements for the array:\n", size);
        for (int i = 0; i < size; i++) 
        {
            scanf("%d", &arr[i]);
        }

        printf("Array elements: ");
        for (int i = 0; i < size; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } 
    else 
    {
        printf("Array is empty\n");
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
                for (int i = 0; i < size; i++) 
                {
                    printf("%d ", arr[i]);
                }
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
                        // Shift elements to the right
                        for (int i = size; i > 0; i--) 
                        {
                            arr[i] = arr[i - 1];
                        }
                        arr[0] = element;
                        size++;
                        break;
                    }
                    case 2: 
                    {
                        int element;
                        printf("Enter element to insert at end: ");
                        scanf("%d", &element);
                        arr[size] = element;
                        size++;
                        break;
                    }
                    case 3: 
                    {
                        int element, location;
                        printf("Enter element to insert: ");
                        scanf("%d", &element);
                        printf("Enter location to insert: ");
                        scanf("%d", &location);
                        // Shift elements to the right from the given location
                        for (int i = size; i > location; i--) 
                        {
                            arr[i] = arr[i - 1];
                        }
                        arr[location] = element;
                        size++;
                        break;
                    }
                    case 4: {
                        int element, target;
                        char position;
                        printf("Enter element to insert: ");
                        scanf("%d", &element);
                        printf("Enter target element: ");
                        scanf("%d", &target);
                        printf("Enter 'B' to insert before or 'A' to insert after: ");
                        scanf(" %c", &position);
                        int location = -1;
                        for (int i = 0; i < size; i++) 
                        {
                            if (arr[i] == target) 
                            {
                                location = i;
                                break;
                            }
                        }
                        if (location != -1) 
                        {
                            if (position == 'B') 
                            {
                                // Shift elements to the right from the target location
                                for (int i = size; i > location; i--) 
                                {
                                    arr[i] = arr[i - 1];
                                }
                                arr[location] = element;
                            } 
                            else if (position == 'A') 
                            {
                                // Shift elements to the right from the next location of the target
                                for (int i = size; i > location + 1; i--) 
                                {
                                    arr[i] = arr[i - 1];
                                }
                                arr[location + 1] = element;
                            }
                            size++;
                        } 
                        else 
                        {
                            printf("Target element not found.\n");
                        }
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
                        // Shift elements to the left
                        for (int i = 0; i < size - 1; i++) 
                        {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        break;
                    case 2:
                        size--; // Decrease the size to exclude the last element
                        break;
                    case 3: 
                    {
                        int location;
                        printf("Enter location to delete: ");
                        scanf("%d", &location);
                        // Shift elements to the left from the given location
                        for (int i = location; i < size - 1; i++) 
                        {
                            arr[i] = arr[i + 1];
                        }
                        size--;
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
                        int location = -1;
                        for (int i = 0; i < size; i++) 
                        
                        
                        
                        {
                            if (arr[i] == target) 
                            {
                                location = i;
                                break;
                            }
                        }
                        if (location != -1) 
                        {
                            if (position == 'B') 
                            {
                                // Shift elements to the left from the target location
                                for (int i = location - 1; i < size - 1; i++) 
                                {
                                    arr[i] = arr[i + 1];
                                }
                            } 
                            else if (position == 'A') 
                            {
                                // Shift elements to the left from the next location of the target
                                for (int i = location; i < size - 1; i++) 
                                {
                                    arr[i] = arr[i + 1];
                                }
                            }
                            size--;
                        } 
                        else 
                        {
                            printf("Target element not found.\n");
                        }
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
            for (int i = 0; i < size; i++) 
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }
    } while (choice != 4);

    return 0;
}
