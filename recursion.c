# include <stdio.h>
int nsum (int n){
	if (n==0)
		return 0;
	int res =n+nsum (n-1);
	 return res;
}
void main(){
	int n = 5;
	int sum =nsum(n);
	printf("Sum of first %d number is %d .\n",n,sum);
}

