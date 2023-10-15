#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"using 2 arguments"<<endl;
    return (a+b);
}

int sum(int a,int b,int c)
{
    cout<<"using 3 arguments"<<endl;
    return (a+b+c);
}

int main()
{

    return 0;
}