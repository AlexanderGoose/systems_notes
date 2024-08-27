#include <iostream>
using namespace std;
// takes in total number of things given in command line
// and a list of what they are
// helpful when making sure a file is given
int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        cout << "Usage: " << argv[0] << " takes a number.\n";
        exit(1);
    }
    cout << argv[1] << endl;
}