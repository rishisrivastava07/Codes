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
    print_array(nums,size);

    for(int i = 0 ; i < size/2; i++){
        int temp = nums[i];
        nums[i] = nums[size-i-1];
        nums[size-i-1] = temp;

    }

    print_array(nums,size);
    return 0;
}