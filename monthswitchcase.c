#include<stdio.h>
void main(){
int mon;
printf("Enter a number bw 0 and  13 : ");
scanf("%d",&mon);
switch (mon){
	case 1:
		printf("January");
		break;
	case 2:
		printf("February");
		break;
	case 3:
		printf("March");
		break;
	case 4:
		printf("April");		
		break;
	case 5:
		printf("May");
		break;
	case 6:
		printf("June");
		break;
	case 7:
		printf("July");
		break;
	case 8:
		printf("August");
		break;
	case 9:
		printf("September");
		break;
	case 10:
		printf("October");
		break;
	case 11:
		printf("NOvember");		
		break;
	case 12:
		printf("December");
		break;
	default:
	printf("Enter number bw 0 and 13!");
	}}
