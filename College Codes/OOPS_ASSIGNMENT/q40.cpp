#include<iostream>
using namespace std;

class A{
    int x;
    public:
};
class B{
    int y;
    public:
};
class C{
    int z;
    public:
};

class D : public A, public B{

};
class E : public B, public C{

};
class F : public D, public E{

};

int main(){
    return 0;
}
