#include <iostream>
using namespace std;
int main()
{
    // c uses an array of strings -> a character array
    // tho in c++ they have strings (a class, no classes in c)
    // always need an extra space for the null character
    char myword[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char myword2[] = "Hello";

    // assigning value ot hcar sequences after initilaization
    // myword[0] = 'B';
    // myword[1] = 'y';
    // myword[2] = 'e';
    // myword[3] = '\0';

    // string console input and output
    char question[] = "What is your name? ";
    char answer[50];
    cout << question;
    cin >> answer;
    cout << "Hello, " << answer << "\n";
    cout << myword;
    return 0;
}