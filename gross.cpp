#include <stdio.h>
int main()
{
int b,g,r,e;
printf("The basic salary is: ");
scanf("%d",&b);
printf("The Region is:");
scanf("%d",&r);
if(r==1)
 e=0.24*b;
else if(r==2)
 e=0.27*b;
else if(r==3)
 e=0.14*b;
else 
 e=0.12*b;
g=e+b+0.48*b+0.27*b;
printf("The gross salary of individual is %d",g);
return(0);    
}
