#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i,num,loc=-1;
clrscr();
printf("\n Enter the number of elements :");
scanf("%d",&n);
printf("\n Enter the numbers :");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n Enter the number to be searched :");
scanf("%d",&num);
for(i=0;i<n;i++)
{
if(num==a[i])
{
loc=i;
break;
}
}
if(loc<n)
printf("%d is found in the position %d",num,loc+1);
else
printf("\n Number does not exist");
getch();
}
