//Merge Sort Array

#include <iostream>

using namespace std;

void Merge(int arr[], int low, int mid, int high);

int MergeSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high)/2;
        
        MergeSort(arr, low, mid);
        MergeSort(arr, mid+1, high);
        Merge(arr, low, mid, high);
    }
    return 0;
}

void Merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid+1;
    int k = 0;

    int temp[high-low+1];

    while(i <= mid && j <= high)
    {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= mid)
        temp[k++] = arr[i++];

    while(j <= high)
        temp[k++] = arr[j++];

    for(i = low; i <= high; i++)
        arr[i] = temp[i-low];
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    MergeSort(arr, 0, n-1);
    
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
