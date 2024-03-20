#include<stdio.h>        
void main()    
{             
    int n;
    printf("Size of array: ");
    scanf("%d",&n);    
    int arr[n];
    printf("Enter the elements ");
    for(int i=0;i<n;i++)   
    scanf("%d",&arr[a]);    
    int k;
    printf("Enter the index from where you want your array to rotate ");
    scanf("%d",&k);        
     
    for(int i= 0; i < n; i++) { 
         int a, t;
          t= arr[n-1]; 
         for(a = n-1; a > 0; a--)
            {    
                    arr[a] = arr[a-1];    
             }    
            arr[0] = t;    
    }            
    printf("\n");            
    
    for(int i= 0; i< n; i++){    
        printf("%d ", arr[a]);    
    }    
    return 0;    
}
