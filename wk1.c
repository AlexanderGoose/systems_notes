#include <stdio.h>

typedef unsigned char *pointer;

// show_bytes is used to visualize how data is stored in memory, byte by byte.
void show_bytes(pointer start, size_t len) {
    size_t i;
    for (i=0; i < len; i++)
        printf("%p\t0x%.2x\n", start+i, start[i]);
    printf("\n");

    // %p prints the memory address.
    // 0x%.2x prints the byte at that address in hexadecimal format.
}

int main() {
    int ivalue = 'abcd';
    char *cvalue = "abcd";

    // This prints the value of ivalue in hexadecimal.
    printf("\nivalue is %x\n\n", ivalue);

    // When passed the address of an integer (ivalue), it shows the raw memory representation of that integer.
    show_bytes((pointer) &ivalue, 5);

    // When passed the address of a pointer (cvalue), it shows the memory address stored in that pointer.
    show_bytes((pointer) &cvalue, 5);

    // When passed a pointer to a string, it shows the individual characters of the string in memory.
    show_bytes((pointer) cvalue, 5);
}