#include<iostream>
using namespace std;

int main()
{
    int n,m=3000;
    cout<<"Enter the day :";
    cin>>n;

    for(n=1;n<=31;n++)
    {
        if(n%2==0){
            continue;
        }
        if(m==0){
            break;
        }

    }
    cout<<"YOU CAN GO OUT TODAY!"<<endl;
            m=m-300;
}
