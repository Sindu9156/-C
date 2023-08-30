#include <stdio.h>

void main() {
 int i=0,j,n,k,p;
 printf("enter the value\n");
 scanf("%d",&n);
 p=n;
while(i<n){
     for(k=p-i;k>0;k--){
         printf(" ");
     }
     for(j=0;j<i;j++){
         printf("* ");
         
     }
     printf("\n");
     i++;
     if(i==n){
         i=n-2;
         n--;
     }
     
 }
}
