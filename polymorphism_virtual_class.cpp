//Run time polymorphism...

#include <iostream>
using namespace std;

class Baseclass
{
public:
    int base_var = 10;

    virtual void display()
    {
        cout << "1 Displaying base variable = " << base_var << endl;
    }
};

class Deriveclass : public Baseclass
{
public:
    int derive_var = 20;

    void display()
    {
        cout << "2 Displaying base variable = " << base_var << endl;
        cout << "2 Displaying derive variable = " << derive_var << endl;
    }
};

// If we write virtual keyword in base class function then
// pointer of base class passed to derivee class object will run...
// Means derive class function will run

int main()
{
    Baseclass *base_class_pointer;
    Baseclass base_obj;
    Deriveclass derive_obj;

    base_class_pointer = &derive_obj; // base class pointer pointing to derive class object
    base_class_pointer->display();
}