// function overloading
// 
// 
// 
#include<iostream>
using namespace std;

void sum(int a=5)
{
    cout<<"Sum is "<<a+10<<endl;
}

void sum(int a, int b)
{
    cout<<"Sum is "<<a+b<<endl;
}

void sum(int a, int b, int c)
{
    cout<<"Sum is "<<a+b+c<<endl;
}

void sum(int a, float b)
{
    cout<<"Sum of int and float is "<<a+b<<endl;
}

void sum(float a, int b)
{
    cout<<"Sum of float and int is "<<a+b<<endl;
}

void sum(float a, float b)
{
    cout<<"Sum of float and float is "<<a+b<<endl;
}

int main()
{
    sum(10);
    sum(11,12);
    sum(20,22,23);
    sum(12,float(4.5));
    sum(float(12.5),5);
    sum(float(1.2),float(2.1));
    sum();
    return 0;
}