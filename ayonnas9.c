//Adonay Yonnas

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{
	int game = 1;
	srand(time(NULL));
	int i = 0,guess =0;

	while(game == 1)
	{

		int rando =10 + (rand() %11);
		
		for(i = 0;i < 5;i++)
		{
			printf("Enter a number between 10 and 20 \n");
			scanf("%d",&guess);


		//compare guess with random number, tell higher/lower
		printf("Guess is %d \n",guess);

	}

	printf("Do you want to play again? 1 for yes, 2 for no \n");
	scanf("%d",&game);

	//print number of times played with counter

}

return EXIT_SUCCESS;
}

