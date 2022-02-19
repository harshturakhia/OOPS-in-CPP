#include <iostream>
using namespace std;

int main()
{
    int i;

    for(int i=0; i<9; i++)
    {
        if(i==5)
            continue;
        cout<<i<<endl;
    }

    cout<<endl<<endl;

    for(int i=0; i<9; i++)
    {
        if(i==5)
            break;
        cout<<i<<endl;
    }
    return 0;
}
