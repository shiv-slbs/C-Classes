#include<stdio.h>
/*
void main(){
	// defining structure
	struct StructureVariableName {
		char _name [10];
		int id ;
		float salary;
	};
	
	//structure variable declaration 
	struct StructureVariableName person1;
	
	//structure variable declaration and initialization
	
	struct StructureVariableName person2 ={ "ABCD" , 500 , 5100.52 };
	
	person1 = person2;
	
	printf("name : %s , id : %d , salary : %f \n", person2._name , person2.id , person2.salary );
	
	printf("name : %s , id : %d , salary : %f \n ", person1._name, person1.id , person1.salary );
	
	}
	
	*/ 
	//Defining Structure  p
	struct  p{
	int x,y;
	};

void main (){
	//declaring & intializing variable str1 (structure type p)
	struct p str1 = {1,2};
	// pointer declaration and initialization
	struct p* ptr = &str1;
	printf("%d %d ", ptr-> x, ptr-> y);
	}
