#include<stdio.h>
int main()
{
 int n;
 printf("Enter the year:");
 scanf("%d",&n);
 if((n%4==0)&&(n%400==0 || n%100!=0))
  printf("Leap Year");
 else
  printf("Not Leap Year");
 return(0);
}
