#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the year-");
scanf("%d",&a);
printf("Enter the month number-");
scanf("%d",&b);
if(b==1||b==3||b==5||b==7||b==8|b==10||b==12)
 printf("%d",31);
else if(b==4||b==6||b==9||b==11)
 printf("%d",30);
else if(b==2 && (a%4==0&& (a%100!=0 || a%400==0))) 
 printf("%d",29);
else if(b==2 && a%100==0)
 printf("%d",28);
else
 printf("INPUT IS INVALID");
return(0); 
}
