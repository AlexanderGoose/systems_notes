#include <iostream>
using namespace std;
// creating a function prototype allows us
// to not write out the function until after main
int getSum(int a, int b);
int main() 
{
    int age = 12;
    int sum = getSum(age, 4);
    cout << sum << endl;

    return 0;
}
int getSum(int a, int b)
{
    return a+b;
}