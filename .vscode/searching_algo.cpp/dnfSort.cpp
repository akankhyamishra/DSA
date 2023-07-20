#include<iostream>
 
using namespace std;

void swap(int arr[], int low, int high){
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
}

void DnfSort(int arr[], int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while (mid<=high)
    {
        if (arr[mid]==0)
        {
            swap(arr,low,mid);
            low++;
            mid++;                                                                                                                                                                                                          
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr, high, mid);
            high--;
        }
        
    }
    
}
 
int main(){

 
 return 0;
}