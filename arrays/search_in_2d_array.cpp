#include <iostream>

using namespace std;

int main()
{
    int arr[3][3]={3, 7, 12, 3, 6 ,7, 10, 23, 45};
    // int n, m;
    // cin >> n >> m;
    // int arr[n][m];

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; i < 3; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    cout << "2-d matrix: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 3; j++)
        {
        cout << arr[i][j];
        }
        cout<<endl;
    }

    return 0;
}