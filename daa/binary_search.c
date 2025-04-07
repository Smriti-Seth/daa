#include <stdio.h>

int binarysearch(int arr[], int n, int key)
{
    int l = 0, r = n - 1, m;

    while (l <= r)
    {
        m = l + (r + l) / 2;

        if (arr[m] == key)
            return m;
        else if (arr[m] < key)
            r = m - 1;
        else 
            l = m + 1;
    }

    return -1;
}
int main() 
{
     int n, key;
    printf( "enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    printf("enter the elements: ");

    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    
    printf("enter the element need to search: ");
    scanf("%d",&key);

    int res = binarysearch(arr,n,key);
    
    if (res != -1)
        printf("element found in index %d", res);
    else
        printf("element does not exist");

    return 0;

}