#include<stdio.h>
int main()
{
 int n;
 printf("Enter the units of charge:");
 scanf("%d",&n);
 if(n<100)
  printf("Bill is %d",n*100);
 else if(n>100 && n<400)
  printf("Bill is %d",n*400);
 else if(n>400)
  printf("Bill is %d",n*500);
 return(0);
}
