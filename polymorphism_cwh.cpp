//Run time polymorphism...

#include <iostream>
using namespace std;

class Baseclass
{
public:
    int base_var;
    void display()
    {
        cout << "Displaying base variable = " << base_var << endl;
    }
};
class Deriveclass : public Baseclass
{
    public:
    int derive_var;
    void display()
    {
        cout << "Displaying derive variable = " << derive_var << endl;
    }
};

int main()
{
    Baseclass *base_class_pointer;
    Baseclass base_obj;
    Deriveclass derive_obj;
    base_class_pointer = &derive_obj;

    base_class_pointer->base_var = 45;

    //base_class_pointer->base_var = 45;  // will throw an error

    base_class_pointer->display();

    Deriveclass * derive_class_pointer;
    derive_class_pointer = &derive_obj;

    derive_class_pointer->derive_var = 50;
    derive_class_pointer->base_var = 55;
    base_class_pointer->display();
    derive_class_pointer->display();


    return 0;
}