#include<iostream>
using namespace std;

//Euclid Algorithm to find greatest common divisor (GCD) 
int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}