#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll(int);
    void get_roll();
};
void Student ::set_roll(int r)
{
    roll_no = r;
}
void Student ::get_roll()
{
    cout << "The Roll No is : " << roll_no << endl;
}

class Exam : public Student
{
protected:
    float Sub1, Sub2;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float s1, float s2)
{
    Sub1 = s1;
    Sub2 = s2;
}
void Exam ::get_marks()
{
    cout << "The Marks scored in Physics : " << Sub1 << endl;
    cout << "The Marks scored in Maths : " << Sub2 << endl;
}

class Result : public Exam
{
    float per;

public:
    void calc(float, float);
    void display_result();
};

void Result ::calc(float s1, float s2)
{
    per = ((s1 + s2) / 2);
}
void Result ::display_result()
{
    cout << "The percentage scored by student : " << per <<" % "<< endl;
    get_marks();
    get_roll();
    if (per >= 33)
    {
        cout << "You are pass" << endl;
    }
    else
    {
        cout << "You are fail" << endl;
    }
}

int main()
{
    // Student rishi;
    Result rishi;
    float s1,s2;
    cout<<"Enter the Maths marks : ";
    cin>>s1;
    cout<<"Enter the Physics marks : ";
    cin>>s2;

    rishi.set_roll(6125640);
    rishi.set_marks(s1,s2);
    rishi.display_result();
    return 0;
}