#include <stdio.h>
void main() { 
int a,b,small,i; 
scanf("%d",&a) ;
scanf("%d",&b) ;
if(a>b) 
small=b; 
else
small=a; 
for(i=small;i>=1;i--) { 
if((a%i)==0&&(b%i)==0) { 
printf("%d",i); 
break; 
} 
} 
}
