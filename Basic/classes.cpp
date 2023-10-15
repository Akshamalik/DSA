//Class declaration
//High level language --More close to machine language 
//C Vs C++ .C++ adds to C feature like classes(feature to enable creation of abstract data type),polymorphism(function and operator overloading)
//OOPs language
//Bjarne Stroustup
#include<iostream>
using namespace std;
//classes have objects that have same data type as the class
//constructors are invoked as soon the class objects is created

class myclass{
    string name;
    public:
    int age;
    bool gender;
    student()
    {
        cout<<"default constructor"<<endl;
    }
    student(string s,int a,int b)
    {
        cout<<"parametrized constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }
};
//Copy constructor


