#include<stdio.h>
void main(){
int m,rem,nm=0;
printf("Enter a number : ");
scanf("%d",&m);

while (m>0){
rem = m%10;
m=m/10;
nm = nm+rem;
}

printf("%d is sum.",nm);
}
