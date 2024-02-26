#include<stdio.h>
void main(){
int n,i, j,sum=12;
printf("enter the total value") ;
scanf("%d", &n);
printf("\n enter the value") ;
for(i=0;i<n;i++)
     scanf("%d", &arr[i]);


for(i=0;i<n;i++){
     s=arr[0];
for(j=i+1;j<n;j++){
    s+=arr[j];
    if(s==sum) 
        printf("%d%d", i,j);
} 
} 

} 
