#include<stdio.h>
void main(){
int u, bill = 0;
printf("Enter the Units of energy used : ");
scanf("%d",&u);
if (u<=50){
if (u>50){
bill = 50*2;}
bill= u*2;}

else if (u<=100){
if (u=100){
bill = bill + 50*3;}
bill= bill + (u-50)*3;}

else if (u<=150){
if (u=150){
bill = bill + 50*5;}
bill= bill + (u-100)*5;}

else {
bill= bill + (u-150)*10;}

printf("Total bill : %d", bill);


}
