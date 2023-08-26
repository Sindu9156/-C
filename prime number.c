#include <stdio.h>

void main() {
    // Write C code here.
    int n,flag=0,i,p;
    printf("enter the value ");
    scanf("%d",&n);
    float m=sqrt(n);
    p=(int)m;
    for(i=2;i<=p;i++){
        if(n%i==0){
           printf("%d is not  a prime number", n);
           flag=1;
        } 
    }
    if(flag!=1)
       printf("%d is a prime number",n);

    
}
