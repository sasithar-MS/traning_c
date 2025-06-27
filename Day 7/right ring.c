#include <stdio.h>

int main() {
    int n = 5,l; // Number of rows
    for (int i = -n; i <= n; i++) {
        if(i<0){
            l=-i;
        }
        else{
            l=i;
        }
        for (int s = 0; s<l; s++) {
            printf("  ");
        }for (int j = 0; j<(n-l)+1; j++) {
            printf(" *");
        }
        
        printf("\n");
    }
    return 0;
}
