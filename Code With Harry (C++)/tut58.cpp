#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // DO nothing function -> pure virtual function
};

// Pure Virtual function used to make a Abstract Base Class
// Abstract Base Class -> is only used to derive new class from it and atleast one Pure Virtual FUnction must be there

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "\n This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "\n This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "CPP tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo cppVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "CPP tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText cppText(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &cppVideo;
    tuts[1] = &cppText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
