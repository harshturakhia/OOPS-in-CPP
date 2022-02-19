//single parameter example

#include <iostream>
using namespace std;
template <class T>
T add(T &a, T &b)
{
    T result = a + b;
    return result;
}
int main()
{
    int i = 2;
    int j = 3;
    float m = 2.3;
    float n = 1.2;
    cout << "Addition of i and j is : " << add(i, j);
    cout << '\n';
    cout << "Addition of m and n is : " << add(m, n);
    return 0;
}


//multiple parameter example

#include <iostream>
using namespace std;
template <class X, class Y>
void fun(X a, Y b)
{
    cout << "Value of a is : " << a << std::endl;
    cout << "Value of b is : " << b << std::endl;
}

int main()
{
    fun(15, 12.3);

    return 0;
}

//overloading parameter template

#include <iostream>
using namespace std;
template <class X>
void fun(X a)
{
    std::cout << "Value of a is : " << a << std::endl;
}

template <class X, class Y>
void fun(X b, Y c)
{
    std::cout << "Value of b is : " << b << std::endl;
    std::cout << "Value of c is : " << c << std::endl;
}
int main()
{
    fun(10);
    fun(20, 30.5);
    return 0;
}
