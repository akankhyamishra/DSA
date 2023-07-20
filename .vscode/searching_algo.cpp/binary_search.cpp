#include<iostream>
 
using namespace std;

int binarySearch(int arr[], int n, int key){
    int left=0;
    int right=n;
    while (left<right)
    {
       int mid= (left+right)/2;
       if (arr[mid]==key)
       {
        return mid;
       }
       else if (arr[mid]>key)
       {
        right=mid-1;
       }
       else
       {
        left=mid+1;
       }
       
       
    }
    return -1;

}
 
int main(){
    int arr[]={4, 5, 12, 34, 11, 31, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=15
     ;
    cout<<binarySearch(arr, n, key);

 
 return 0;
}