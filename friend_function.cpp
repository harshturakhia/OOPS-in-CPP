// We use friend function to give access of private variables...
#include <iostream>
using namespace std;
//encapsulation
class Exam
{
private:
    int id;          //data member (also instance variable)
    string name;     //data member(also instance variable)
    int total_marks; //data member(also instance variable)
public:
    void insert(int i, string n, int t) //member function
    {
        id = i;
        name = n;
        total_marks = t;
    }
    void display();
    friend void examTotal(Exam e1, Exam e2); // friend function can access privated data members of class
};

void Exam ::display() //member function
{
    cout << id << "  " << name << "  " << total_marks << endl;
}

void examTotal(Exam e1, Exam e2)
{
    int final_marks;
    final_marks = e1.total_marks + e2.total_marks;
    cout << "Final total of " << e1.name << " and " << e2.name << " = " << final_marks << endl;
}

int main(void)
{
    int i, id;
    string n;
    int total;
    int exam_count;
    cout << "For how many exams will you enter the data : " << endl;
    cin >> exam_count;
    Exam e[exam_count];

    for (i = 0; i < exam_count; i++)
    {

        cout << "Give your Id and Name : " << endl;
        cin >> id;
        cin >> n;
        cout << "Give total marks : " << endl;
        cin >> total;
        e[i].insert(id, n, total);
        e[i].display();
    }

    examTotal(e[0], e[1]);
    return 0;
}
