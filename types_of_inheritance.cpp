---------------------Single inheritance-------------------------------------
#include<iostream>
using namespace std;
class fruit
{
public:
    fruit()
    {
        cout<<"\n\nI am Fruit"<<endl;
    }
};
class mango:public fruit
{
public:
    mango()
    {
        cout<<"\n\nI am Mango Fruit"<<endl;
    }

};
int main()
{
    mango m;
}



-------------------Multilevel inheritance--------------------------------
#include<iostream>
using namespace std;
class fruit
{
public:
    fruit()
    {
        cout<<"\n\nI am Fruit"<<endl;
    }
};
class summerfruit:public fruit
{
public:
    summerfruit()
    {
        cout<<"\n\nI am Summer Fruit"<<endl;
    }

};
class mango:public summerfruit
{
public:
    mango()
    {
        cout<<"\n\nI am Mango Fruit"<<endl;
    }

};

int main()
{
    mango m;
}



------------------Multiple inheritance-------------------
#include<iostream>
using namespace std;
class fruit
{
public:
    fruit()
    {
        cout<<"\n\nI am Fruit"<<endl;
    }
};
class summerfruit
{
public:
    summerfruit()
    {
        cout<<"\n\nI am Summer Fruit"<<endl;
    }

};
class mango:public fruit,public summerfruit
{
public:
    mango()
    {
        cout<<"\n\nI am Mango Fruit"<<endl;
    }

};

int main()
{
    mango m;
}




---------------------Hierarchical inheritance-----------------------------
#include<iostream>
using namespace std;
class fruit
{
public:
    fruit()
    {
        cout<<"\n\nI am Fruit"<<endl;
    }
};
class watermelon:public fruit
{
public:
    watermelon()
    {
        cout<<"\n\nI am Watermelon Fruit"<<endl;
    }

};
class mango:public fruit
{
public:
    mango()
    {
        cout<<"\n\nI am Mango Fruit"<<endl;
    }

};

int main()
{
    mango m;
    watermelon w;
}




-------------------Hybrid Inheritance-----------------------
#include<iostream>
using namespace std;
class fruit
{
public:
    fruit()
    {
        cout<<"\n\nI am Fruit"<<endl;
    }
};
class watermelon:public fruit
{
public:
    watermelon()
    {
        cout<<"\n\nI am Watermelon Fruit"<<endl;
    }

};
class mango:public fruit
{
public:
    mango()
    {
        cout<<"\n\nI am Mango Fruit"<<endl;
    }

};
class juice:public mango,public watermelon
{
public:
    juice()
    {
        cout<<"\n\nI am Juice"<<endl;
    }

};

int main()
{
    juice j;
}