#include<iostream.h>
using namespace std;

//The inner loop selects the minimum element in the unsorted array and places the element in increasing order
//0(n^2)
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(arr[j]<arr[i])
          {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
          }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}