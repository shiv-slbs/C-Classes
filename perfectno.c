#include<stdio.h>
void main(){
int m,temp;
printf("Enter a number : ");
scanf("%d",&m);
temp = m;
int n=1;
for (int i = 2; i<m;i++){
if (m%i == 0){
		n=n+(m/i);
		}
		}
printf("%d",n);
if (n == temp){
printf("It's a perfect number.");
}
else {
printf ("It's not a perfect number .");
}
}

