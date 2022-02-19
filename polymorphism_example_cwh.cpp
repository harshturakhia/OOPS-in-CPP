#include <iostream>
#include<string.h>
using namespace std;

class Harsh
{
protected:
    string title;
    float rating;

public:
    Harsh(string s, float r)
    {
        title = s;
        rating = r;
    }

};

class Harshvideo : public Harsh
{
    float videolength;

public:
    Harshvideo(string s, float r, float vl) : Harsh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is amazing video with title " << title << endl;
        cout << "Rating : " << rating << " Out of 5 star" << endl;
        cout << "Videolength : " << videolength << " minutes" << endl;
    }
};

class Harshtext : public Harsh
{
    int words;

public:
    Harshtext(string s, float r, int w) : Harsh(s, r)
    {
        words = w;
    }
    void display()
    {
            cout << "This is amazing video with title " << title << endl;
            cout << "Rating : " << rating << " Out of 5 star" << endl;
            cout << "Words : " << words << " minutes" << endl;
    }
};

int main()
{
    string title;
    float rating, videolength;
    int words;

    title = "Harsh Turakhia!";
    rating = 4.5;
    videolength = 33.33;
    words = 120;

    Harshvideo turky(title, rating, videolength);
    turky.display();

    cout<<endl;
    cout<<endl;

    Harshtext turky2(title, rating, words);
    turky2.display();

}
