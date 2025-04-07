#include <iostream>
using namespace std;

int binary_search(int arr[],int low, int high, int key)
{
    if (low > high)
    return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
        return mid;
    else if (arr[mid] < key)
        return binary_search(arr, mid + 1, high, key);
    else
        return binary_search(arr, low, mid - 1, key);
}

int main()
{
    int n, k;
    cout << "enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "enter the elements: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "enter the element need to search: ";
    cin >> k;
    int r = binary_search(arr,0,n-1,k);
    
    if (r != -1)
        cout << "element found in index " << r << endl;
    else
        cout << "element does not exist" << endl;

    return 0;
}
