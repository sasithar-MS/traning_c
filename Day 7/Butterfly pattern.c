// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int n=6,i,j;
  for(i=0;i<n;i++){
      for(j=-n;j<=n;j++){
          if(-(n-i)<j && j<(n-i)){
              printf("  ");
          }
          else{
              printf("* ");
          }
      } printf("\n");
  }
  
  
   for(i=0;i<=n;i++){
      for(j=-n;j<=n;j++){
          if(-i<j && j<i){
              printf("  ");
          }
          else{
              printf("* ");
          }
      } printf("\n");
  }

    return 0;
}
