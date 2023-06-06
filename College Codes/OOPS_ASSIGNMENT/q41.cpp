#include<iostream>
// #include<string.h>
using namespace std;

class Person{
protected:
    string name;
    int age;
    float height;
public:
    Person(const string &name, int age, float height) {
        this->name = name;
        this->age = age;
        this->height = height;
    }
    void setName(string nm){
        name = nm;
    }
    string getName(){
        return name;
    }
    void setAge(int ag){
        age = ag;
    }
    int getAge(){
        return age;
    }
    void setHeight(float high){
        height = high;
    }
    float getHeight(){
        return height;
    }
    virtual void printDetails(){
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Height = " << height << endl;
    }
};

class Student : public Person {
    int rno;
    int yoa;
public:
    Student(const string &name, int age, float height, int rno, int yoa):Person(name,age,height){
        this->name = name;
        this->age = age;
        this->height = height;
        this->rno = rno;
        this->yoa = yoa;
    }

    void setRoll(int roll){
        rno = roll;
    }
    int getRoll(){
        return rno;
    }
    void setYear(int year){
        yoa = year;
    }
    int getYear(){
        return yoa;
    }
    void printDetails(){
        cout << "Name = " << getName() << endl;
        cout << "Age = " << getAge() << endl;
        cout << "Height = " << getHeight() << endl;
        cout << "Roll No = " << rno << endl;
        cout << "Year of Addmission = " << yoa << endl;
    }

};

int main(){
    Person* p[4];
    p[0] = new Person("Rishi",22,177);
    p[1] = new Person("Puneet",20,165);
    p[2] = new Student("Sayan",22,167,1012,2022);
    p[3] = new Student("Arka",21,180,1008,2022);

    for (int i = 0; i < 4; i++){
        cout << "Details of " << i + 1 << endl;
        p[i]->printDetails();
        cout << endl;
    }
    
    return 0;
}
