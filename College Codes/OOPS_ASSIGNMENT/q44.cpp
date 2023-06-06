#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class Shape{
public:
    virtual void printDetails() = 0;
};

class TwoDShape : public Shape{
public:
    virtual void printDetails() = 0;
    virtual double getArea() = 0;
};

class ThreeDShape : public Shape{
public:
    virtual double getArea() = 0;
    virtual double getVolume() = 0;
    virtual void printDetails() = 0;
};
class Circle : public TwoDShape{
    float r;
public:
    Circle(float r){
        this->r = r;
    }
    void sbetRadius(float r){
        this->r = r;
    }
    float getRadius(){
        return r;
    }
    double getArea(){
        return (3.14*r*r);
    }
    void printDetails(){
        cout << "Shape is Circle : " << endl;
        cout << "Radius = " << r
             << " & Area = " << getArea() << endl;
    }
};
class Triangle : public TwoDShape{
    float alt,base;
public:
    Triangle(float a, float b){
        alt = a;
        base = b;
    }
    void setAlt(float a){
        alt = a;
    }
    void setBase(float b){
        base = b;
    }
    float getAlt(){
        return alt;
    }
    float getBase(){
        return base;
    }
    double getArea(){
        return (alt*base)/2;
    }
    void printDetails(){
        cout << "Shape is Triangle : " << endl;
        cout << "Altitude = " << alt << ", Base = " << base
             << " & Area = " << getArea() << endl;
    }
};
class Ellipse : public TwoDShape{
    float min,maj;
public:
    Ellipse(float min, float maj){
        this->min = min;
        this->maj = maj;
    }
    void setMaj(float ma){
        maj = ma;
    }
    void setMin(float mi){
        min = mi;
    }
    float getMaj(){
        return maj;
    }
    float getMin(){
        return min;
    }
    double getArea(){
        return (3.14*maj*min);
    }
    void printDetails(){
        cout << "Shape is Ellipse : " << endl;
        cout << "Major Axis = " << maj << ", Minor Axis = " << min
             << " & Area = " << getArea() << endl;
    }
};
class Sphere : public ThreeDShape{
    float rad;
public:
    Sphere(float rad){
        this->rad = rad;
    }
    void setRadius(float r){
        rad = r;
    }
    float getRadius(){
        return rad;
    }
    double getArea(){
        return (4*3.14*pow(rad,2));
    }
    double getVolume(){
        return ((4*3.14*pow(rad,3))/3);
    }
    void printDetails(){
        cout << "Shape is Sphere : " << endl;
        cout << "Radius = " << rad
             << " & Area = " << getArea()
             << " & Volume = " << getVolume() << endl;
    }
};
class Cube : public ThreeDShape{
    float a;
public:
    Cube(float side){
        a = side;
    }
    void setSide(float s){
        a = s;
    }
    float getSide(){
        return a;
    }
    double getArea(){
        return (6*a*a);
    }
    double getVolume(){
        return (a*a*a);
    }
    void printDetails(){
        cout << "Shape is Cube : " << endl;
        cout << "Side = " << a
             << " & Area = " << getArea()
             << " & Volume = " << getVolume() << endl;
    }
};
int main(){
    vector <Shape*> shapes(5);
    vector <TwoDShape*> twoD(3);
    vector <ThreeDShape*> threeD(2);

    twoD[0] = new Circle(10);
    shapes[0] = twoD[0];
    
    twoD[1] = new Triangle(7,5);
    shapes[1] = twoD[1];
    
    twoD[2] = new Ellipse(3,4);
    shapes[2] = twoD[2];
    
    threeD[3] = new Sphere(7);
    shapes[3] = threeD[3];
    
    threeD[4] = new Cube(4);
    shapes[4] = threeD[4];

    for (int i = 0; i < 5; i++){
        shapes[i]->printDetails();
        cout << endl;    
    }
    return 0;
}