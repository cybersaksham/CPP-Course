#include <iostream>
using namespace std;

// CWH class
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
    virtual void display() = 0; // Do-Nothing Function --> Pure Virtual Function
    // If we do not re-define pure virtual function in derived classes then will give error.
    // Abstract base class is related with pure virtual function i.e. abstract base class assures that a derived class will be made & it contain re-defining of virtual function.
};

// CWHVideo class
class CWHVideo : public CWH
{
    float videoLen;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r) { videoLen = vl; }
    void display()
    {
        cout << endl
             << "This is an amazing video with title " << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars." << endl;
        cout << "Length of this video is " << videoLen << " minutes." << endl;
    }
};

// CWHText class
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r) { words = wc; }
    void display()
    {
        cout << endl
             << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings : " << rating << " out of 5 stars." << endl;
        cout << "No of words in this are " << words << " words." << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For CWHVideo
    title = "Django Tutorial";
    vlen = 4.56;
    rating = 4.89;

    CWHVideo djVideo(title, rating, vlen);
    djVideo.display();

    // For CWHText
    title = "Django Text Tutorial";
    words = 433;
    rating = 4.19;

    CWHText djText(title, rating, words);
    djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}