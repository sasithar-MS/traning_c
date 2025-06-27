#include <stdio.h>

// Function using call by value
void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside swap function: x = %d, y = %d\n", x, y);
}

int main() {
    int a = 5, b = 10;
    printf("Before calling swap: a = %d, b = %d\n", a, b);
    
    swap(a, b);  // Call by value

    printf("After calling swap: a = %d, b = %d\n", a, b);
    return 0;
}
