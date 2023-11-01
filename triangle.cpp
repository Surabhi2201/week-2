#include <stdio.h>
int main()
{
float a,b,c;
printf("Enter the sides of triangle a,b,c");
scanf("%f%f%f",&a,&b,&c);
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
