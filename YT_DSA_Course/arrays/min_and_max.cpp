#include<iostream>
#include<climits>

using namespace std;

int main(){
    
    int min = INT_MAX;
    int max = INT_MIN;

    int size;
    cin >> size;

    int nums[100];
    // nums[size] --> bad practise never assign like this

    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }


    for(int i = 0; i < size; i++){
        if(nums[i] > max){
            max = nums[i];
        }
        if(nums[i] < min){
            min = nums[i];
        }
    }

    cout << "Max = " << max << " Min = " << min << endl;
}