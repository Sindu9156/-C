#include<stdio.h>
void main()
{
 int i, space, r, k=0;
 printf("Enter number of rows: ");
 scanf("%d",&r);
 for(i=1; i<=r; ++i, k=0)
 {
 for(space=1; space<=r-i; ++space)
 {
 printf(" ");
 }
 while(k != 2*i-1)
 {
 printf("* ");
 ++k;
 }
 printf("\n");
 }
 

}
