#include <stdio.h>

int main()
{
    char buffer[100];
    char *ptr;
    char *str = "how";
    int istr = 'how';
    printf("sizeof(buffer) = %d\n", sizeof(buffer)); // 100
    printf("sizeof(ptr) = %d\n", sizeof(ptr)); // 4 bytes
    printf("sizeof(*ptr) = %d\n", sizeof(*ptr)); // the size of what it points to is one location - 1 byte
    printf("sizeof(str) = %d\n", sizeof(str)); // 8
    printf("sizeof(istr) = %d\n", sizeof(istr)); // 4 b/c ints are 4 bytes long

    // str functions - all assume the strings are null terminated
    // and that the buffers are large enough to hold the string
    // that is a very dangerous move

    // strcpy(dst, src) - copy -> it's safer to take len as an input
    // memcpy doesn't look for a null terminator

    // strlen

    // strcat(a, b, len) -> append b to a
    // same as snprintf
        // snprintf(a, len, "%s%s", a, b)

    // strcmp(a, b)
    //  -1 if a < b
    //  0 if a == b
    //  1 if a > b
    // memcmp(a, b, len)

}