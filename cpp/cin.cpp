#include <iostream>
using namespace std;
int main()
{
    string yourname;
    cout << "What's your name? ";
    // cin << yourname; // doesn't work
    // cin considers spaces to be breaks and terminates
    // getline is the new standard!! cin is passed as an input
    // can still use either, but don't mix and match
    getline(cin, yourname);
    cout << "Hello " << yourname << ".\n";

    return 0;
}