#include<stdio.h>
int factorial(int y);


int main ()
{
	int a= 5;
	printf("THe value of factorial %d is %d",a,factorial(a) );
return 0;
}
int factorial(int y)
{
	printf("Calling factorial(%d)\n",y);
	if   (y==1||y==0) 
	{
		 return 1;}
	else {
		return y*factorial(y-1);
	}
}
