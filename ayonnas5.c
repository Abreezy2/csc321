//Adonay Yonnas

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
	int x = 0, i = 0;
	float y =1;
	double z =4.5;
	int ar[10] = {0};
	//4 more types
	
	printf(" Address of x is %p and the value is %d  \n",&x,x);

	if(1)
	{
		int y = 0;
	}
//	printf(" y is %d \n" ,y);

	printf(" ar[0] = %d \n" ,ar[0]);

	for(i = 0; i < 10; i++)
		
	{
		printf(" ar[%d] = %d and address is %p \n",i,ar[i],&ar[i]);
	}

	return EXIT_SUCCESS;

}
