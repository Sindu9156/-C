#include<stdio.h>
void main(){
int a,i;
printf("enter the value");
scanf("%d", &a);
printf("\n multiples of %d are",a);
for(i=1;i<=10;i++)
    printf("\n%d", a*i);
}
