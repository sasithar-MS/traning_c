#include <stdio.h>

int main() {
    int n, count = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
        while(n/=10) {
            count++;
        }

    printf("Number of digits: %d", count);
    return 0;
}
