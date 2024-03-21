#include<stdio.h>
void main(){
int day;
printf("Enter a number bw 0 and  8 : ");
scanf("%d",&day);
switch (day){
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("wednesday");
		break;
	case 4:
		printf("Thuirsday");		
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	case 7:
		printf("Sunday");
		break;
	default:
	printf("Enter number bw 0 and 8!");
	}}
