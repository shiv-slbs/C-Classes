#include<stdio.h>
void main(){
int a,b,c;
printf("Enter 3 values with sapce bw them : ");
scanf("%d %d %d",&a,&b,&c); 
(a>b)?
	(a>c)?
		printf("The greater number is: %d",a):
		printf("The greater number is: %d",c):
	(b>c)?
		printf("The greater number is: %d",b):
		printf("The greater number is: %d",c); ;
}
