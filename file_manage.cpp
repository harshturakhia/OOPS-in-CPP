#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //connecting our file to hout stream
    ofstream hout("file1.txt");

    //Creating a name string and filling it with string entered by the user
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);

    //Writing a string to the file
    cout<<name << " is your name"<<endl;
    hout.close();

    ifstream hin("file1.txt");
    string content;
    hin>>content;
    cout<<"The content of file is : " << content;
    hin.close();

    return 0;
}