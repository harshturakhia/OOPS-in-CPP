/* A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user. */

#include<iostream>
using namespace std;

int main()
{
    int x,price;

    cout<<"How much you want to buy ? "<<endl;
    cin>>x;

    price=100*x;

    if(price>1000)
    {
        cout<<"You will get 10% discount!"<<endl;
        cout<<"Total cost is : "<<price-(price*0.1)<<endl;
    }
    else
    {
        cout<<"You will not get discount!"<<endl;
        cout<<"Total cost is : "<<price;
    }
}