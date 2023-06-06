#include<iostream>
#include<climits>
using namespace std;

int main(){

    int sum_of_an_array = 0;

    int size;
    cin >> size;

    int nums[100];

    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }

    for(int i= 0; i < size; i++){
        sum_of_an_array += nums[i];
    }

    cout << "Sum of an array = " << sum_of_an_array << endl;
}