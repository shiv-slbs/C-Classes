#include<stdio.h>
void main(){
int m ;
printf("Enter a number : ");
scanf("%d",&m);
for (int i =1 ; i<=m ; i++){
	for (int j=1; j<=i;j++){
		printf(" * ");
		}
	printf("\n");	
	}
}

