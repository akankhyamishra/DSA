#include<iostream>
 
using namespace std;

class heap{
    public:
int arr[100];
int size;

void insert(int val){
    size=size+1;
    int index=size;
    arr[index]=size;

    while (size>1)
    {
        int parent=size/2;
        if (arr[parent]<arr[index])
        {
            swap(arr[parent],arr[index]);
            index=parent;
        }
        else
        {
            return;
        }
        
        
    }

        
    }
    void print(){
        for (int i = 0; i <= size; i++)
        {
            cout<<arr[i];
        }cout<<endl;
    
}

void heapify(int arr[], int n, int i){
    int largest=i;
    int l=2*i;
    int r=2*i+1;

    if (l< n && arr[l]<arr[largest])
    {
        largest=l;
    }
    if (r<n && arr[r]<arr[largest])
    {
        largest=r;
    }
    if (largest!=i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
    
}
    //max-heap size

    void maxheap(int arr[], int N){
        int start=N/2-1;

        for (int i = start; i >=0 ; i--)
        {
            heapify(arr, N, i);
        }
        
    }

    void heapSort(int arr[], int n){
        for (int i=n/2-1; i >=0; i--)
        {
            heapify(arr, n, i);
        }
        for (int i = n/2; i >=0 ; i--)
        {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
        
        
    }
    

} ;
int main(){

    heap h;
    h.insert(6);
    h.insert(7);
    h.insert(9);
    h.insert(10);
    h.insert(55);

    h.print();



 
 return 0;
}