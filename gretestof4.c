#include<stdio.h>
void main(){
int a,b,c,d;
printf("Enter 4 values with sapce bw them : ");
scanf("%d %d %d %d",&a,&b,&c,&d); 
(a>b)?
	(a>c)?
		(a>d)?
			printf("The greater number is: %d",a):
			printf("The greater number is: %d",d):
		(c>d)?
			printf("The greater number is: %d",c):
			printf("The greater number is: %d",d):	
	(b>c)?
		(b>d)?
			printf("The greater number is: %d",b):
			printf("The greater number is: %d",d):
		(c>d)?
			printf("The greater number is: %d",c):
			printf("The greater number is: %d",d);
}
