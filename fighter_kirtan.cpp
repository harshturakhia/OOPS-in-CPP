#include<iostream>
using namespace std;

class fighter
{
    private:
        string name;
        int age;
        int weight;
        int height;
    public:
        //default constructor
        fighter(){age = weight = height = 1;}

        // mutators
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        void setHeight(int h){
            height = h;
        }
        void setWeight(int w){
            weight = w;
        }

        // accessors OR facalitators (i.e. returning value)
        string getName(){ return name;}
        int getAge(){ return age;}
        int getWeight(){ return weight;}
        int getHeight(){ return height;}


        // Distructor
        ~fighter(){}

};

int main()
{
        string name;
        int age;
        int weight;
        int height;

        fighter f;

        cout<<"Enter your name :" ;
        cin>>name;
        f.setName(name);
        cout<<f.getName();
        cout<<endl;


        cout<<"Enter your age :" ;
        cin>>age;
        f.setAge(age);
        cout<<f.getAge();
        cout<<endl;

        cout<<"Enter your height :" ;
        cin>>height;
        f.setHeight(height);
        cout<<f.getHeight();
        cout<<endl;

        cout<<"Enter your weight :" ;
        cin>>weight;
        f.setWeight(weight);
        cout<<f.getWeight();
        cout<<endl;


}
