#include<iostream>
using namespace std;

#define size 100

class Queue{
    int *data;
    int front;
    int back;
public:
    Queue(int n = 0){
        data = new int[n];
        front = -1;
        back = -1;
    }
    void add(int);
    int remove();
    void display();
};
void Queue :: add(int x){
    if(back == size-1){
        cout << "Queue Overflow" << endl;
        return ;
    }
    back++;
    data[back] = x;

    if(front == -1){
        front++;
    }
}
int Queue :: remove(){
    if(front == -1 || front>back){
        cout << "Queue Underflow " << endl;
        return ;
    }
    int t = front;
    front++;
    return data[t];
}
void Queue :: display(){
    cout << " --------------- " << endl;
    for(int i = front; i <= back; i++){
        cout << data[i] << endl;
    }
    cout << " --------------- " << endl;
}

int main(){
    Queue q(10);
    for (int i = 0; i < 10; i++){
        q.add(i+2);
    }
    q.display();
    cout << "DEQUEUE Element" << q.remove() << endl;
    cout << "DEQUEUE Element" << q.remove() << endl;
    q.display();
    return 0;
}