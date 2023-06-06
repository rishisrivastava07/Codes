#include<iostream>
using namespace std;

bool linear_search(int nums[], int size, int key){
    for(int i = 0; i < size; i++){
        if(nums[i] == key)
            return 1;
    }
    return 0;
}

bool binary_search(int nums[], int size, int key){
    int st = 0;
    int en = size-1;
    int mid = st + (en-st)/2;

    while(st <= en){
        if(nums[mid] == key){
            return 1;
        }
        else if(nums[mid] > key){
            en = mid - 1;
        }
        else{
            st = mid + 1;
        }
        mid = st + (en-st)/2;
    }
    return 0;
}
int main(){
    int key;
    cin >> key;

    int arr[] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    // cout << linear_search(arr,10,key) << endl;
    cout << binary_search(arr,10,key) << endl;
    return 0;
}