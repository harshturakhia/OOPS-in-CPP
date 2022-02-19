#include<iostream>
using namespace std;

template<class T>
class Stack
{
    private:
        T *stk;
        int top;
        int size;
    public:
        Stack(int sz)
        {
            size = sz;
            top = -1;
            stk = new T[size];
        }
        void push(T x);
        int pop();
};

template<class T>
T Stack <T> :: push(T x)
{
    if(top == size - 1)
    {   
        cout<<"Stack is full";
    }
    else
    {
         top++;
        stk[top]=x;
    }
}

template <class T>
T Stack <T> :: pop()
{
    T x=0;
    if(top == size - 1)
    {
        cout<<"Stack is empty";
    }
    else
    {
        top--;
        x = stk[top];
    }
}

int main()
{
    Stack <int> s(10);
    s.push(10);
    s.push(20);
    s.push(30);
   
}