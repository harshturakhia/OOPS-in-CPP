#include<iostream>
using namespace std;

int main()
{
    float meter, inch, cm, foot, mile, km;

    cout<<"Enter digit in meter : ";
    cin>>meter;

    inch = (meter) * (39.37);
    cout<<"Meter to inch : "<<inch<<endl;

    cm = (meter) * (100);
    cout<<"Meter to centimeter : "<<cm<<endl;

    foot = (meter) * (3.28);
    cout<<"Meter to foot : "<<foot<<endl;

    km = (meter) * (0.001);
    cout<<"Meter to kilometer : "<<km<<endl;

    mile = (meter) * (0.00062);
    cout<<"Meter to mile : "<<km<<endl;
    

}