#include<stdio.h>        
void main()    
{             
    int n;
    printf("Size of array: ");
    scanf("%d",&n);    
    int arr[n];
    printf("Enter the elements ");
    for(int a=0;a<n;a++)   
    scanf("%d",&arr[a]);    
    int k;
    printf("Enter the index from where you want your array to rotate ");
    scanf("%d",&k);        
    printf("Array: \n");    
    for (int a = 0; a < n; a++) {     
        printf("%d ", arr[a]);     
    }             
    for(int a = 0; a < k; a++) {
 int b, temporary; temporary = arr[size-1]; 
for(b = n-1; b > 0; b--)
            {    
                    arr[b] = arr[b-1];    
             }    
            arr[0] = temporary;    
    }            
    printf("\n");            
    printf("New Array: \n");    
    for(int a = 0; a< n; a++){    
        printf("%d ", arr[a]);    
    }    
    
}
