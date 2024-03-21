#include<stdio.h>
void main(){
int a,b,s,m,diff,div,mod;
printf("Enter 2 number \n");
scanf("%d%d",&a,&b);
s=a+b;
m=a*b;
diff=a-b;
div=a/b;
mod=a%b;
printf("The sum of umber is : %d",s,"\n");
printf("The difference of number is : %d",diff,"\n");
printf("The product number is : %d",m,"\n");
printf("The quotient after dividing 1st number by 2nd number is : %d",div,"\n");
printf("The reminder after division of 1st number by 2nd number is : %d",mod,"\n");
}
