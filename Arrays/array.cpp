#include<iostream>
using namespace std;

int main()
{
    int array[4]={10,20,30,40};
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
