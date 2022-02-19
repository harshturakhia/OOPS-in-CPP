/*
#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    // Access specifier
    public:
 
    // Data Members
    string geekname;
 
    // Member Functions()
    void printname()
    {
       cout << "Geekname is: " << geekname;
    }
};
 
int main() {
 
    // Declare an object of class geeks
    Geeks obj1;
 
    // accessing data member
    obj1.geekname = "Abhi";
 
    // accessing member function
    obj1.printname();
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    public:
    string geekname;
    int id;
     
    // printname is not defined inside class definition
    void printname();
     
    // printid is defined inside class definition
    void printid()
    {
        cout << "Geek id is: " << id;
    }
};
 
// Definition of printname using scope resolution operator ::
void Geeks::printname()
{
    cout << "Geekname is: " << geekname;
}
int main() {
     
    Geeks obj1;
    obj1.geekname = "xyz";
    obj1.id=15;
     
    // call printname()
    obj1.printname();
    cout << endl;
     
    // call printid()
    obj1.printid();
    return 0;
}
*/

/*
// C++ program to demonstrate constructors
 
#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    public:
    int id;
     
    //Default Constructor
    Geeks()
    {
        cout << "Default Constructor called" << endl;
        id=-1;
    }
     
    //Parameterized Constructor
    Geeks(int x)
    {
        cout << "Parameterized Constructor called" << endl;
        id=x;
    }
};
int main() {
     
    // obj1 will call Default Constructor
    Geeks obj1;
    cout << "Geek id is: " <<obj1.id << endl;
     
    // obj1 will call Parameterized Constructor
    Geeks obj2(21);
    cout << "Geek id is: " <<obj2.id << endl;
    return 0;
}
*/


// C++ program to explain destructors
 
/*#include <bits/stdc++.h>
using namespace std;
class Geeks
{
    public:
    int id;
     
    //Definition for Destructor
    Geeks()
    {
        cout << "Constuctor called for id: " << id <<endl;
    }
};
 
int main()
  {
    Geeks obj1;
    obj1.id=7;
    int i = 0;
    while ( i < 5 )
    {
        Geeks obj2;
        obj2.id=i;
        i++;       
    } // Scope for obj2 ends here
 
    return 0;
  } // Scope for obj1 ends here
*/


