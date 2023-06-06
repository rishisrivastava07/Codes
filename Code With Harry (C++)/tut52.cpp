#include <iostream>
using namespace std;

class Shop
{
    int item_id;
    float item_price;

public:
    void setData(int a, float b)
    {
        item_id = a;
        item_price = b;
    }
    void getData(void)
    {
        cout << "Item ID : " << item_id << endl;
        cout << "Item Price : " << item_price << endl;
        cout << " \n " << endl;
    }
};

int main()
{
    int size;
    cout << "Enter the number of inputs items : ";
    cin >> size;
    // int* ptr = &size;
    // int* ptr = new int[size];
    Shop *ptr = new Shop[size];
    Shop *ptr_temp = ptr;

    int id;
    float price;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter ID and Price of 0" << i + 1 << " : ";
        cin >> id >> price;
        ptr->setData(id, price);
        cout << endl;
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout << "Item Number : " << j + 1 << endl;
        // (*ptr).getData();
        ptr_temp->getData();
        ptr_temp++;
    }

    return 0;
}