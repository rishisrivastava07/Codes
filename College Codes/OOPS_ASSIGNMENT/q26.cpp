#include<iostream>
using namespace std;
#define size 20
class Stack {
    int *buffer;
    int top;
public :
    Stack(int n){
        buffer = new int[n];
        top = -1;
    }
    void push(int);	
 	int pop();
	void disp();
};
void Stack :: push(int x){
    if(top > size-1){
        cout << "Stack Overflow " << endl;
        return ;
    }
    top++;
    buffer[top] = x;
}
int Stack :: pop(){
    if(top == -1){
        cout << "Stack Underflow " << endl;
        return -1;
    }
    int t = top;
    top--;
    return buffer[t];
}
void Stack :: disp(){
    cout << "---------------" << endl;
    for(int i = top; i >= 0; i --){
        cout << buffer[i] << endl;
    }
    cout << "---------------" << endl;
}
int main(){
    Stack s(10);
    for(int i = 0; i < 10; i++){
        s.push(i+2);
    }
    s.disp();
    cout << "POP Element " << s.pop() << endl;
    s.disp();
    return 0;
}