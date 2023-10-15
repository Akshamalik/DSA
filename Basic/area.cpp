#include<iostream>

using namespace std;

void areaCircle(int r)
{
    const double pi=3.14;
    double area=pi*r*r;
    cout<<area;
}
void areaSquare(int s)
{
    int area;
    area=s*s;
    cout<<area;
}
void areaRectangle(int l,int b)
{
    int area;
    area=l*b;
    cout<<area;
}
int main()
{
    int r;
    cout<<"Enter the radius of circle"<<endl;
    areaCircle(r);
    return 0;
}