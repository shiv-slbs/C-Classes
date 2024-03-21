#include<stdio.h>
void main(){
int m,rem,nm=0,temp;
printf("Enter a number : ");
scanf("%d",&m);
temp=m;
while (m>0){
rem = m%10;
m=m/10;
nm = nm*10+rem;
}
printf("%d",nm);
if (nm==temp){
printf("It's a palindrum number.");
}
else{
printf("It's not a palindrum number.");}
}
