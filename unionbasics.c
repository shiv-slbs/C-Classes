#include <stdio.h>
union test1 {
	int x;
	}Test1;
	
union test2{
	int x;
	char y;
	} Test2;
	
union test3{
	int arr[10];
	char y;
	} Test3;
	
void main(){
	printf("%ld \n",sizeof(test1));
	printf("%ld \n",sizeof(test2));
	printf("%ld \n",sizeof(test3));
	}
