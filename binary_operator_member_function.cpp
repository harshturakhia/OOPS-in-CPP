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

    /*
    Complex operator -(Complex c2)
    {
        Complex temp2;

        temp2.real = real - c2.real;
        temp2.imag = imag - c2.imag;
        return temp2;
    }
    */

};

int main()
{
    Complex x(10,20);
    Complex y(30,40);

    /* Here x is calling the function & y is passed as paramter */

    Complex z1;
    z1 = x + y;     //calling binary member function
    z1.disp();

    /* Just like this, z is calling the function*/

    /*
    Complex z2;
    z2 = x - y;     //calling binary member function
    z2.disp();
    */

    return 0;
}
