#include<bits/stdc++.h>
#include <chrono>
using namespace std;

// void sum(int a, int b, int c){
//     cout << "Sum = " << (a+b+c) << endl;
// }
inline void sum(int a, int b, int c){
    cout << "Sum = " << (a+b+c) << endl;
}
int main(){
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    int a = 1, b = 3, c = 4;
    
    sum(a,b,c);

    auto end = chrono::high_resolution_clock::now();
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end-start).count();

    time_taken *= 1e-9;

    cout << "Time taken by program is : " << fixed << time_taken << setprecision(9);
    cout << " sec" << endl;
    return 0;
}