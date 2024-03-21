#include<stdio.h>
void main(){
int m;
printf("Enter a number : ");
scanf("%d",&m);
int n=0;
for (int i = 2; i<m;i++)
	{
	if (m%i == 0)
		{
		n=1;
		}
	}
if(n==0){
	printf("It's Prime number.");
	}
if(n!=0){
	printf("It's not a prime number.");
}
}
