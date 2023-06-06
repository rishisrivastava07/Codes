// Create two calculator
// 01. Simple Calculator - Takes inputs of 2 numbers using a utlilty functions and performs +,-,*,/ and displays the results using another function.
// 02. Scientific Calculator - Takes inputs of 2 numbers using utility function and performs any four scientific operation of your choice and displays the results using another function.
// 03. Hybrid Calculator - Derived from both

#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalc
{
protected:
    float a, b;
    void getDataSimple()
    {
        cout << "Enter the first number : ";
        cin >> a;
        cout << "Enter the second number : ";
        cin >> b;
    }

    void display()
    {
        cout << "First Number is : " << a << endl;
        cout << "Second Number is : " << b << endl;
    }

    void operatorSimple()
    {
        int x;
        cout << "Enter the following number for operation to be performed : " << endl;
        cout << " 01. Addition" << endl
             << " 02. Subtraction" << endl
             << " 03. Multiplication" << endl
             << " 04. Division" << endl;
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "You choosed the Additon Operator : " << endl;
            cout << "The sum of two numbers "<<a<<" and "<<b<<" is : " << a + b << endl;
            break;
        case 2:
            cout << "You choosed the Substraction Operator : " << endl;
            cout << "The substraction of two numbers "<<a<<" and "<<b<<" is : " << a - b << endl;
            break;
        case 3:
            cout << "You choosed the Multiplication Operator : " << endl;
            cout << "The multiplication of two numbers "<<a<<" and "<<b<<" is : " << a * b << endl;
            break;
        case 4:
            cout << "You choosed the Division Operator : " << endl;
            cout << "The division of two numbers "<<a<<" and "<<b<<" is : " << a / b << endl;
            break;
        default:
            cout << "You entered a wrong option !!" << endl;
            break;
        }
    }
};
class ScientificCalc
{
protected:
    int num;
    void getDataSci()
    {
        cout << "Enter the a number : ";
        cin >> num;
    }
    void operatorSci()
    {
        int y;
        cout << "01. Natural log " << endl
             << "02. Common log" << endl
             << "03. Square Root" << endl
             << "04. Absulute Value " << endl;
        cin >> y;

        switch (y)
        {
        case 1:
            cout << "The answer is: " << log(num) << endl;
            break;
        case 2:
            cout << "The answer is: " << log10(num) << endl;
            break;
        case 3:
            cout << "The answer is: " << sqrt(num) << endl;
            break;
        case 4:
            cout << "The answer is: " << abs(num) << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
        }
    }
};

class HybridCalc : public SimpleCalc, public ScientificCalc
{
public:
    int z;
    void cal()
    {
        cout << "Enter your choice : " << endl
             << "01. Simple Calculator " << endl
             << "02. Scientific Calculator " << endl;
        cin >> z;

        switch (z)
        {
        case 1:
            cout << "You choose Simple Calculator : " << endl;
            getDataSimple();
            display();
            operatorSimple();
            break;
        case 2:
            cout << "You choose Scientific Calculator : " << endl;
            getDataSci();
            operatorSci();
            break;
        default:
            cout << "Invalid Input !!! " << endl;
            break;
        }
    }
};

int main()
{
    HybridCalc calc;
    calc.cal();
    // SimpleCalc calc;  ----> This will throw an error dure to protected members in Base Classes
    // calc.getDataSimple();
    // calc.operatorSimple();
    return 0;
}