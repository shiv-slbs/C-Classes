#include<stdio.h>
void main(){
int x,y=1,n;
printf("Enter value of X : ");
scanf("%d",&x);
printf("Enter value of n : ");
scanf("%d",&n);

for (int i =1; i<=n ; i++){
	y=y*x;
}
printf("value for  y = %d ^%d is : %d.",x,n,y);
}
