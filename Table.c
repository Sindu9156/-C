#include<stdio.h>
void main(){
int a,b;
printf("enter the two values");
scanf("%d%d",&a, &b);
for(i=1;i<=b;i++)
    printf("\n %d * %d = %d",a,i, a*i);
}
