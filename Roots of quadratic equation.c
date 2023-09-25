#include<stdio.h>
#include<math.h>
void main(){
double a,c,b,r1,r2;
printf("enter the a,b,c values");
scanf("%lf %lf %lf",&a,&b,&c);
dis=b*b-(4*a*c)
if(dis>0){
printf("\nthe roots are real and different");
r1=-(b+sqrt(dis))/(2*a);
r2=-(b-sqrt(dis))/(2*a);
printf("\n the roots are %lf %lf",r1,r2);

}
else if(dis==0){
printf("\nthe roots are real and equal");
r1=-(b/(2*a));

printf("\n the roots are %lf %lf",r1,r1);

}
else if(dis<0){
printf("\nthe roots are complex and different");
real=-(b/(2*a));
img=sqrt(-dis)/(2*a);
printf("\n the roots are %lf + %lf,%lf -%f",real,img,real,img) ;
}} 
