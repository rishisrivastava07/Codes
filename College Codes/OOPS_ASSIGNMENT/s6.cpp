#include<iostream>
using namespace std;

double sum(int a, double b){
    return (a+b);
}
int sum(int a, double b){
    return (a+b);
}
int main(){
    int a;
    double b;

    cout << " Sum (a+b) : " << sum(a+b) << endl;
    cout << " Sum (a+b) : " << sum(a+b) << endl;
}