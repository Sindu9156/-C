#include<stdio.h>
void main()
{

int 1, d1, n2, d2, x, y, i, gcd;
printf("Enter the numerator for 1st fraction : ");
scanf("%d",&n1);
printf("Enter the denominator for 1st fraction: ");
scanf("%d",&1);
printf("Enter the numerator for 2nd fraction : ");
scanf("%d",&2);
printf("Enter the denominator for 2nd fraction : ");
scanf("%d",&d2);
x=(n1*d2)+(d1*n2); 
y=d1*d2; 
for(i=1; i<= x && i <= y; ++i)
{
if(x%i==0 && y%i==0)
gcd = i;
} 
printf("(%d / %d) + (%d / %d) = (%d / %d)", n1, d1,n2, d2, x/gcd, y/gcd);


}
