// Online C compiler to run C program online
#include <stdio.h>

int main() {
   void swap(int *x,int *y){
       int temp;
       temp=*x;
       *x=*y;
       *y=temp;
   }
   {
       int a,b;
       a=5;
       b=7;
       printf("%d %d\n",a,b);
       swap(&a,&b);
       printf("%d %d\n",a,b);
   }
    return 0;
}
