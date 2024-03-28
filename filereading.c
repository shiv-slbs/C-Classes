//file reading
#include<stdio.h>
#include<stdlib.h>
void main(){
	FILE *fp;
	char filename[15];
	char ch;
	printf("\nEnter the filenameto be opened : ");
	scanf("%s" ,filename);
	fp = fopen(filename,"r");
	if (fp == NULL){
		printf("Can not open file");
		}
	while ((ch = fgetc(fp))!=EOF){
		printf("%c",ch);
		}
	fclose(fp);
	}
	
