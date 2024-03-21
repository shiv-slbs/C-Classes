#include<stdio.h>

int largestnum(int []);

void main(){
	int a[] = {2,5,8,10,21,22,24};
	printf("%d",largestnum(a));
	}
int largestnum(int a[]){
	for (int i =1 ; i<7 ; i++){
		if (a[0] < a[i]){
			a[0] = a[i];
		}
	}
	return a[0];
}
