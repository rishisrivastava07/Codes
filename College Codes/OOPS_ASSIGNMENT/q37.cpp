#include<iostream>
using namespace std;

class Index{
    int x;
public:
    Index(int a = 0){
        x = a;
    }
    int getIndex(){
        return x;
    }
    operator int(){
        return x;
    }
    Index operator+ (Index ob){
        Index temp = *this;
        temp.x = ob.x + x;
        return temp;
    }
    
    void disp(){
        cout << "Index (x) = " << x << endl;
    }
};

class Integer{
    int i;
public:
    Integer(int b = 0){
        i = b;
    }
    // Integer(Index& ob){
    //     i = ob.getIndex();
    // }
    operator Index(){
        return Index(i);
    }
    void disp(){
        cout << "Integer (i) = " << i << endl;
    }
};
int main(){
    Index in;
    // out(10);
    // int x = in;		
    // int y = in + out;	
    // in = 2;				
    Integer i(10);
    in = i;     // UDT -> UDT	
    in.disp();
    return 0;
}