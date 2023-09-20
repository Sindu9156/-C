#include <stdio.h>

void main() {

    
int n,i,count=0,sum=0;
printf("enter the value"); 
scanf("%d", &n);
for(i=1;i<=n;i++){
sum+=i;
count+=i*i;
}
sum=sum*sum;
printf("the difference is %d",sum-count);
    
}
