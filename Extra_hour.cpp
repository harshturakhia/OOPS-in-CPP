#include<iostream>
using namespace std;

int main()
{
    int i=1;
    int hour;
    int extra_hour = 0;
    float extra_pay = 0;
    
    for(i=1; i<11; i++)
    {
        cout<<endl<<"Employee No : "<<i<<endl;
        cout<<"Enter total number of working hours : ";
        cin>>hour;
        
        extra_hour = hour-40;
        extra_pay = extra_hour*12;

        if(hour>40)
        {
            cout<<"You have worked overtime : "<<hour-40<<endl;
            cout<<"Extra pay is : "<<extra_pay<<endl;
        }
        else
        {
            cout<<"You have not worked more than 40 hrs"<<endl;
        }
    }
}