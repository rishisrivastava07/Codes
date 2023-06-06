#include<iostream>
using namespace std;

namespace{
    void disp(int x){
        cout << " disp " << x << endl;
    }
}
namespace ns1{
    int a = 1;
    int b = 2;
}

namespace ns2{
    int a = 10;
    int b = 20;
}

int main(){
    using namespace ns1;
        disp(a);

    using ns2::a;
        disp(a);
    return 0;
}