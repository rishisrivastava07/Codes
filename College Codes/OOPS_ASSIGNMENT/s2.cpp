#include<iostream>
using namespace std;
/*
class Base{
    int a;
    public:
    void set_a(int a){
        this->a = a;
    }
    void disp();
};
void Base :: disp(){
    cout << " A = " << a << endl;
}
class Child : public Base{
    int b;
    public:
    void set_b(int b){
        this->b = b;
    }
    void disp(){
        Base :: disp();
        cout << " B = " << b << endl;
    }
};

int main(){
    Child c;
    c.set_b(5);
    c.set_a(10);
    c.disp();
    return 0;
}
*/

/*
class Base1{
    public:
    virtual void disp(){
        cout << " Base1 Class " << endl;
    }
};
class Base2{
    public:
    virtual void disp(){
        cout << " Base2 Class " << endl;
    }
};

class Child : public Base1, public Base2{
    public:
    void show(){
        cout << " Child Class " << endl;
    }
};
class GrandChild : public Child{
    public:
    void disp(){
        cout << " GrandChild Class " << endl;
    }
};

int main(){
    Base1 * ptr;
    Child ob;
    ptr = & ob;

    ptr->show();
    // Base * ptr1 = new GrandChild();
    // Base * ptr2 = new Child();
    // ptr1->disp();
    // ptr2->disp();

    // Child ob;
    // ob.Base1::disp();

}
*/
/*
class B{
    protected:
        int d;
    public:
    B(int x = 0){
        d = x;
    }

};
class C1 : virtual public B{
    public:

};
class C2 : virtual public B{
    public:

};
class GC : public C1, public C2{
    public:
        void print(){
            cout << " d = " << d << endl;
        }
};

int main(){
    B ob(5);

    GC ob1;
    ob1.print();
}
*/
/*
class B{
    public:
    B(){
        cout << " Base Class Def - Constructor Called " << endl;
    }
    B(int x){
        cout << " Base Class Para - Constructor Called " << endl;
    }
    ~B(){
        cout << " Base Class Destructor Called " << endl;
    }
};

class C1 : virtual public B{
    public:
    C1(){
        cout << " Child1 Class Def - Constructor Called " << endl;
    }
    C1(int y){
        cout << " Child1 Class Para - Constructor Called " << endl;
    }
    ~C1(){
        cout << " Child1 Class Destructor Called " << endl;
    }
};
class C2 : virtual public B{
    public:
    C2(){
        cout << " Child2 Class Def - Constructor Called " << endl;
    }
    C2(int z){
        cout << " Child2 Class Para - Constructor Called " << endl;
    }
    ~C2(){
        cout << " Child2 Class Destructor Called " << endl;
    }
};
class GC : public C1, public C2{
    public:
    GC(int z = 1):C1(z+2),C2(z*2){
        cout << " GrandChild Class Para - Constructor Called " << endl;
    }

    ~GC(){
        cout << " GrandChild Class Destructor Called " << endl;
    }
};

int main(){
    GC ob;
}
*/
/*
class B{
    public:
    B(int x = 0){
        cout << " B - const " << endl;
    }
    // ~B(){
    //     cout << " B - dest " << endl;
    // }
    virtual ~B() = 0;
};
B :: ~B(){
    cout << " B - dest " << endl;
}

class C: public B{
    public:
    C(int x = 0){
        cout << " C - const " << endl;
    }
    void disp(){
        cout << " display " << endl;
    }
    ~C(){
        cout << " C - dest " << endl;
    }
};

int main(){
    B* ptr = new C(4);
    // C ob(2);
    // ptr = &ob;

    delete ptr;
}
*/

class A{
    public:
    A(){
        cout << " A - def const " << endl;
    }
    A(int a){
        cout << " A - para const " << endl;
    }
};
class B1 : public A{
    public:
    B1(int x):A(2*x){
        cout << " B1 - para const " << endl;
    }
};
class B2 : public A{
    public:
    B2(int z){
        cout << " B2 - para const " << endl;
    }
};

class C : public B1, public B2{
    public:
    C(){
        cout << " C - def const " << endl;
    }
};

int main(){
    C ob;
}