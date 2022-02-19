//constructors and destructors......
//constructors are special functions with a same name of a class
//constructors should be created in public section of class
//constructor do not require explicit call but it is implicitly called when the object is created.
//these functions do not return anything not even void
//constructors can be overloaded
//3 types of constructor ===== 1)defualt 2)parameterized 3)copy constructor

#include <iostream>
using namespace std;
class demo
{
    int n;      //instance variable
    int m;      //instance variable

public:
    demo() //default constructor of class demo
    {
        m = 5;
        n = 4;
    }

    demo(int n) //parameterized constructor
    {
        this->n = n;    //instance variable to local variable
        m = 5;
    }

    demo(int n, int m) //parameterized constructor
    {
        this->n = n;
        this->m = m;
    }

    int getM()
    {
        return m;
    }
    int getN()
    {
        return n;
    }
    void setM(int m)
    {
        this->m = m;
    }
    void setN(int n)
    {
        this->n = n;
    }
    void display()
    {
        cout << "value of m and n are == " << m << " and == " << n << endl;
    }
};

int main()
{
    demo d1, d2(8), d3(1, 2);
    cout << "values of d1 object : ";
    d1.display();
    cout << "values of d2 object : ";
    d2.display();
    cout << "values of d3 object : ";
    d3.display();
    return 0;
}

/* 
A constructor is different from normal functions in following ways: 

Constructor has same name as the class itself
Constructors don’t have return type
A constructor is automatically called when an object is created.
If we do not specify a constructor, C++ compiler generates a default constructor for us 
(expects no parameters and has an empty body).
*/