o#include<iostream>
using namespace std;

int sum(int a, int b)
{
    cout<<"Using 3 argument :";
    return a+b;
}

int sum(int a, int b, int c)
{
    cout<<"Using 3 arguments : ";
    return a+b+c;
}

int main()
{
    cout<<"Sum of 3 and 6 is : "<<sum(3,6)<<endl;
    cout<<"Sum of 3, 6 and 9 is : "<<sum(3,6,9)<<endl;
}