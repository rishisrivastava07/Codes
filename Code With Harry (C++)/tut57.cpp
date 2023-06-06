#include <iostream>
// #include <cstring>
// #include <string.h>
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
    virtual void display() {} 
};

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
        cout << "This is an amazing video title : " << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars" << endl;
        cout << "Video Length : " << videoLength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int wordCount;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        wordCount = wc;
    }
    void display()
    {
        cout << "This is an amazing text title : " << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars" << endl;
        cout << "Word Length : " << wordCount << " words" << endl;
    }
};
int main()
{
    string title = new char[30];
    float rating, vlen;
    int wcount;

    // // for code with Harry Videos

    title = "CPP Tutorial";
    vlen = 4.56;
    rating = 4.8;

    CWHVideo CPPVideo(title, rating, vlen);
    // CPPVideo.display();

    // // for CWH Text

    title = "CPP Tutorial";
    wcount = 1800;
    rating = 4.9;
    CWHText CPPText(title, rating, wcount);
    // CPPText.display();

    CWH *tuts[2];
    tuts[0] = &CPPVideo;
    tuts[1] = &CPPText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}