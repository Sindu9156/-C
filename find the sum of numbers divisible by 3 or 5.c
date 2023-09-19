
#include <stdio.h>


int main(){
    int t,i=0; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n,c=0; 
      
        scanf("%d",&n);
     for(int i=0;i<n;i++){
          if(i%3==0 | i%5==0)
             c+=i;
       
      }
        printf("%d\n",c);
         
    }
    
    return 0;
}
