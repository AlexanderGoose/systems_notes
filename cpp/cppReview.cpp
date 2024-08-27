#include <iostream>
#include <string>
#include <sstream>

using namespace std;




int main() 
{
    cout << "Hello World!\n" << endl;
    cout << "My name is Alex." << endl;

    // if 
    int age = 12;
    if (age < 12) 
    {
        cout << "kid" << "\n";
    }
    else if (age >= 12 && age < 20) 
    {
        cout << "teenager\n";
    }
    else 
    {
        cout << "adult" << endl;
    }

    // loops - while, for, do...while
    int num = 13;
    double half = num / 2;
    cout << half << endl;
    int counter = 0;
    while (counter <= half)
    {
        half = half / 2;
        counter++;
    }
    cout << "at end: " << half << endl;

    return 0;
}