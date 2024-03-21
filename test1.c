#include<stdio.h>

void checkarmstrong(int );

void main(){
	int m;
	printf("Enter a number : ");
	scanf("%d",&m);
	checkarmstrong(m);
	}
void checkarmstrong(int m){
	int rem,sum=0,temp;
	temp = m;
	while (m>0){
	rem = m%10;
	m=m/10;
	sum = sum+ rem*rem*rem;
	}
	if (sum==temp){
		printf("It's a armstrong number.");
		}else {
		printf("It's not a armstrong  number.");
		}
	}
