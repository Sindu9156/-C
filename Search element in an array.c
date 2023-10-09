#include <stdio.h>

int main() {
int i,arr[10],flag=0,n,e;
printf("\n enter the total value");
scanf("%d",&n);
printf("\n enter the values");
for(i=0;i<n;i++)
   scanf("%d",&arr[i]);
printf("\n enter the value to search");
scanf("%d",&e);
for(i=0;i<n;i++){
if(arr[i]==e){
   printf("%d is found in %d position",e,i);
   flag=1;
   break;
}
}
if(flag==0)
  printf("\n the element is not found");
  
  

    return 0;
}

				
