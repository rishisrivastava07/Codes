#include<iostream>
using namespace std;

class Shape2D{
public :
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual void printFunc() = 0;
    // virtual void printFunc(){
    //     cout << "Area = " << area() << endl;
    //     cout << "Perimeter = " << perimeter() << endl;
    // }
};
class Circle : public Shape2D{
    float rad;
public:
    Circle(float r){
        rad = r;
    }
    void setRadius(float r){
        rad = r;
    }
    double getRadius(){
        return rad;
    }
    double area(){
        return (3.14*rad*rad);
    }
    double perimeter(){
        return (2*3.14*rad);
    }
    void printFunc(){
        cout << "Area of Circle with radius : " << rad << " is = " << area() << endl;
        cout << "Circumference of Circle with radius : " << rad << " is = " << perimeter() << endl;
    }
};
class Rectangle : public Shape2D{
    float len,bre;
public:
    Rectangle(float len, float bre){
        this->len = len;
        this->bre = bre;
    }
    void setDimensions(float l, float b){
        len = l;
        bre = b;
    }
    // void getDimensions(){
        
    // }
    double area(){
        return (len*bre);
    }
    double perimeter(){
        return (2*(len+bre));
    }
    void printFunc(){
        cout << "Area of Rectangle with (len,bre) : " << len << "," << bre << " is = " << area() << endl;
        cout << "Area of Rectangle with (len,bre) : " << len << "," << bre << " is = " << perimeter() << endl;
    }
};
int main(){
    Shape2D* shape[5];
    shape[0] = new Circle(3.4);
    shape[1] = new Circle(4.2);
    shape[2] = new Circle(1.7);
    shape[3] = new Rectangle(3,5);
    shape[4] = new Rectangle(6.7,7.2);
    for (int i = 0; i < 5; i++)
    {
        cout << "Shape " << i+1 << endl;
        shape[i]->printFunc();
        cout << endl;
    }
    
    // shape[1]->printFunc();
    return 0;
}