#include<iostream>
using namespace std;
class patient
{
	private:
		string name;
		int age;
		bool covid;
		static int count;
	public:
		void setName(string n)
		{
			name=n;
		}
		string getName()
		{
			return name;
		}
		void setAge(int a)
		{
			age=a;
		}
		int getAge()
		{
			return age;
		}
		void setCovid(bool c)
		{
			covid=c;
		}
		bool getCovid()
		{
			return covid;
		}
		static int getCount()
       {
          return count;
       }

        void insert(string n, int a, bool c)    //member function
        {

            name = n;
            age=a;
            covid=c;
            count++;

        }
        void display();

};


int patient:: count=0;
void patient:: display()    //member function
        {
            cout<<"  "<<name<<age<<endl;
            if(covid==1)
            {
            	cout<<"Patient is coivd positive."<<endl;
            }
            else
            {
            	cout<<"Patient is covid negative."<<endl;
            }
        }



int main()
{
	string n;
	int a,i;
	bool c;
	patient p[3];
	for(i=0;i<3;i++)
	{
		cout<<"Name: ";
		cin>>n;
		cout<<"Age: ";
		cin>>a;
		cout<<"Is patient positive or negative? (1 if yes and 0 if no)";
		cin>>c;
		p[i].setName(n);
		p[i].setAge(a);
		p[i].setCovid(c);
	}
    for(int i=0; i<3; i++)
    {
        p[i].getName();
        p[i].getAge();
        p[i].getCovid();
    }

	 cout<<"Total patients= "<< patient::getCount<<endl;


}
