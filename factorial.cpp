#include<iostream>
using namespace std;

int main()
{
    int x, y, fact=1;

    cout<<"Enter number : ";
    cin>>x;

    for(int i=1; i<=x;i++)
    {
        fact = fact*i;
    }
    cout<<"Factorial : "<<fact;
}