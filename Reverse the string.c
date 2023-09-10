#include <stdio.h>
#include<string.h>
void main() {
    char a[20];
    printf("enter the string ");
    fgets(a,20,stdin);
    printf("the reverse of the string is %s ", strrev(a));
}
