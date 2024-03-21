#include<stdio.h>
void main(){
int u, bill = 0;
printf("Enter the Units of energy used : ");
scanf("%d",&u);
if (u>150){
	bill = (u-150)*10;
	u= 150;}
if(u>100){
	bill = bill + (u-100)*5;
	u = 100;}
if(u>50){
	bill = bill + (u-50)*3;
	u = 50;}
if(u>0){
	bill = bill + u*2;}
printf("Total bill : %d",bill);}
