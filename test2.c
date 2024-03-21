#include<stdio.h>

void displayeven(int []);

void main(){
	int a[] = {2,5,8,10,21,22,24};
	displayeven(a );
	}
void displayeven(int a[]){
	for (int i =0 ; i<7 ; i++){
		if (a[i] %2==0){
			printf("%d,",a[i] );
		}
	}
	printf("\n");
}
