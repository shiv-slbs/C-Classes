#include<stdio.h>
void main(){
	int a[10];
	for (int  i =0; i<10 ; i++){
		printf("Enter %dth element of array : " , i+1);
		scanf("%d",(a+i));
		}
	printf("Printing all the elements : ");
	for (int  i =0; i<10 ; i++){
		printf("%d, ",*(a+i));
		}
}
