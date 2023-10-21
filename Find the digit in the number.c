#include<stdio.h>

int digit(int n,count)
{
int r;
r=n%10;
if(n>0)
{
    count++;
    return digit(n/10,count);
}
printf("%d",count);
    
}
void main(){
int n,count=0;
printf("\n Enter the number");
scanf("%d",&n);
digit(n,count);

}

    
