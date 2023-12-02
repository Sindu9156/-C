#include<stdio.h>
void main(){
int i,n,sum=0;
printf("enter the value") ;
scanf("%d", &n);
for(i=1;i<=n;i++)
      sum+=i;
printf("\n sum of %d number is %d",n,sum);
} 
