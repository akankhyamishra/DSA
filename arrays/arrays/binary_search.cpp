#include <iostream>

using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    if (high >= low){
        int mid = low + (high - low) / 2;
    
    if (arr[mid]==key)
        return mid;

    if (arr[mid]<key)
        return binarySearch(arr, (mid + 1), high, key);

    return binarySearch(arr, low, (mid - 1), key);
    }


    return -1;
}
int main()
{

    int arr[] = {67, 45, 12, 2, 13, 56, 56};

    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    // cout << "the array:" << arr[30] << endl;
    cout << "binary search:" << binarySearch(arr, 0, n - 1, key);

    return 0;
}

