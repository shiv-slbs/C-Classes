#include<stdio.h>
void main(){
int m ;
printf("Enter  number of rows : ");
scanf("%d",&m);
for (int i =64 ; i<=64+m ; i++){
	for (int a=65; a<=i;a++){
		printf(" %c ",a);
		}
	printf("\n");	
	}
}

