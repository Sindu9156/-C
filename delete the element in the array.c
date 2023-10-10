#include <stdio.h>

int main() {
int i,arr[10],n,pos=-1,e;
printf("\n enter the total value");
scanf("%d",&n);
printf("\n enter the values");
for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
if(n>=0){
printf("\n enter the value to delete");
scanf("%d",&e);
for(i=0;i<n;i++)
{
    if(arr[i]==e)
        pos=i;
}
if(pos==-1)
  printf("\n the given value not in the array");
else{
for(i=pos;i<n;i++){
    arr[i]=arr[i+1];
}
n--;
printf("\n after deletion the array");
for(i=0;i<n;i++)
   printf("\n %d",arr[i]);
}
}
else
printf("array underflow");
