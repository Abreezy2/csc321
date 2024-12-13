//Adonay Yonnas

import java.util.Scanner;

public class ayonnas3
{
	public static void main(String[] args)
	{
		int x =0;
		double y = 0.0;

		System.out.println("Enter a number from 1-5 inclusive: ");
		Scanner number = new Scanner(System.in);
		x = number.nextInt();

		if(x > 6)
		{
			System.out.println("you input the wrong number");
		}
		else
		{
			System.out.printLn("you input the correct number");
		}

		while(x < 1)
		{
			System.out.println("you input a number less than 1, try again: ");
			x = number.nextInt();

		}

		switch (x)
		{
			case 1:
				System.out.println("You won a puppy!");
				break;
			case 2:
				System.out.println("you won a dollar!");
			case 3,4,5:
				System.out.println("You won something else");
				break;
			default:
				System.out.println("Wrong number");
				break;
		}
		for(int i = 0;i<x;i++)
		{
			System.out.println("This will print your number of times");
		}
	}
