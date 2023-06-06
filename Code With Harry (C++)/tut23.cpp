#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter the ID of your item : ";
    cin >> itemId[counter];
    cout << "Enter the Price of your item : ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "ID : " << itemId[i] << " Price : " << itemPrice[i] << endl;
    }
}

int main()
{
    int n;
    Shop dukaan;
    dukaan.initCounter();
    // dukaan.setPrice();
    // dukaan.setPrice();
    // dukaan.setPrice();
    // dukaan.setPrice();

    cout << "Enter the numbers of item want to set : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        dukaan.setPrice();
    }

    dukaan.displayPrice();
    return 0;
}