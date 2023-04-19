#include <stdio.h>
//a program that calculates the factorial of a given numbe


// define a function that calls the factorial
int long long factorial(int a);


int main(void) 
{
	
	//variable to store the value given from user
	int b;

	//print out prompt to user
	printf("Factorial Calculator\nPlease Enter a number: \n");
	

	// we want to store user input
	scanf("%d",&b);

	//print out factorial to user
	printf("The factorial of %d is %lld",b,factorial(b));
	
	return 0;

}


int long long factorial(int a)
{
// if it's 1 or 0 give back 1
	if ( a <= 1 )
	{
	   return 1;
	}
	else
	{
	return a * factorial(a-1);
	}

//else run factorial 
}	

