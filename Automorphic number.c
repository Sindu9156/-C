#include<stdio.h>

int automorphic(int num)
{
    int sq=num*num;
    
    while (num > 0)
    {
        if (num%10!=sq%10)
            return 0;
        
        
        num=num/10;
        sq=sq/10;
    }
    return 1;
}

void main()
{
    
    int n;
    scanf("%d",&n);
    
    
    if(automorphic(n))
        printf("Automorphic"); 
    else
        printf("Not Automorphic");
    
}
