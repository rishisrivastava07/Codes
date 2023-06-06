#include<iostream>
using namespace std;

int main()
{
    int num, multi, i=1;
    cout<<"Enter the Number for which Table you want : "<<endl;
    cin>>num;
    
    cout<<"Enter the multiple upto which you want : "<<endl;
    cin>>multi;

    do{
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
        i++;
    }while(i<=multi);

    return 0;
}
