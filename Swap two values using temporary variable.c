#include<stdio.h>
void main(){
int a,b,c;
printf("enter the two values");
scanf("%d%d",&a, &b);
c=a;
 a=b;
b=a;
printf("\n after the swap %d, %d",a,b);

} 
