//constructors and destructors......
//constructors are special functions with a same name of a class
//constructors should be created in public section of class
//constructor do not require explicit call but it is implicitly called when the object is created.
//these functions do not return anything not even void
//constructors can be overloaded
//3 types of constructor :-
//1)defualt 2)parameterized 3)copy constructor

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

    demo(demo & d)      //copy constructor
    {
        this->n=d.n;
        this->m=d.m;
        cout<<"Copy Constructor called!"<<endl;
    }

    ~demo()         //destructor
    {
        cout<<"Destructor called!"<<endl;
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

void add(demo dd1, demo dd2)
{
    demo dd3;
    dd3.setN(dd1.getN()+dd2.getN());
    dd3.setM(dd1.getM()+dd2.getM());

    cout<<"Values of addition is : "<<dd3.getN()<<" and "<<dd3.getM()<<endl;
}

int main()
{
    demo d1, d2(8), d3(1, 2);
    demo d4(d2);                //valid for copy constructor
    demo d5(d3);                //valid for copy constructor
    demo d6;

    /* d5 = d6        //this will not call copy constructor because it is assignment operator */

    cout << "values of d1 object : ";
    d1.display();
    cout << "values of d2 object : ";
    d2.display();
    cout << "values of d3 object : ";
    d3.display();
    cout << "values of d4 object : ";
    d4.display();
    cout << "values of d5 object : ";
    d5.display();
    cout << "values of d6 object : ";
    d6.display();

    add(d1,d2);

    return 0;
}


/*  
    Total 9 destructor printed : 
    d1,d2,d3,d4,d5,d6,dd1,dd2,dd3   this object destructor called
*/


