#include<iostream>
using namespace std;

class Fighter
{
    private:
    int bomb;
    int armor;
    int health;
    string gun;

    public:
     void setDetails();
     int throwbumb();
     int firearmor();
     int decreasehealth();
     int getDetails();

};
int Fighter :: throwbomb()
{
    bomb=(bomb)-1;
}
int Fighter :: decreasehealth()
{
    health=(health)-10;
}
int Fighter :: firearmor()
{
    armor=(armor)-1;
}
void Fighter :: setDetails(int b,int a,int h,string g)
{
    bomb=b;
    armor=a;
    gun=g;
    health=h;
}
int Fighter :: getDetails()
{
    cout<<"bomb="<<bomb<<endl;
    cout<<"armor="<<armor<<endl;
    cout<<"gun="<<gun<<endl;
    cout<<"health="<<health<<endl;
}
int main()
{
    Fighter f1,f2;
    f1.setDetails();
    f2.setDetails();
    
    f1.throwbumb();
    f2.throwbumb();

    f1.decreasehealth();
    f2.decreasehealth();
    
    f1.firearmor();
    f2.firearmor();

    f1.getDetails();
    f2.getDetails();

    return 0;
}