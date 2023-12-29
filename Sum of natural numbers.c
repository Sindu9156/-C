#include<stdio.h>
int sum(int n){
if(n==1)
    return 1;
else
    return n+sum(n-1);
} 
void main(){
int n;
printf("enter the value") ;
scanf("%d", &n);
printf("\n the sum is %d",sum(n));
} 
