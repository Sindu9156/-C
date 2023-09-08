#include <stdio.h>
#include<string.h>

void main() {

int n,count=0,i=0,flag,count1=0;
char s[30];
count1=0;
printf("enter the string\n");
fgets(s,30,stdin);

n=strlen(s);
for(i=0;i<n;i++){
if(s[i]!=' ')
    count++;
else{   
    if(count1<count){
       count1=count;
       flag=i-count;
    } 
    count=0;
} 
    
}

printf("\n the maximum length word is ");
for(i=flag;i<count1;i++)
    printf("%c",s[i]);
}
