#include<stdio.h>
void main(){
int a,b,c;
printf("Enter 2 values with sapce bw them : ");
scanf("%d %d",&a,&b);
c=b;
b=a;
a=c;
printf("Values are : %d %d",a,b);}


