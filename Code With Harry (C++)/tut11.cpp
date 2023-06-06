#include<iostream>
using namespace std;

int main()
{
    // for(int i=0 ; i < 20 ; i++){
    //     if(i==3){
    //         break; // breaks this iteration completely.
    //     }
    //     cout<<i<<endl;
    // }
    for(int i=0 ; i < 20 ; i++){
        if(i==3){
            continue; // skip this iteration and goes to next one
        }
        cout<<i<<endl;
    }
    return 0;
}