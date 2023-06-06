#include <iostream>
#include <string.h>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setNumber(int r)
    {
        roll = r;
    }
    void printNumber()
    {
        cout << "The Roll No : " << roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    float m1, m2, m3;

public:
    void setMarks(float a, float b, float c)
    {
        m1 = a;
        m2 = b;
        m3 = c;
    }
    void print_marks()
    {
        cout << "The marks of Subject 1 : " << m1 << endl
             << "The marks of Subject 2 : " << m2 << endl
             << "The marks of Subject 3 : " << m3 << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void setScore(float s)
    {
        score = s;
    }
    void printScore()
    {
        cout << "Your PT Score is : " << score << endl;
    }
};

class Result : public Test, public Sports
{
    private:
     float total;
    public:
    void display(){
        total = m1+m2+m3+score;
        printNumber();
        print_marks();
        printScore();
        cout<<"Your total score is : "<<total<<endl;
        cout<<"Your percentage is : "<<(total/4)<<endl;
    }
};

int main()
{
    Result obj1;
    obj1.setNumber(12);
    obj1.setMarks(70,98,45);
    obj1.setScore(87);

    obj1.display();
    return 0;
}