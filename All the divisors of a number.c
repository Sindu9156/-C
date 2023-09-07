#include <stdio.h>

void main() {
int n,i;
printf("enter the value");
scanf("%d",&n);
printf("the divisors of %d  is",n);
for(i=1;i<n;i++){
if(n%i==0)
   printf("\n%d ",i);
    
}


}
