// #include<iostream>

// using namespace std;

//  void reverseString(string& str){
//     int n= str.length();
//     for (int i = 0; i < n/2; i++)
//     {
//         swap(str[i],str[n-i-1]);
//     }

//  }
// int main(){

//  string str= "geeksforgeeks";

//  reverseString(str);
//  cout<<str;

//  return 0;
// }

#include <iostream>

using namespace std;
void reverseString(string &str)
{
    int n = str.length();

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        swap(str[i], str[j]);
    }
   
}

int main()
{
    string str = "akankhya mishra";
    reverseString(str);
    cout<<str;

    return 0;
}