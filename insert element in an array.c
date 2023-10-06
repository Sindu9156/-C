#include <stdio.h>

int main() {
int arr[10],n,i,e,pos;
printf("enter the number of values");
scanf("%d",&n);
printf("\nenter the values");
for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
printf("\nenter the element and position  to insert");
scanf("%d%d",&e,&pos);

if(arr[pos]!=0 &&  n+1!=10){
for(i=n+1;i>=pos;i--)
     arr[i]=arr[i-1];

arr[pos]=e;
printf("\nafter inserting the elements are");
for(i=0;i<n+1;i++)
    printf("%d",arr[i]);
}
else
    printf("\narray index out of bounds"); 

    return 0;
}
