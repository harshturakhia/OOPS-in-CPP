#include<iostream>
using namespace std;

class Book
{
    public:
    string title;
    string publisher;
    int price;
    static int count;


    public:
        void setDetails()
        {
            cout<<"Enter title of book : ";
            cin>>title;

            cout<<"Enter publisher of book : ";
            cin>>publisher;

            cout<<"Enter price of book : ";
            cin>>price;

            count++;
        }
        static int getCount()
        {
            return count;
        }


        void getDetails();
};
int Book :: count = 0;

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

    Book (b[3]);

    cout<<"Enter details of books : "<<endl<<endl;

    for(int i=0; i<3; i++)
    {
        b[i].setDetails();
    }

    cout<<endl<<"Details of books are : "<<endl<<endl;

    for(int i=0; i<3; i++)
    {
        b[i].getDetails();
    }

    cout<<endl<<"Total amount of Book are : "<<Book::getCount()<<endl<<endl;

}
