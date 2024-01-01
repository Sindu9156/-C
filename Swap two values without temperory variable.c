#include<stdio.h>
void main(){
int a,b;
printf("enter the two values");
scanf("%d%d",&a, &b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after the swap %d, %d",a,b);

} 
