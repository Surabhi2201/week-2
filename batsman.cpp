#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the runs scored by the batsman:-");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
 printf("The maximum runs scored are:-%d",a);
else if(b>c && b>a)
 printf("The maximum runs scored are :-%d",b);
else if (a==b && b==c)
 printf("The maximum runs scored are :-%d",a);
else
 printf("The maximum runs scored are:-%d",c);
return(0);  	
}
