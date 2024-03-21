#include<stdio.h>
void main(){
int m ,t =0 , s = 0,  sum = 0;
printf("Enter a number : ");
scanf("%d",&m);

for (int i =1 ; i<=m ; i++){
	t = t+1;
	s=s+t;
	 sum = sum+ s;
	 }
	 


printf("%d is sum.",sum);
}
