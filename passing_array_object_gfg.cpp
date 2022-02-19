// C++ program to illustrate the
// passing the array of objects
// to function parameter
#include <iostream>
using namespace std;

// Class Student
class Student
{
    int roll;
    char name[50];
    int total;

public:
    // Function to input Roll Number
    void getdata()
    {
        cout << "Enter your Roll: "
             << endl;
        cin >> roll;
        cout << "Enter your Name: "
             << endl;
        cin.ignore();
        cin.get(name, 50);
        cout << "Enter your Total "
             << "Marks: " << endl;
        cin >> total;
    }

    // Function to pass the array of
    // objects
    int pos(Student obj[], int size)
    {
        int pos = 0;
        int max = obj[0].total;

        // Traverse the array of object
        for (int i = 0; i < size; i++)
        {
            if (obj[i].total > max)
            {
                max = obj[i].total;
                pos = i;
            }
        }
        return pos;
    }

    // Function to display the students
    // details
    void putdata()
    {
        cout << "Roll: " << roll
             << endl;
        cout << "Name: " << name
             << endl;
        cout << "Total Marks: "
             << total << endl;
    }
};

// Function that have array of objects
void arrayOfObjects()
{
    Student s[3], s1;
    int pos;
    for (int i = 0; i < 3; i++)
    {
        s[i].getdata();
    }
    pos = s1.pos(s, 3);
    cout << "Highest scoring Student"
         << " Details:" << endl;
    s[pos].putdata();
    return 0;
}

// Driver Code
int main()
{
    // Function Call
    arrayOfObejects();

    return 0;
}