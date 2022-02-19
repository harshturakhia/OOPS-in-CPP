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
    void operator+() //unary member function
    {
        a = a + 5;
        b = b + 5;
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

    -S;
    S.disp();       //calling unary member function 

    +S;          //calling unary member function 
    S.disp();
}