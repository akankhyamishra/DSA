#include<iostream>
 
using namespace std;

//first occurence
int firstOccurence(int arr[], int p, int i, int key){
      if (arr[i]==p)
      {
        return -1;
      }
      
    if (arr[i]==key)
    {
        return i;
    }
    return firstOccurence(arr, p, i+1, key);
    
}
int lastOccurence(int arr[], int p, int i, int key){
    if(i==p)
      {
        return -1;
      }
      int restarray= lastOccurence(arr,p,i+1,key);
      if (restarray!=-1)
      {
        return restarray;
      }
      if (arr[i]==key)
      {
        return i;
        /* code */
      }
      
      return -1;
      
}
int main(){

 int arr[]={2,3,5,3,7,3,9,8};
 int p=8;
 int i=0;
 int key=7;
 cout<<firstOccurence(arr,p,i,key)<<endl;
 cout<<lastOccurence(arr,p,i,key)<<" ";


 return 0;
}