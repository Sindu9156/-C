#include <stdio.h>

void main() {
int a,b,n,r,count=0,i,r1;
printf("enter the value");
scanf("%d",&a);
b=a;
n=0;
while(a>0){
     count++;
     a=a/10;
} 
a=b;

while(a>0){
r=a%10;
r1=r;
for(i=1;i<count;i++){
    r1=r1*r;
} 

n=n+r1;

a=a/10;
}
if(n==b)
   printf("%d is a armstrong number",b);
else
   printf("%d is  not a armstrong number",b);

}
