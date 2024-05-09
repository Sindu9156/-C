include<stdio.h> 
void main() 
{ 
     int n;
    printf("Size of array: ");
    scanf("%d",&n);    
    int arr[n];
    printf("Enter the elements ");
    for(int a=0;a<n;a++)   
    scanf("%d",&arr[a]);    
    int visited[n];

    for(int i=0; i<n; i++){

       if(visited[i]==0){
          int count = 1;
          for(int j=i+1; j<n; j++){
             if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
             }
          }
         if(count==1)
          printf("%d "arr[i]);
       }}
   
  
}
