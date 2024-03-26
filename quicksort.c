#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int a[MAX];

int partition(int l,int h) // l-lower index,h-higher index
{
    int i,j,temp,pivot;  // i-left,j-right pivot- a chosen element from array 
    pivot=a[l];    //set pivot as lower index
    i=l+1;   // left start from 1st index
    j=h;    // right start from higher index
    while(i<=j)  // Loop until the left crosses the right
    {
        while(a[i]<=pivot && i<=h)  // Move the left to the right until finding an element greater than or equal to the pivot
        i++;
        while(a[j]>pivot)   // Move the right to the left until finding an element smaller to the pivot
        j--;
        if(i<j)  // If left is less than right, swap the elements
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    // Swap the pivot with the element at the right,placing the pivot in its correct position
        temp=a[l];
        a[l]=a[j];
        a[j]=temp;
        return j;
}

void quick(int l,int h)
{
    int x;
    if(l<h)
    {
        x=partition(l,h);
        quick(l,x-1);
        quick(x+1,h);
    }
}

int main()
{
    int i;
    printf("Enter array elements :\n");
    for(i=0;i<MAX;i++)
    {
        printf("Element no.%d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Array elements are:\n");
        for(i=0;i<MAX;i++)
    {
        printf("%d\t",a[i]);
    }
    quick(0,MAX-1);
    printf("Sorted array :\n");
        for(i=0;i<MAX;i++)
    {
        printf("%d\t",a[i]);
    }    
    
}