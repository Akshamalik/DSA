//Queue is a data structure that stores data in FIFO fashion/
//Make an array.Add from the end of array and delete from end.
//Restricted with size of array.
#include<iostream.h>
using namespace std;
class queue{
    int *arr;int front;int back;
    public:
    queue()
    {
        arr=new int[n];
        front =-1;
        back=-1;
    }
    void push(int x)
    {
        if(back==n-1)
        {
            cout<<"Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front == -1)
        {
            front++;
        }
    }
    void pop()
    {
        if(front == -1|| front>back)
        {
            cout<<"Underflow"<<endl;
        }
        return arr[front];
    }
    bool empty()
    {
        if(front == -1 || front> back)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2)
    q.push(3);
    q.push(4);
    q.pop();
    return 0;
}    