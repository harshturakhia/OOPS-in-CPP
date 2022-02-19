#include<iostream>
using namespace std;
int main()
{
    int i, j, n, m;

    cout<<"Enter row number : ";
    cin>>m;
    cout<<"Enter column number : ";
    cin>>n;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==1 || i==m)
            {
                cout<<"*";
            }
            else if(j==1 || j==n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }   
        }
        cout<<endl;
    }
}