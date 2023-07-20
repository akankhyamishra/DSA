#include <iostream>

using namespace std;

void primeSieve(int n)
{
    int arr[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; i <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
        }
    }cout<<endl;
}
int main()
{
    // int n;
    // cin >> n;
    primeSieve(30);

    return 0;
}