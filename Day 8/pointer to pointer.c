#include <stdio.h>

int main() {
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;

    printf("*p1 = %d\n", *p1);       // Value of a
    printf("&p2 = %p\n", (void *)&p2); // Address of p2
    printf("**p3 = %d\n", **p3);     // Value of *p1 (which is a)
    printf("*p2 = %p\n", (void *)*p2); // Value of p1 (i.e., address of a)
    printf("*p3 = %p\n", (void *)*p3); // Value of p2 (i.e., address of p1)

    return 0;
}
