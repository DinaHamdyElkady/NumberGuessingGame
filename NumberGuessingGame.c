#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int guessing, NumberToGuess, attempts = 0;
	srand(time(0));
	NumberToGuess = rand() % 100 + 1; // To generate number between 1 to 100
	
	printf("Enter the number you guessed: ");
	scanf("%i", &guessing);
	
	do
	{
		if (guessing > NumberToGuess)
		{
			printf("That's a higher number!!\n");
		}
		else if (guessing < NumberToGuess)
		{
			printf("That's a lower number!!\n");
		}
	
		printf("Try again: ");
	    scanf("%i", &guessing);
		
		if (guessing == NumberToGuess)
	    {
		    printf("Congrats!! You guessed the number right.\n");
			printf("The number was = %d ", NumberToGuess);
	    }
		
	} while (guessing != NumberToGuess);
		

    return 0;
}