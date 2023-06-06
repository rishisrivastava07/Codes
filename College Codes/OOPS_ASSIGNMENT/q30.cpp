#include<iostream>
#include<cmath>
using namespace std;

class Point{
    int x,y;
public:
    Point(int x = 0, int y = 0){
        this->x = x;
        this->y = y;
    }

    void reader(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    void writter(int a, int b){
        x = a;
        y = b;
    }
    double operator-(Point &p){
        Point t;
        t.x = x - p.x;
        t.y = y - p.y;
        return pow((pow(t.x,2) + pow(t.y,2)),0.5);
    }
};
int main(){
    Point p1,p2;
    p1.writter(4,3);
    p1.reader();
    p2.reader();
    double dist = p1 - p2;
    cout << "Distance = " << dist << " unit " << endl;
    return 0;
}