#include <stdio.h>

int main() {
int n,i,arr[10];
printf("enter the total value");
scanf("%d",&n);
printf("\n enter the values");
for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 printf("\nthe array values are\n");
for(i=0;i<n;i++)
 printf("\n%d",arr[i]);
 
    return 0;
}
