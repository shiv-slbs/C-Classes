#include<stdio.h>
void main(){
	int r,c;
	printf("Enter the number of Rows : ");
	scanf("%d",&r);
	printf("Enter the number of Coloumns : ");
	scanf("%d",&c);
	printf("\n");
	int mat1[r][c], mat2[r][c] , mat3[r][c]; 	
	printf("Enter the elements for 1st matrix  \n");
	for (int i =0 ; i<r ; i++){
		for (int j =0 ; j<c ;j++){
			printf("Enter the i%d%d th element : ",i,j);
			scanf("%d",&mat1[i][j]);
			}
		}
	printf("\n");
	printf("Enter the elements of 2nd matrix : \n");
	for (int i =0 ; i<r ; i++){
		for (int j =0 ; j<c ;j++){
			printf("Enter the i%d%d th element : ",i,j);
			scanf("%d",&mat2[i][j]);
			}
		}
		printf("\n");
	for (int i =0 ; i<r ; i++){
		for (int j =0 ; j<c ;j++){
			mat3[i][j] = mat1[i][j] + mat2[i][j]; 
			}
		}
	for (int i =0 ; i<r ; i++){
		for (int j =0 ; j<c ;j++){
			printf(" %d ",mat3[i][j]);
			}
		printf("\n");
	}
}
