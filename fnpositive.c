#include<stdio.h>

void ispositive(int);
void main(){ 
	int a;
	printf("Enter a number : ");
	scanf("%d" , &a);
	ispositive(a);
	}

void ispositive(int k){
	if (k>0 )
	printf("Number is positive ");
	if (k<0)
	printf("Number is Negetive ");
	}
	
