#include<stdio.h>
#include<string.h>
int main()
{
char s[10]="PROGRAM",s1[10];
int l,i,j;

strcpy(s1,s);
l=strlen(s);
for(i=0;i<l;i++)
{
for(j=0;j<l;j++)
{
if(i==j)
  printf("%c",s[i]);
else if(i+j==l-1)
  printf("%c",s1[i]);
if(j==l-1)
  printf("\n");
else
  printf(" ");
}
}
return 0;
}
