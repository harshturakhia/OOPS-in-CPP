#include<iostream>
using namespace std;

class fighter
{
    public:
        fighter{age = weight = height = 1}

        string name;
        int age;
        int weight;
        int height;
    public:
        void name(string n);
        void age(int a);
        void height(int h);
        void weight(int w);
};

void fighter :: name(string n)
        {
            name = n;
        }

void fighter :: age(int a)
        {
            age = a;
        }
void fighter :: height(int h)
        {
            height = h;
        }
void fighter :: weight(int w)
        {
            weight = w;
        }

int main()
{
        string name;
        int age;
        int weight;
        int height;

        fighter f1;

        cout<<"Enter your name :" ;
        cin>>name;

        f1.name(n);
                cout<<f1.name;
        cout<<endl;


        cout<<"Enter your age :" ;
        cin>>age;
        f1.age(a);
        cout<<f1.age;
        cout<<endl;

        cout<<"Enter your height :" ;
        cin>>height;

        f1.height(h);
         cout<<f1.height;
        cout<<endl;

        cout<<"Enter your weight :" ;
        cin>>weight;

        f1.weight(w);
         cout<<f1.weight;
        cout<<endl;


}

