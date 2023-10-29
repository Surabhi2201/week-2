#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the sides of triangle a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
 printf("The triangle is equilateral");
else if(a==b|| b==c)
 printf("The triangle is isoceles");
else if(a!=b && b!=c)
 printf("The triangle is scalene");
else 
 printf("INVALID INPUT");
return(0);   	
}
