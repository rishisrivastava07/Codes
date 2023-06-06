#include<iostream>
using namespace std;

class Student{
public:
    virtual void printDetails() const = 0; // read only function
    virtual ~Student() = 0; 
};
Student :: ~Student(){
    cout << "Student Class is Destructed" << endl;
}

class Engineering : public Student{
public:
    void printDetails() const{
        cout << "Engineering Students " << endl;
    }
};

class Mediciene : public Student{
public:
    void printDetails() const{
        cout << "Mediciene Students" << endl;
    }
};

class Science : public Student{
public:
    void printDetails() const{
        cout << "Science Students" << endl;
    }
};

int main(){
    Student* s[3];
    s[0] = new Engineering;
    s[1] = new Mediciene;
    s[2] = new Science;

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        s[i]->printDetails();
    }
    
    return 0;
}