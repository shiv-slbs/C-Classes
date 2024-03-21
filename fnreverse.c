#include<stdio.h>

void reverse(int);
void main(){ 
	int a;
	printf("Enter a number : ");
	scanf("%d" , &a);
	reverse(a);
	}

void reverse ( int k){
	int rem = 0 , rev = 0;
	 while ( k >0 ){
	 	rem = k%10;
	 	rev = rev *10+ rem ;
	 	k = k/10;
	 }
	 printf("Reverse of the number is  : %d " , rev );
	}

	
