#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }

        if (!flag)
            return;
    }
}

int main()
{
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);

    int *arr = malloc(n * sizeof (int));

    printf("enter the elements of the array: ");
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    
    bubbleSort(arr,n);

    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
        
    free(arr);

    return 0;
}