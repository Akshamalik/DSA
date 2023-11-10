#include<iostream>
using namespace std;

void wavesort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i] > arr[i-1])
        {
            swap(arr,i,i-1);
        }
        if(arr[i] > arr[i+1] && i<=(n-2))
        {
            swap(arr,i,i+1);
        }
    }
}
int main()
{
    wavesort()
    return 0;
}