#include <stdio.h>
#include <stdlib.h>

void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);

    int* arr = (int*)malloc(n*sizeof (int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    insertion(arr,n);

    printf("sorted array is: ");

    for (int i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
}