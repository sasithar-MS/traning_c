#include <stdio.h>

int main() {
    int a = 10;        // variable
    int *p = &a;       // pointer to a

    printf("Value of a     = %d\n", a);         // value of a
    printf("Value of p     = %p\n", p); // address stored in p (i.e., address of a)
    printf("Value of *p    = %d\n", *p);        // value at the address pointed to by p (i.e., a)
    printf("Address of p   = %p\n", &p); // address of pointer p

    return 0;
}
