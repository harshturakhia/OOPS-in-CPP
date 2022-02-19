#include<iostream>
using namespace std;

int main()
{
    int x=0, y=0, z=0;

    cout<<"Enter 1st number : ";
    cin>>x;
    cout<<"Enter 2nd number : ";
    cin>>y;

    cout<<"Before swapping : "<<x<<" & "<<y<<endl;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<"After swapping : "<<x<<" & "<<y;
}