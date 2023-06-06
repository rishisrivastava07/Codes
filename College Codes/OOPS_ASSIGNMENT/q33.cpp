#include<iostream>
using namespace std;

class INT { 
        int i; 
    public : 
        INT(int a):i(a){}
        void disp(){
            cout << " i = " << i << endl;
        }

        INT& operator++(){
            ++i;
            return *this;
        }

        INT& operator++(int){
            INT temp = *this;
            ++i;
            return *this;
        }

        operator int(){
            return i;
        }
        
        ~INT() {} 
};
int main() { 
    int x = 3;
    INT y = x;
    y++ = ++y;
    y.disp();
    x = y;
    return 0;
}
