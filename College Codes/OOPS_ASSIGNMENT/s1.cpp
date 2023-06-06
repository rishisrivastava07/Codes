#include<iostream>
using namespace std;

/*
class Sample{
    // int x;
    mutable int x;
    const int y = 5;
public:
    Sample(int a){
        x = a;
        // y = a;
    }
    void show(){
        cout << "1st show() -> x = " << x << " y = " << y << endl; 
        // x++;
        cout << "2nd show() -> x = " << x << " y = " << y << endl; 
    }

    void c_show() const{
        cout << "1st c_show() -> x = " << x << " y = " << y << endl; 
        x++;
        // y++;
        cout << "2nd c_show() -> x = " << x << " y = " << y << endl; 
    }
};

int main(){
    Sample s1(5);
    s1.show();
    s1.c_show();

    const Sample s2(10);
    // s2.show();
    s2.c_show();
    return 0;
}
*/

/*
class B;
class A{
    int a;
    public:
        A(int x = 0){
            a = x;
        }
        void disp(){
            cout << " A = " << a << endl;
        }
        friend B swap(A&, B&);
};
class B{
    int b;
    public:
        B(int y = 0){
            b = y;
        }
        void disp(){
            cout << " B = " << b << endl;
        }
        friend B swap(A& ob1, B& ob2){
            int t;
            t = ob1.a;
            ob1.a = ob2.b;
            ob2.b = t;
        }
};

// void swap(A& ob1, B& ob2){
//     int t;
//     t = ob1.a;
//     ob1.a = ob2.b;
//     ob2.b = t;
// }

int main(){
    A ob1(3);
    B ob2 = B(4);
    
    ob1.disp();
    ob2.disp();
    
    swap(ob1,ob2);

    ob1.disp();
    ob2.disp();

    return 0;
}
*/

/*

class Sample{
    int a;
    static int s;

    public:

        Sample(int a = 0){
            this->a = a;
            s++;
        }

        void disp(){
            cout << "A =  " << a << " & S = " << s << endl;
        }
};
int Sample :: s = 10;

int main(){
    // Sample ob1(4);
    // ob1.disp();
    // Sample ob2(5),ob3(8);
    // ob2.disp();
    // ob3.disp();

    Sample * ptr[10];
    int y;

    for (int i = 0; i < 10; i++)
    {
        cin >> y;
        ptr[i] = new Sample(y);
        ptr[i]->disp();
        cout << endl;
    }
    
}
*/

class Test{
    int t;
    public:
    Test(int a = 0){
        t = a;
    }
    void disp(Test * ptr){
        cout << " T = " << ptr->t << endl;
    }
};

int main(){
    Test ob(5);
    Test * p;
    p = &ob;
    ob.disp(p);
    p->disp(p);
    (*p).disp(p);
}