#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort01(int arr[], int size){
    int left = 0, right = size - 1;

    while(left < right){
        while(arr[left] == 0){
            left++;
        }

        while(arr[right] == 1){
            right--;
        }

        if(arr[left] == 1 && arr[right] == 0 && left <= right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
    // sort(arr,arr+size);
}
int main(){
    int arr[] = {0,1,0,1,0,1};
    printArray(arr,6);
    sort01(arr,6);
    printArray(arr,6);
    return 0;
}