#include<stdio.h>
void main(){
int a=1,b=2,u;
printf("Enter upper limit for fibonaci : ");
scanf("%d",&u);

printf("%d , %d , ",a,b);
for  (int i = 1 ; i<u ; i++){
	printf ( "%d , ",a+b);
	int c= a;
	a=b; b=c+b;
	}}
	

