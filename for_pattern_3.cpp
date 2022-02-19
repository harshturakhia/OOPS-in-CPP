#include<iostream>
using namespace std;
int main()
{
    int i, j, n, m;

    cout<<"Enter row number : ";
    cin>>m;
    cout<<"Enter column number : ";
    cin>>n;

    for(i=m; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}