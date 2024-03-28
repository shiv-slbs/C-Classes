#include<stdio.h>
// defining structure
	struct stdnt {
		char name [10];
		int roll, marks[3];
	};
void main(){
	//structure Array variable declaration 
	int a,i;
	printf("Enter Number of Students : ");
	scanf("%d",&a);
	printf("\n");
	struct stdnt student[a];
	for (i = 0;i<a; i++){
		fflush(stdin);
		printf("Enter name of student%d :",i+1);
		scanf("%s" , student[i].name);
		printf("Enter Roll number of student%d :", i+1);
		scanf("%d",&student[i].roll);
		for(int j =0 ; j<3 ; j++){
			printf("Enter Marks of sub%d of student%d :",j+1,i+1);
			scanf("%d",&student[i].marks[j]);
			}
		printf("\n");
		}
		/*
		printf("Printing Datas");
		
		for (i = 0 ; i<a ; i++){
			printf("Name of student%d : %s \n",i+1, student[i].name);
			printf("Roll number of student%d : %d \n", i+1,student[i].roll);
			for(int j =0 ; j<3 ; j++){
				printf("Marks of sub%d of student%d : %d \n",j+1,i+1, student[i].marks[j] );
				}
			}
	*/
		int temp = 0,index=0,totalmarks =0 ; 
		for (i=0 ; i<a;i++){
			for(int j =0 ; j<3 ; j++){
				totalmarks += student[i].marks[j];
				}
		
			if (totalmarks >temp ){
				temp = totalmarks;
				index = i ;
				}
			}
			printf("Printing Datas of student having most number : \n");
			printf("Name of student : %s \n", student[index].name);
			printf("Roll number of student : %d \n",student[index].roll);
			for(int j =0 ; j<3 ; j++){
				printf("Marks of sub%d of student : %d \n",j+1, student[index].marks[j] );
				}
	}	
