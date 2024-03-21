#include<stdio.h>

void iseven(int);
void main(){ 
	int a;
	printf("Enter a number : ");
	scanf("%d" , &a);
	iseven(a);
	}

void iseven(int k){
	if (k%2 ==0)
	printf("Number is even");
	else 
	printf("Number is Negetive ");
	}
	
