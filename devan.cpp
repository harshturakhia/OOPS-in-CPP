#include<iostream>
#include<stdio.h>
using namespace std;
class Book
{
	private:
		int price;
		string name;

	public:
		
		string getName()
		{
			return name;
		}
        void setName(string n)
		{
			name=n;
		}

		int getPrice()
		{
			return price;
		}
        void setPrice(int p)
		{
			price=p;
		}
};

Book maxPrice(Book b1, Book b2)
{
	Book temp;

	if(b1.getPrice()>b2.getPrice())
	{
	   // cout<<" Book having price "<<b1.getPrice()<<" is costiler";
		
		temp=b1;
	}
	else
	{
	   // cout<<"Book having price "<<b2.getPrice()<<" is costiler";
	
		temp=b2;
	}
	return temp;
}

int main()
{
    Book b1,b2;
	Book result;
	int i;
	int p;
	string n;

    cout<<"Enter name : ";
    cin>>n;
    fflush(stdin);
    cout<<"Enter price : ";
    cin>>p;
    fflush(stdin);
    b1.setName(n);
    b1.setPrice(p);
    
    cout<<"Enter name : ";
    cin>>n;
    fflush(stdin);
    cout<<"Enter price : ";
    cin>>p;
    fflush(stdin);
    b2.setName(n);
    b2.setPrice(p);
    
    
    result = maxPrice(b1,b2);
    
    cout<<"Book having price "<<result.getPrice()<<" is more costlier!"<<endl;
    
    // result=Maxprice(b1,b2);
// 	cout<<" Book having price "<<b.getPrice<<" is costiler";


}