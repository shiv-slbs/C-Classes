#include<stdio.h>
void main(){
int a,b,c;
printf("Enter 3 values with sapce bw them : ");
scanf("%d %d %d",&a,&b,&c); 
(a>b)?
	(a>c)?
		printf("The %d is greatest.",a):
		printf("The %d is greatest",c):
	(b>c)?
		printf("The  %d is greatest.",b):
		printf("The %d is greatest.",c); ;	
(a>b)?
	(a<c)?
		printf("The %d is in middle.",a):
		printf("The %d is in middle.",c):
	(b<c)?
		printf("The  %d is in middle.",b):
		printf("The %d is in middle.",c); ;			
(a<b)?
	(a<c)?
		printf("The %d is smallest.",a):
		printf("The %d is smallest.",c):
	(b<c)?
		printf("The  %d is smallest.",b):
		printf("The %d is smallest.",c); ;
}
