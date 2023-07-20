#include <iostream>

using namespace std;

int main()
{

   int arr[3][3] = {6, 8, 19, 56, 23, 45, 12, 34, 9};

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << arr[i][j];
      }
      cout << endl;
   }

   return 0;
}