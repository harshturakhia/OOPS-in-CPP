#include<iostream>
using namespace std;

class Employee 
{
    private:
        int id;
        string name;
        int salary;
        static int count;

    public:
        int getId()
       {
           return id;
       }
       void setId(int i)
       {
           id=i;
           count++;
       }
       string getName()
       {
           return name; 
       } 
       void setName(string n)
       {
           name=n;
       }
       int getSalary()
       {
           return salary;
       }
       void setSalary(int s)
       {
           salary =s;
       }
       static int getCount()
       {
           return count;
       }

       void insert(int i, string n, int s)  //member function
       {
           id = i;
           salary = s;
           name = n;
           count++;
       }
       void display();
};

int Employee :: count = 0;
void Employee :: display()
{
    cout<<id<<" "<<name<<salary<<endl;
}

int main()
{
    Employee e1,e2,e3;
    int id;
    string name;
    int sal;
    Employee t;

    e1.insert(101,"Harsh",5000);
    e2.insert(102,"Khushi",6000);
    e3.insert(103,"Turakhia",7000);

    cout<<"Total amount of employees are : "<<Employee::getCount()<<endl<<endl;

}