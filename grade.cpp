#include <stdio.h>
int main()
{
int a,b,c,d,e,percentage,grade;
printf("Enter the marks secured in Maths:-");
scanf("%d",&a);
printf("Enter the marks secured in Physics:-");
scanf("%d",&b);
printf("Enter the marks secured in Chemistry:-");
scanf("%d",&c);
printf("Enter the marks secured in Computer:-");
scanf("%d",&d);
printf("Enter the marks secured in Biology:-");
scanf("%d",&e);	
percentage=(a+b+c+d+e)/5;
printf("Percentage is %d",percentage);
if(percentage>=90)
 printf("Grade A");
else if(percentage>=80)
 printf("Grade B");
else if( percentage>=70)
 printf("Grade C");
else if(percentage>=60)
 printf("Grade D");
else if (percentage>=40)
 printf("Grade E");
else if (percentage<40)
 printf("Grade F");
else
 printf("Invalid INPUT");
return(0);  
     
}

