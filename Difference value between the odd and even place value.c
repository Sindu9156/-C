#include <stdio.h>

void main() {
    int a, sum1=0,sum2=0,b;
    b=a;
    printf("enter the value ");
    scanf("%d",&a);
    
    while(a>0){
        sum1+=a%10;
        a/=10;
        sum2+=a%10;
        a/=10;
        
    }
    
    printf("the difference of sum value is %d",abs(sum1-sum2));
}
