#include<iostream>
#include<stdio.h>
using namespace std;

class Book
{
    public:
    string title;
    string publisher;
    int price;
    
    public:
        void setDetails()
        {
            cout<<"Enter title of book : ";
            fflush(stdin);
            getline(cin,title);

            cout<<"Enter publisher of book : ";
            fflush(stdin);
            getline(cin,publisher);

            cout<<"Enter price of book : ";
            fflush(stdin);
            cin>>price;
            
        }

        void getDetails();
};
void Book :: getDetails()
        {
            cout<<"Title of book : "<<title<<endl;
            cout<<"Publisher of book : "<<publisher<<endl;
            cout<<"Price of book : "<<price<<endl;
        }

int main()
{

    string title;
    string publisher;
    int price;

    Book (b[2]);

    cout<<"Enter details of books : "<<endl<<endl;

    for(int i=0; i<2; i++)
    {
        b[i].setDetails();
    }

    cout<<endl<<"Details of books are : "<<endl<<endl;

    for(int i=0; i<2; i++)
    {
        b[i].getDetails();
    }
    return 0;
}
