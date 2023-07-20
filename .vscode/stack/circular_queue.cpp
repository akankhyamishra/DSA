#include <iostream>
#include <queue>

using namespace std;

class queue
{
private:
    int *arr;
    int n;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    bool enqueue(int x)
    {
        if (back == n - 1 && front == 0)
        {
            cout << "queue full" << endl;
            return false;
        }
        else if (front == -1)
        {
            front++;
        }
        else if (back == n - 1 && front == 0)
        {
            back == 0;
        }
        else
        {
            back++;
            arr[back] = x;
            return true;
        }
    }

    int dequeue()
    {
        if (front == -1 && front > back)
        {
            cout << "queue empty" << endl;
        }

        int ans = arr[front];
        arr[front] = -1;

        if (front == back)
        {
            front = back = -1;
        }
        else if (front == n - 1){
            front = 0;
    }
    else
    {
        front++;
    }
    return ans;
};

int main()
{

    return 0;
}