/*
#include<iostream>
using namespace std;

template<class T, class R>
    void add(T x, R y)
    {
        cout<<"x + y = "<<x+y;
    }
int main()
{
    add(10,20.2);
}
*/

/*
#include <iostream>
using namespace std;
template <class T>
class A
{
public:
    T num1 = 5;
    T num2 = 6;
    void add()
    {
        cout << "Addition of num1 and num2 : " << num1 + num2 << endl;
    }
};

int main()
{
    A<int> d;
    d.add();
    return 0;
}
*/

#include <iostream>
using namespace std;
template <class T1, class T2>
class A
{
    T1 a;
    T2 b;

public:
    A(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        std::cout << "Values of a and b are " << a << " , " << b << std::endl;
    }
};

int main()
{
    A<int, float> d(5, 6.5);
    d.display();
    return 0;
}