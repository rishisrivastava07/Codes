#include<iostream>
using namespace std;

class Shape{
protected:
    string name;
public:
    Shape(string s){
        name = s;
    }
    virtual double getArea() = 0;
    virtual void getName() = 0;
    virtual void printDetails() = 0;
    virtual ~Shape(){
        cout << "Shape Class Destructed " << endl;
    }
};

class Circle : public Shape{
    float rad;
public:
    Circle(float rad) : Shape("Circle"){
        this->rad = rad;
    }
    void setRadius(float r){
        rad = r;
    }
    float getRadius(){
        return rad; 
    }
    double getArea(){
        return (3.14*rad*rad);
    }
    void getName(){
        cout << "Name of the shape is = " << name << endl;
    }
    void printDetails(){
        this->getName();
        cout << "Area = "<< this->getArea() << endl;
    }
    ~Circle(){
        cout << "Circle is Destructed " << endl;
    }
};

class Rectangle : public Shape{
    float len,bre;
public:
    Rectangle(float len, float bre) : Shape("Rectangle"){
        this->len = len;
        this->bre = bre;
    }
    void setLen(float len){
        this->len = len;
    }
    void setBre(float bre){
        this->bre = bre;
    }
    float getLen(){
        return len;
    }
    float getBre(){
        return bre;
    }
    double getArea(){
        return (len*bre);
    }
    void getName(){
        cout << "Name of the shape is = " << name << endl;
    }
    void printDetails(){
        this->getName();
        cout << "Area = "<< this->getArea() << endl;
    }
    ~Rectangle(){
        cout << "Rectangle is Destructed " << endl;
    }
};

class Trapeziod : public Shape{
    float a,b,h;
public:
    Trapeziod(float a, float b, float h) : Shape("Trapeziod"){
        this->a = a;
        this->b = b;
        this->h = h;
    }
    void setB1(float a){
        this->a = a;
    }
    void setB2(float b){
        this->b = b;
    }
    void setHigh(float h){
        this->h = h;
    }
    float getB1(){
        return a;
    }
    float getB2(){
        return b;
    }
    float getHigh(){
        return h;
    }
    double getArea(){
        return (((a+b)*h)/2);
    }
    void getName(){
        cout << "Name of the shape is = " << name << endl;
    }
    void printDetails(){
        this->getName();
        cout << "Area = "<< this->getArea() << endl;
    }
    ~Trapeziod(){
        cout << "Trapeziod is Destructed " << endl;
    }
};
int main(){
    Shape* s[3];
    s[0] = new Circle(10);
    s[1] = new Rectangle(10,20);
    s[2] = new Trapeziod(10,20,30);

    for (int i = 0; i < 3; i++)
    {
        s[i]->printDetails();
        cout << endl;
        delete s[i];
        cout << endl;
    }
    
    return 0;
}