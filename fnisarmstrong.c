#include<stdio.h>
bool isarmstrong (int);
void main(){
	int m,rem,nm=0,temp;
	printf("Enter a number : ");
	scanf("%d",&m);
	if (isarmstrong(m))
		printf("It's an armstrong number ");
	else 	
		printf("It's not an armstrong number ");
bool isarmstrong (int m ){
	temp = m;
	while (m>0){
		rem = m%10;
		m=m/10;
		nm = nm+ rem*rem*rem;
		}
	if (nm==temp)
		return true;
	else 
		return false;	
}
