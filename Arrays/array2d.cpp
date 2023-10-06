#include<iostream.h>
using namespace std;


int main()
{
    int n,m;
    //n is number of rows and m is number of columns
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    //to print 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<endl;
        }

    }
    //for searching in array
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==key)
            {
            cout<<"element found";
            break;
            }
        }
    }
    
}