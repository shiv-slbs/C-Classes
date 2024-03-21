#include<stdio.h>
#include <stdlib.h>
void main(){
	int i , n , changer;
	printf("Enter the mnumber of elements in array : ");
	scanf("%d",&n);
	int arr[n];
	for (int i =0 ; i<n ; i++){
		scanf("%d",&arr[i]);
		}
	for (int i = 0 ; i<n-1; i++){
		for (int t=0; t < n-i-1;t++){
			if (arr[t] > arr[t+1]){
				changer = arr[t];
				arr[t] = arr [t+1];
				arr[t+1] = changer;
			}
		}
	}
		for (int i =0 ; i<n ; i++){
		printf("%d , ",arr[i]);
		}
	if( n%2==0){
		printf("The median of data is : %d.",( (arr[n/2]+arr[(n/2)+1]) /2) ); }
	else { 
		printf("The median of data is : %d.", arr[(n)/2]); }
}
