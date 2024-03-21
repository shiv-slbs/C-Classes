#include<stdio.h>
void main(){
int u, bill = 0;
printf("Enter the marks obtained : ");
scanf("%d",&u);

if (u>100){
printf("Enter marks below 100.");
}
else if (u>90){
printf("Grade : O \n");
}
else if  (u>80){
printf("Grade : E\n");
}
else if (u>70){
printf("Grade : A\n");
}
else if (u>60){
printf("Grade : B\n");
}
else if (u>50){
printf("Grade : c\n");
}
else{
printf("FAIL\n");
}
}

