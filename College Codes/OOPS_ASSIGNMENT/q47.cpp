#include<iostream>
using namespace std;

class Person{
protected:
    int d = 10;
public:
    Person(){
        cout << "Person Class is Constructed " << endl;
    }
    ~Person(){
        cout << "Person Class is Destructed " << endl;
    }
};

class Employee : virtual public Person{
public:
    Employee(){
        cout << "Employee Class is Constructed " << endl;
    }
    ~Employee(){
        cout << "Employee Class is Destructed " << endl;
    }
};

class Student : virtual public Person{
public:
    Student(){
        cout << "Student Class is Constructed " << endl;
    }

    ~Student(){
        cout << "Student Class is Destructed " << endl;
    }
};

class Manager : public Employee, public Student{
public:
    Manager(){
        cout << "Manager Class is Constructed " << endl;
    }
    void print(){
        cout << " d = " << d << endl;
    }
    ~Manager(){
        cout << "Manager Class is Destructed " << endl;
    }
};

int main(){
    Manager ob;
    ob.print();
    return 0;
}