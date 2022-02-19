
#include<iostream>
using namespace std;

class Triangle
{
    public:
        int a;
        int b;
        int c;
    public:
    int perimeter()
    {
        return a+b+c;
    }
    int area()
    {
        return  a*b;
    }
};
int main()
{
    int a, b, c;

    Triangle t;

    t.perimeter(3,4,5);

    t.area(3,4);
}
