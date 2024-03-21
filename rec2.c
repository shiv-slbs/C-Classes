#include <stdio.h>
int binarysearch (int);

int main(){
	int arr [ ] = {2,3,5,52,125,425,612,762,862,952};
	int n = 10;
	int result = binarysearch (arr , 0 , n-1 , x);
	if (result  == -1)
		printf("Not found ");
	else 
		printf("found at %d ", result);
	}
 int binarysearch (int arr [] , int l , int r , int x ){
 	if (r>l){
 	int mid  = l+ (r- l )/2 ;
 	if (arr [mid ] = = x )
 		return mid ; 
 	if (arr[mid ] > x )
 		return binarysearch (arr , l , mid -1 , x );
 	return (binarysearch (arr , mid +1 , r, x );
 	}
return -1 ; 
 }
 
 
