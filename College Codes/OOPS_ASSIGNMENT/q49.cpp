#include<iostream>
using namespace std;

class Vechicle{
public:
    virtual void disp() const = 0; // read only function
};

class Bus : public Vechicle{
public:
    void disp() const {
        cout << "Bus Vechicle " << endl;
    }
};
class Car : public Vechicle{
public:
    void disp() const {
        cout << "Car Vechicle " << endl;
    }
};
class Bike : public Vechicle{
public:
    void disp() const {
        cout << "Bike Vechicle " << endl;
    }
};
int main(){
    Vechicle* v[3];
    v[0] = new Bus;
    v[1] = new Car;
    v[2] = new Bike;

    Bus* b = dynamic_cast<Bus>(v);
    Car* c = dynamic_cast<Car>(v);
    Bike* bi = dynamic_cast<Bike>(v);
    return 0;
}