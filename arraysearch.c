#include<stdio.h>
void main(){
	int b,sum=0,c,f=0;
	printf("Enter length of array : " );
	scanf("%d",&b);
	int a[b];
	for (int  i =0; i<b; i++){
		printf("Enter %dth element of array : " , i+1);
		scanf("%d",(a+i));   // or scanf("%d"  , a[i]);
		}
	printf("Enter the element to be searched in the array : " );
	scanf("%d",&c);
		for (int  i =0; i<b; i++){
			if (a[i] == c ){
				printf  ( "Element %d  is found at index %d ." , c , i );
				f=1;
				}
			}
		if(f==0)
			printf("Element not found !! " ); 

}
