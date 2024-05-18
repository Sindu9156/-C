include<stdio.h> 
void main() 
{ 
     int i,j, n;
    printf("Size of array: ");
    scanf("%d",&n);    
    int a[n];
    printf("Enter the elements ");
    for(i=0;i<n;i++) 
    scanf("%d",&arr[i]);    
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
} 
