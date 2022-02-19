#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    static int count;            //Default value = 0
    //static int count = 1000;  //syntax error

    // If we don't use static keyword then every employee object will have their own count,
    // but using static all share that count variable.

    // It has lifetime to work
    // Only class can have this

    // Static function have access of only other static fuction & static variables.
public:
    void setData(void)
    {
        cout << "Enter id : ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "Id is : " << id << endl<< "Emplyee number : " << count << endl;
    }
    
    // We use static function to access static variables
    static void getCount(void)  //static function declared & initialized
    {
        //cout<<id;       //throws an error, we cant print in static funtion 
        cout<<"Count is : "<<count<<endl;
    }
};

int Employee ::count;
// int Employee :: count  = 1000; // no error, it will work

int main()
{
    Employee e1;
    Employee e2;
    Employee e3;

    // e1.id=1;         //We can't do like this coz they are private variables!
    // e1.count=1;

    e1.setData();
    e1.getData();
    Employee::getCount();       // static function access

    e2.setData();
    e2.getData();
    Employee::getCount();

    e3.setData();
    e3.getData();
    Employee::getCount();
}