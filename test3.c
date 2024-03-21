#include<stdio.h>

void comparestr(char [] , char [] );

void main(){
	char str1[50] = "Lenevo";
	char str2[50] = "Dell";
	comparestr(str1 , str2 );
	}
void comparestr(char str1[] , char str2[] ){
	int t = 0;
	for (int i =0 ; i<50 ; i++){
		if (str1[i] != str2[i])
			t = 1;
		}
	if (t == 0 )
		printf("Both Strings are  equal.");
	else 
		printf("Both Strings are not equal.");
}
