#include<iostream>
#include<iomanip>
using namespace std;

class Employee{
protected:
    string name;
    long double salary;
    long double tot_sal;
    // int eid;
public:
    Employee(string name = " ", long double salary = 0.0){
        this->name = name;
        this->salary = salary;
    }

    void setName(string nm){
        name = nm;
    }
    string getName(){
        return name;
    }
    void setSal(long double sal){
        salary = sal;
    }
    double getSal(){
        return salary;
    }
    virtual void printDetails(){
        cout << "Name = " << name << endl;
        cout << "Salary = " << salary << fixed << setprecision(2) << endl;
    }
};

class Manager : public Employee{
    string type;
    double allowance = 0.24;
public:
    Manager(string name = " ", long double salary = 0.0, string type = " "):Employee(name,salary){
        this->name = name;
        this->salary = salary;
        this->type = type;
    }
    void setType(string &type){
        this->type = type;
    }
    string getType(){
        return type;
    }
    void printDetails(){
        cout << "Name = " << getName() << endl;
        cout << "Salary = " << fixed << setprecision(2) << getSal() << endl;
        cout << "Type = " << getType() << endl;
        cout << "Allowance (" << allowance << " %) = "  << getSal()*allowance << endl;
    }
};

class Clerk : public Employee{
    string type;
    double allowance = 0.12;
public:
    Clerk(string name = " ", long double salary = 0.0, string type = " "):Employee(name,salary){
        this->name = name;
        this->salary = salary;
        this->type = type;
    }
    void setType(string &type){
        this->type = type;
    }
    string getType(){
        return type;
    }
    void printDetails(){
        cout << "Name = " << getName() << endl;
        cout << "Salary = " << fixed << setprecision(2) << getSal() << endl;
        cout << "Type = " << getType() << endl;
        cout << "Allowance (" << allowance << " %) = " << getSal()*allowance << endl;
    }
};

int main(){
    Employee* emp[6];
    emp[0] = new Employee("Renu",200000);
    emp[1] = new Employee("ABhay",250000);
    emp[2] = new Manager("Rishi",2000000,"HR");
    emp[3] = new Manager("Suman",3000000,"HR");
    emp[4] = new Clerk("Anjali",650000,"Typist");
    emp[5] = new Clerk("Swarnima",600000,"Senior Typist");

    for (int i = 0; i < 6; i++){
        cout << "Details of Emp " << i + 1 << endl;
        emp[i]->printDetails();
        cout << endl;
    }
    
    return 0;
}