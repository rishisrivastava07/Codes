#include<iostream>
using namespace std;

class Integer{
    int a;
public:
    Integer(int a = 0){
        this->a = a;
    }
    void disp(){
        cout << "Integer value is " << a << endl; 
    }
    void operator=( const Integer& ob){
        a = ob.a;
    }
    Integer& operator++(int){
        a++;
        return *this;
    }
    friend Integer operator+(const Integer& op1, const Integer& op2){
        Integer temp;
        temp.a = op1.a + op2.a;
        return temp;
    }
    operator int(){
        return a;
    }
    friend ostream& operator<< (ostream& out, const Integer& ob){
        out << ob.a;
        return out;
    }
};

int main() {
    Integer a = 4, b = a, c;
    c = a + b++;
    int i = a;
    cout << a << b << c;
    return 0;
}
