#include<stdio.h>
#include<math.h>
void main(){
int a,b,c;
printf("Enter 3 sides of triangle with sapce bw them : ");
scanf("%d %d %d",&a,&b,&c); 
(a+b>c)?
	(a=b=c)?  
		printf("Area of Equilateral Triangle is %d :",(pow((((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c),1/2)))):
		(a==b || b==c || a==c )?
			printf("Perimeter of  Isoceles trioangle is : %d",a+b+c):
			printf("Area of   Scalene Triangle is %lf : \n Perimeter of Scelene triangle is : %d",
			((a+b+c)/2)*pow(((((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c)),1/2),a+b+c):
printf("This is not a triangle.");;			
}

pow(((a+b+c)/2)*(((a+b+c)/2)-a)*(((a+b+c)/2)-b)*(((a+b+c)/2)-c)),1/2)



