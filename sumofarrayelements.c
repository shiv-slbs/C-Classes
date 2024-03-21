#include<stdio.h>
void main(){
	int b,sum=0;
	printf("Enter length of array : " );
	scanf("%d",&b);
	int a[b];
	for (int  i =0; i<b; i++){
		printf("Enter %dth element of array : " , i+1);
		scanf("%d",(a+i));   // or scanf("%d"  , a[i]);
		}
	printf(" \nPrinting all the elements : \n");
	for (int  i =0; i<b ; i++){
		printf(" %d,",*(a+i));   //printf("%d" , a[i]); 
		sum =  sum+ *(a+i) ;  // or  sum = sum+a[i] ;
		}
	printf("\nsum of all the elements of array : %d \n",sum);
}



//



