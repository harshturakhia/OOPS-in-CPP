//Array of objects with parameterized constructors in C++
// There are differnt methods to initialize object with parameter constructor

/*
1) Using bunch of function calls as elements of array:  It’s just like normal array declaration
but here we initialize the array with function calls of constructor as elements of that array.

#include <iostream>
using namespace std;
 
class Test 
{
    // private variables.
private:
    int x, y;
 
public:
    // parameterized constructor
    Test(int cx, int cy)
    {
        x = cx;
        y = cy;
    }
    // method to add two numbers
    void add() 
    { 
        cout << x + y << endl; 
    }
};
int main()
{
     // Initializing 3 array Objects with function calls of
    // parameterized constructor as elements of that array

    Test obj[] = { Test(1, 1), Test(2, 2), Test(3, 3) };
 
    // using add method for each of three elements.
    for (int i = 0; i < 3; i++) 
    {
        obj[i].add();
    }
 
    return 0;
}
*/

/*
2)  Using malloc(): To avoid the call of non-parameterised constructor, 
use malloc() method. “malloc” or “memory allocation” method in C++ is 
used to dynamically allocate a single large block of memory with the specified size. 
It returns a pointer of type void which can be cast into a pointer of any form.

#include <iostream>
#define N 5
 
using namespace std;
 
class Test {
    // private variables
    int x, y;
 
public:
    // parameterised constructor
    Test(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
 
    // function to print
    void print() { cout << x << " " << y << endl; }
};
 
int main()
{
    // allocating dynamic array
    // of Size N using malloc()
    Test* arr = (Test*)malloc(sizeof(Test) * N);
 
    // calling constructor
    // for each index of array
    for (int i = 0; i < N; i++) {
        arr[i] = Test(i, i + 1);
    }
 
    // printing contents of array
    for (int i = 0; i < N; i++) {
        arr[i].print();
    }
 
    return 0;
}

O/P : 
        0 1
        1 2
        2 3
        3 4
        4 5

*/

/*

3) Using new keyword: The new operator denotes a request for memory allocation on the Heap. 
If sufficient memory is available, the new operator initializes the memory 
and returns the address of the newly allocated and initialized memory to the pointer variable. 
Here, pointer-variable is the pointer of type data-type. 
Data-type could be any built-in data type including array or any user-defined data types
including structure and class.
For dynamic initialization new keyword require non parameterised constructor 
if we add a parameterised constructor. So we will use a dummy constructor for it.

#include <iostream>
#define N 5
 
using namespace std;
 
class Test {
    // private variables
    int x, y;
 
public:
    // dummy constructor
    Test() {}
 
    // parameterised constructor
 
    Test(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
 
    // function to print
    void print() { cout << x << " " << y << endl; }
};
 
int main()
{
    // allocating dynamic array
    // of Size N using new keyword
    Test* arr = new Test[N];
 
    // calling constructor
    // for each index of array
    for (int i = 0; i < N; i++) {
        arr[i] = Test(i, i + 1);
    }
 
    // printing contents of array
    for (int i = 0; i < N; i++) {
        arr[i].print();
    }
 
    return 0;
}

O/P : 
        0 1
        1 2
        2 3
        3 4
        4 5
*/

/*

4) Using Double pointer (pointer to pointer concept): 

A pointer to a pointer is a form of multiple indirections, or a chain of pointers.
Normally, a pointer contains the address of a variable. When we define a pointer to a pointer, 
the first pointer contains the address of the second pointer, which points to the location 
that contains the actual value as shown below.
Here we can assign a number of blocks to be allocated and thus for every index 
we have to call parameterised constructor using the new keyword to initialize.

#include <iostream>
#define N 5
 
using namespace std;
 
class Test {
    // private variables
    int x, y;
 
public:
    // parameterised constructor
 
    Test(int x, int y)
        : x(x)
        , y(y)
    {
    }
 
    // function to print
    void print() { cout << x << " " << y << endl; }
};
 
int main()
{
    // allocating array using
    // pointer to pointer concept
    Test** arr = new Test*[N];
 
    // calling constructor for each index
    // of array using new keyword
    for (int i = 0; i < N; i++) {
        arr[i] = new Test(i, i + 1);
    }
 
    // printing contents of array
    for (int i = 0; i < N; i++) {
        arr[i]->print();
    }
 
    return 0;
}

Output: 
    0 1
    1 2
    2 3
    3 4
    4 5
*/