#include<stdio.h>
#include<math.h>
void main(){
int  a,b,c ;
double d,x,y ,r;
printf("Enter coeffiecient of X^2 :  ");
scanf("%d",&a);
printf("Enter coeffiecient of X :  ");
scanf("%d",&b);
printf("Enter constant term :  ");
scanf("%d",&c);

d = b*b - 4*a*c;

if (d>0){
	x = (-b + sqrt(d) )/(2*a);
	y = (-b - sqrt(d) )/(2*a);
	printf("roots are : %f,%f",x,y);
	}else if  (d==0){
	x = (-b)/(2*a);
	printf("root is : %f",x);
	}else{
	unsigned d = b*b - 4*a*c , i;
	r= -b/(2*a);
	i = sqrt(d)/(2*a);
	printf("roots are : %f+i%u & %f-i%u",r,i,r,i);
	}
	

	





}
