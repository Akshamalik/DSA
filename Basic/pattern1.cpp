#include<iostream>
using namespace std;

//i=rows ,j=columns
// *
// **
// ***
// ****
// *****
//correct
int main()
{
    int i,j;
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}