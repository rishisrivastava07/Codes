#include<iostream>
using namespace std;

class Table{
    int** arr;
    int row, col;

public:
    Table(int r, int c){
        arr = new int*[r];

        for(int i = 0;i < c;i++) 
            arr[i] = new int[c];

        row = r;
        col = c;
    }
    int* operator[](int index){
        return arr[index];
    }
    friend  ostream& operator << (ostream&, Table&);  
    friend  istream& operator >> (istream&, Table&);  

};

ostream& operator << (ostream& out,  Table& table){  
    for(int i = 0;i < table.row;i++) {
        for(int j = 0;j < table.col;j++)
            out << table[i][j] << " ";
        out << endl;
    }
    return out;
}

istream& operator >> (istream& in, Table& table){  
    for(int i = 0;i < table.row;i++)
        for(int j = 0;j < table.col;j++)
            in >> table[i][j];
    return in;
}

int main(){
    Table t(4, 5), t1(4, 5);
    cin >> t;
    t[0][0] = 5;
    int x = t[2][3];
    t1 = t;
    cout << t << "\n" << t1;
}