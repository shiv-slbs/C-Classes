#include<stdio.h>
void main(){
int m ;
printf("Enter number of rows : ");
scanf("%d",&m);
for(int i =m; i>0;i--){
	for (int j=1; j<=m-i;j++){
		printf(" ");
		}
	for (int k =1 ; k<=i; k++){
		printf("%d",k);
		}
	for (int n =i-1 ; n>0;n--){
		printf("%d",n);
		}
	printf("\n");
	}
}
