#include<iostream>
using namespace std;

class fighter
{
    private:
        int h,w,a;
        char n[20];
    public:
        int name(char n[])
        {
            cout<<"Write your name : ";
            cin>>n;
            cout<<"Name is : "<<n[];
        }
        int age(int a)
        {
            cout<<"Write your age : ";
            cin>>a;
            cout<<"Age is : "<<a;
        }
        int height(int h)
        {
            cout<<"Write your height : ";
            cin>>h;
            cout<<"Height is : "<<h;
        }
        int weight(int w)
        {
            cout<<"Write your weight : ";
            cin>>w;
            cout<<"Weight is : "<<w;
        }
};

int main()
{
    int n,a,h,w;
    name(n);
    age(a);
    height(h);
    weight(w);
    return 0;
}
