#include <stdio.h>

void main() {
    int i,j,n,k;
    printf("enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
          printf(" ");
          
        for(k=0;k<n;k++)
           printf("*");
        
        printf("\n");
    }
}
