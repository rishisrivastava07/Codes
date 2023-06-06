#include<iostream>
using namespace std;

void print_array(int nums[], int size){
    for(int i = 0; i < size; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    print_array(arr,size);

    for(int i = 1; i < size; i += 2){
        swap(arr[i-1], arr[i]);
    }

    print_array(arr,size);

    return 0;
}