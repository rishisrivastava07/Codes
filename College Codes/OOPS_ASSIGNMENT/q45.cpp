#include<iostream>
using namespace std;

class Base{
    int a;
public:
    Base(int a = 0){
        cout << "Base Constructor is called " << endl;
        this->a = a;
    }
    virtual ~Base(){
        cout << "Base Destructor is called " << endl;
    }
};

class Derived : public Base{
    int b;
public:
    Derived(int b){
        cout << "Derived Constructor is called " << endl;
        this->b = b;
    }
    ~Derived(){
        cout << "Derived Destructor is called " << endl;
    }
};

int main(){
    Base* ptr = new Derived(2);

    delete ptr;
    return 0;
}