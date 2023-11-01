#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	printf("Enter the date:-");
	scanf("%d%d%d",&a,&b,&c);
	if(a<=29 && (b!=2))
	{
		d=a+1;
		printf("Tom date is %d\\%d\\%d",d,b,c);
	}
	else if ((a==30 )&& (b==1||b==3||b==5||b==7||b==8||b==10||b==12))
	{
		f=a+1;
		printf("Tom date is %d\\%d\\%d",f,b,c);
	}
	 else if ((a==31) && (b==1|| b==3|| b==5||b==7||b==8||b==10))
	{
		g=1;
		h=b+1;
		printf("Tom date is %d\\%d\\%d",g,h,c);
	}
	 else if ((a==30)&&(b==4||b==6||b==9||b==11))
	{
		i=1;
		j=b+1;
		printf("Tom date is %d\\%d\\%d",i,j,c);
	}
	 else if (a==31 && b==12 )
	 {
	 	k=1;
	    l=1;
	    m=c+1;
	    printf("Tom date is %d\\%d\\%d",k,l,m);
	 }
	 else if( (c%4==0 && (c%100!=0 || c%400==0)) && b==2)
	 {
	 	if (a==29  )
	 	{
	 	n=1;
	 	printf("Tom date is %d\\%d\\%d",n,b+1,c);
		 }
	 	else
	 	{
	 	o=a+1;
	 	printf("Tom date is %d\\%d\\%d",o,b,c);
		 }
	 }
	 else
	  {
		if(a<31)
		{p=a;
	  	printf("Tom date is %d\\%d\\%d",p+1,b,c);
		}
		else
		 printf("Invalid Input");
	  }
	return(0);
}
