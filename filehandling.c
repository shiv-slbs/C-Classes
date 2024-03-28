//WAP to craete a file & write some data in it.
//File handling, creating.
#include<stdio.h>
void main(){
	FILE *fp;
	int roll;
	char name[20];
	char gender;
	float marks;
	//opeining to work
	fp = fopen("std.txt","w");
	if (fp == NULL){
		printf("\n can not open the file");
	}
	
printf("Enter One Student details : \nRoll number of student :");
scanf("%d", &roll);
fprintf(fp, "Roll number of student  = %d",roll);
fflush(stdin);

printf("Enter Name of Student : ");
scanf("%s" , name);
fprintf(fp , "\nName of student = %s",name);
fflush(stdin);

printf("Enter Gender (M or F) : ");
scanf(" %c" , &gender);
fprintf(fp , "\nGender = %c",gender );
fflush(stdin);

printf("Enter marks of Student : ");
scanf("%f" ,&marks);
fprintf(fp , "\nMarks = %f", marks);
fflush(stdin);

fclose(fp);
}


		
