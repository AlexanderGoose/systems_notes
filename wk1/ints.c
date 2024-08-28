#include <stdio.h>

int main()
{
    // trying to force an error to better understand
    unsigned int x = 420;
    unsigned int y = x - 500;
    printf("y = %u", y);
    return 0;
}