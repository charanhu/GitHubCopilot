//Binary Search
#include<iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (key == arr[mid])
            return mid;


        if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}


int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key = 10;
    int index = binarySearch(arr, n, key);

    if (index != -1)
        cout << "Found at index " << index << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
