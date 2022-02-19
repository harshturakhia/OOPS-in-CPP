
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
     int n,m,t,a,n1,count=0;

    cout<<"Enter the number : ";
    cin>>n;

    t=n;
    n1=n;

    while(n1>0)
    {   n1/=10;
        count++;
    }

    cout<<"\nNumber of digits : "<<count;

    while(n>0)
    {   m=n%10;
        a=a+pow(m,count);
        n=n/10;
    }

    if(t==a)
    cout<<"\nArmstrong";
    else
    cout<<"\nNot Armstrong";

    return 0;
}
