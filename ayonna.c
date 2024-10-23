//Adonay Yonnas
//csc321
//10/3/24
	
#include <stdio.h>

int main() {
	//Define the number
	int target number =8;
	int userGuess;
	char prize[] = "a brand new car!"
	char losingMessage[] = "Sorry, that's incorrect. Maybe next time!";

	printf("Guess the number between 1 and 10: ")
	scanf("%d", &userGuess);

	if(userGuess == targetNumber)  {
		printf("Congratulations! You Guess right! you have won %s\n", prize);
	} else {
		printf("%s\n", losingmessage);
	}
	return 0;}
