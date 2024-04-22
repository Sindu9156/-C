#include <stdio.h>
int main()
{
 int i, j;
 char n, alpha='A';
 printf("Enter the uppercase character you want to print in last row: ");
 scanf("%c",&n);
 for(i=1; i <= (n-'A'+1); ++i)
 {
 for(j=1;j<=i;++j)
 {
 printf("%c", alpha);
 }
 ++alpha;
 printf("\n");
 }
 
}
