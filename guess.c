#include <stdio.h>
#include <stdlib.h>

//function get keep getting users input
int userInput(void);


//program where user has the guess a random number from 1-10
int main(void)
{
	//call the first function and store it into a variable to check it
	int userNum;
	userNum = userInput();
	// generates random numbers
	long randomNum = (rand() % 10);
	// use an if statement to check the condition
		
	if (userNum == randomNum)
	{
		printf("YAY YOU GUESSED THE RIGHT NUMBER");
		
	} 
	else 
	{
		printf("Better luck next time");
		userInput();
	}	
			
	
	return 0;
}
int userInput(void)
{
	//to store the number user gives
	int userNum;
	// print promt put from user
	printf("Please guess a number from 1-10\n");
	//store the value
	scanf("%d",&userNum);
	// return users value
	return userNum;
}
	
	



