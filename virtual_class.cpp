#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void set_number(int a)
        {
            roll_no = a;
        }
        void print_number()
        {
            cout<<"Your roll no is : "<<roll_no<<endl;
        }
};

class Test : public virtual Student
{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2)
        {
            maths = m1;
            physics = m2;
        }
        void print_marks()
        {
            cout<<"Your result is here : "<<endl
                <<"Maths : "<<maths<<endl   
                <<"Physics : "<<physics<<endl;
        }
};

class Sports : public virtual Student
{
    protected:
        float score;
    public:
        void set_score(float sc)
        {
            score = sc;
        }
        void print_score()
        {
            cout<<"Your PT score is : "<<score<<endl;
        }
};

class Result : public Test, public Sports
{
    protected:
        float total;
    public:
        void display()
        {
                total = maths + score + physics;

                print_number();
                print_marks();
                print_score();

                cout<<"TOTAL MARKS  == "<<total<<endl;
        }

};

int main()
{
    Result turky;

    turky.set_number(269);
    turky.set_marks(88.8, 77.7);
    turky.set_score(90);
    turky.display();
}