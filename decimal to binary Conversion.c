#include <stdio.h>

void main() {
 int n,i,r,j,a[20];
 printf("enter the decimal value");
 scanf("%d",&n);
 i=0;
 while(n>0){
   r=n%2;
   a[i]=r;
   n=n/2;
   i++;
 }
 printf("the binary value is");
 for(j=i-1;j>=0;j--)
     printf("%d",a[j]);
    
}
