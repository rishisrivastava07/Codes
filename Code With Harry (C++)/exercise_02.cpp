#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x, y;

public:
    friend void calc(Point, Point);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    // void getpoint(void){
    //     cout<<"Enter the cordinated of Point : ";
    //     cin>>a>>b;
    // }
    void displaypoint()
    {
        cout << "The Point is : (" << x << "," << y << ")" << endl;
    }
};

void calc(Point o1, Point o2)
{
    int x_diff = (o2.x - o1.x);
    int y_diff = (o2.y - o1.y);

    int dist = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << "The Distance : " << dist << " units" << endl;
}

int main()
{
    int a1 = 0, a2 = 0, b1 = 0, b2 = 0;

    cout << "Distance Formula :" << endl;
    cout << "Enter the Cordinates  : ";
    cin >> a1 >> b1;
    
    Point p(a1, b1);

    p.displaypoint();
    
    cout << "Enter the Cordinates  : ";
    cin >> a2 >> b2;
    
    Point q(a2, b2);
    
    q.displaypoint();

    calc(p, q);

    return 0;
}