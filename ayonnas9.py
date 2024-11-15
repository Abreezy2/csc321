

import random 

random_number = random.randint(10, 20)
attempts = 3
won = False
 
print("Guess the number between 10 and 20. You have 3 attempts.")

for i in range(attempts):
    try:

        guess = int(input(f"Attempt {i+1}: Enter your guess: "))


        if guess == random_number:
            print("Congratulations! You are Correct!")
            won = True
            break
        else:
            print("Incorrect guess. Try again.")
    except ValueError:
        print("Please enter a valid number.")
        if not won:
           print("Sorry , you lost. The correct number was ", random_number)
                                                                            
                                                                                
                           
