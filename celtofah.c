#include<stdio.h>
void main(){
int a;
printf("1. Celcius to Fahrenheit. \n Fahrenheit ot Celcius. \ Enter a number according to your choice : ");
scanf("%d",&a); 
(a==1)?
	celtofah():
	(a==2)?
		fahtocel():
		printf("Enter valid number.");
}
void celtofah(){
float c;
printf("Enter values in celcius : ");
scanf("%f",&c);
print("Valus in fahrenheit : %f",(c-32)*5/9);
}
void fahtocel(){
float c;
printf("Enter values in Fahrenheit : ");
scanf("%f",&c);
print("Valus in celcius : %f",(c-32)*5/9);
}
