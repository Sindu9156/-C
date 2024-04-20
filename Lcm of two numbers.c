#include <stdio.h>
void main() { 
int a,b,large; 
printf("enter the two values\n");
scanf("%d", &a);
scanf("%d", &b);
if(a>b) 
large=a; 
else 
large=b;
while(1) { 
if((large%a)==0&&(large%b)==0) { 
printf("%d",large); 
break;
 } 
large++; 
} 
 }
