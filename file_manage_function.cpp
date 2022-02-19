#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    ofstream out;
    out.open("file1.txt");
    out<<"This is me!"<<endl;
    out<<"The Harsh Turakhia";
    out.close();

    ifstream in;
    string st, st2;
    in.open("file1.txt");
    //in>>st >> st2;
    //cout<<st <<st2;

    while(in.eof() == 0)
    {
        getline(in,st);
        cout<<st<<endl;
    }

    in.close();

    return 0;
}