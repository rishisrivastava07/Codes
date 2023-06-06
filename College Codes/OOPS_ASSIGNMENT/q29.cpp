#include<iostream>
using namespace std;

class Book{
    const string isbn;
    string title;
    int no_of_authors;
    float price;
public:
    Book(string bid, string title, int no_of_authors,float price):isbn(bid){
        bid = isbn;
        this->title = title;
        this->no_of_authors = no_of_authors;
        this->price = price;
    }
};
class BookStore{

public:

};
int main(){

    return 0;
}