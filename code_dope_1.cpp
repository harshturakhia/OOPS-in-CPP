//Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
// Assign the value of roll_no as '2' and that of name as
//"John" by creating an object of the class Student.

#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll_no;
    public:
        void setDetails(string n, int r)
        {
            name = n;
            roll_no = r;
        }
        int getDetails()
        {
            cout<<"Name : "<<name;
            cout<<"Roll No : "<<roll_no; 
        }
};

int main()
{
    int roll_no;
    string name;

    Student s1;

    s1.setDetails("John",2);
    s1.getDetails();
}
