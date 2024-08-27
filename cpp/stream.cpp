#include <iostream>
#include <sstream>
using namespace std;
int main() {
    float price=0;
    int quantitiy=0;
    string tempstr;
    cout << "Enter price: ";
    getline(cin, tempstr);
    // allows a string to be treated as a stream,
    // and thus allowign extraction or insertion operations
    // useful to convert strings to numerical values or vise versa
    // 2 >> price stores 2 in the variable name 'price'
    stringstream(tempstr) >> price;
    cout << price * 2 << endl;

    return 0;
}