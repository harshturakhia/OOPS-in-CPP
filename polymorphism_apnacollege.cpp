/*
#include <iostream>
using namespace std;

class Apnacollege
{
    int x;

public:
    void fun()
    {
        cout << "I am function with no argument..." << endl;
    }
    void fun(int x)
    {
        cout << "I am function with int argument..." << endl;
    }
    void fun(double x)
    {
        cout << "I am function with double argument..." << endl;
    }
};

int main()
{
    Apnacollege obj;

    obj.fun();
    obj.fun(10);
    obj.fun(4.444);
}
*/

/*
#include <iostream>
    using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r=0, int i=0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main()
{
    Complex c1(2,3), c2(12,23);
    Complex c3 = c1 + c2;
    c3.display();
}
*/

#include"bits/stdc++.h"
using namespace std;

class Base
{
    public:
        virtual void print()
        {
            cout<<"This is base class print function..."<<endl;
        }
        void display()
        {
            cout<<"This is base class display fucntion..."<<endl;
        }
};
class Derived : public Base
{
    public:
        void print()
        {
            cout<<"This is derive class print fucntion..."<<endl;
        }
        void display()
        {
            cout<<"This is derive class display function..."<<endl;
        }
};

int main()
{
    Base *objptr;
    Derived d;

    objptr = &d;

    objptr -> print();
    objptr -> display();
}
