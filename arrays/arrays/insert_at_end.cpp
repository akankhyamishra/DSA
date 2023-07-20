#include <iostream>

using namespace std;

int insertArray(int arr[], int key, int n, int capacity)
{

    if (n >= capacity)
    {
        return n;
    }
    else if (arr[n] = key)
    {
        return (n + 1);
    }
}
int main()
{
    int arr[45] = {45, 12, 2, 23, 34};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    int key = 6;
    cout << "before inserting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    n = insertArray(arr, key, n, capacity);
    cout << "after inserting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}