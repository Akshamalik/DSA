#include<iostream.h>
using namespace std;


//There are three pointer low mid and high low points to 0 ,mid points to 0 and high to n-1
//start at low
//0   0   0  1  1  ? ? ?    2  2  2
//zeroes     ones  unknown   twos
//when unknown is NULL the array is sorted

void dnfSort(int arr[] ,int n)
{
   int low=0;
   int mid=0;
   int high=(n-1);
   while(mid<=high){
   if(arr[mid]==0){
    swap(arr,mid,low);
    mid++;
    low++;
   }
   else if(arr[mid]==1){
    mid++;
   }
   else{
    swap(arr,mid,high);
    high--;
   }
   }
}

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dnfSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}