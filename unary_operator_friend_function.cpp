#include <iostream>
using namespace std;

class Sample
{
    int a, b;

public:
    void getData()
    {
        a = 10;
        b = 20;
    }
    void operator-() //unary member function
    {
        a = a - 5;
        b = b - 5;
    }
    friend Sample operator +(Sample ss) //unary member function
    {
        ss.a = ss.a + 5;
        ss.b = ss.b + 5;
        return ss;
    }
    void disp()
    {
        cout << "The value of a : " << a << endl;
        cout << "the value of b : " << b << endl;
    }
};

int main()
{
    Sample S;

    S.getData();

    -S;               //calling unary member function 
    S.disp();

    S=+S;             //calling unary friend function 
    S.disp();
}