#include<iostream>
using namespace std;

class IntArray{
    int* arr;
    int size;
public:
    IntArray(int sz){
        size = sz;
        arr = new int[size];

        for(int i = 0; i < size; i++){
            arr[i] = i+1;
        }
    }

    int& operator[] (int index){
        if(index >= size){
            cout << "Array index out of bound " << endl;
            exit(0);
        }
        return arr[index];
    }

    friend ostream& operator <<(ostream& out, IntArray a){
        for (int i = 0; i < a.size; i++)
        {
            out << a.arr[i] << " ";
        }
        return out;
    }
    void disp(){
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        
    }
};

int main() {
    IntArray i(10); 
    // for(int k = 0; k < 10; k++) 
    //     i[k] = k;

    i[2] = 10;
    
    cout << i; 
    return 0;
}

