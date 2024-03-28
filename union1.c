#include<stdio.h>

union test {
	int x;
	char a;
	float y;
	};
	

	int main(){
		union test myUnion;
		myUnion.x = 15;
		printf("Initial Integer value %d \n",myUnion.x);
		myUnion.y = 3.14159;
		printf("Initial floating point value %f \n",myUnion.y);
		myUnion.a = 'a';
		printf("Initial Character %c \n",myUnion.a);
		printf("Final Integer value %d \n",myUnion.x);
		printf("Final floating point value %f \n",myUnion.y);
		printf("FInal Character %c \n",myUnion.a);
		}
		
