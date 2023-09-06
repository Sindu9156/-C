#include <stdio.h>

void main() {
char a[10],c[10];
int i,j,n;
printf("enter the string");
fgets(a,10,stdin);
strcpy(c,a);
n=strlen(a);
for(i=0;i<n;i++){
if(a[i]==' '){
for(j=i;j<n-1;j++)
    a[j]=a[j+1];

a[n-1]=' ';
n--;
}

  
}
printf("the string %s after space remove %s",c,a);
}
