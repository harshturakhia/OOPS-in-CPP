#include<iostream>
using namespace std;

class Complex
{
    int real, imag;             //instance variable

    public:
    Complex()                   //constructor
    {
        real = 0;               //current variable
        imag = 0;               //current variable
    }
    Complex(float _real, float _imag)   //constructor
    {
        real = _real;               //current variable
        imag = _imag;               //current variable
    }
    void disp()             //binary member function
    {
        cout<<"Real part is : "<<real<<endl;
        cout<<"Imag part is : "<<imag<<endl;
    }
    Complex operator +(Complex c1)      //binary member function
    {
        Complex temp1;

        temp1.real = real + c1.real;
        temp1.imag = imag + c1.imag;
        return temp1;
    }

    friend Complex operator -(Complex c1, Complex c2)       //binary friend function
    {
        Complex temp2;

        temp2.real = c1.real - c2.real;
        temp2.imag = c1.imag - c2.imag;
        return temp2;
    }

};

int main()
{
    Complex x(10,20);
    Complex y(30,40);

    /* Here x is calling the function & y is passed as paramter */

    Complex z1;
    z1 = x + y;     //calling binary member function
    z1.disp();

    Complex z2;
    z2 = y - x;     //calling binary friend function
    z2.disp();

    return 0;
}
