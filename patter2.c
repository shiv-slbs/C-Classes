#include<stdio.h>
void main(){
int m ;
printf("Enter number of rows : ");
scanf("%d",&m);
for(int i =1; i<=m;i++){
	for (int j=1; j<=m-i;j++){
		printf("  ");
		}
	for (int k =1 ; k<=i; k++){
		printf("* ");
		}
	printf("\n");
	}
}





