#include <iostream>
using namespace std;
// Destructor never takes an arguement nor return any value

int count = 0; // Global Variable

class Num
{
public:
    Num()
    {
        count++;
        cout << " This is the time constructor is called for object Number : " << count << endl;
    }
    ~Num()
    {
        cout << " This is the time destructor is called for object number : " << count << endl;
        count--;
    }
};
int main()
{
    cout << " We are inside main function" << endl;
    cout << "Creating first object n1" << endl;
    Num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects " << endl;
        Num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to Main Function" << endl;
    return 0;
}