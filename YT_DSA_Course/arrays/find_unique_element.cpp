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

    int nums[100];

    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }
    // print_array(nums,size);

    int unique = 0;
    for(int i = 0; i < size; i++){
        unique = unique ^ nums[i];
    }

    cout << "Unique element in an array = " << unique << endl;
    return 0;
}