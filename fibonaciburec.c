# include <stdio.h>
int fib(int);
void main(){
	int n ;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Value is %d ",fib(n) );
}

int fib (int n){
	int i , f1=0,f2=1,f;
	if (i==0 || i==1)
		return i;
		else {
			for (i==1;i<n-2;i++){
			f=f1 +f2 ;
			f2 = f ;
			}
		}
	return f;
}

