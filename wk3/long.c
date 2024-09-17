#include <stdio.h>

long exchange(long *xp, long y)
{
    long x = *xp;
    *xp = y;
    return x;
}

int main()
{
    long xp = 7;
    long y = 5;
    long val = exchange(&xp, y);
    printf("%ld", val);

    return 0;
}