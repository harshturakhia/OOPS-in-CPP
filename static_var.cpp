#include<iostream>
using namespace std;

class Employee 
{
    private:
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

       void insert(int i, string n, int s)
       {
           id = i;
           salary = s;
           name = n;
           count++;
       }
};

int main()
{
    Employee e1,e2;
    int id;
    string name;
    int sal;
    Employee t;
}