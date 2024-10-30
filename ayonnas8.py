#Adonay Yonnas

import random

randNum = random.randint(1,10)
x = 2
y = 7

print("Enter a number :")
z = int(input())

if z == x:
    print("You entered 1")
else:
    print("you entered not 1")

w= int(input("Enter a number:"))

for i in range(w):
    print("this is a statement withing a for loop")

 
while i < 10:
    i = i + 1
    print("1 = ",1)
    y= i%2
    print("nod i =",y)

#make a loop print the index every other time

#output
#1 3 5 7 9
for i in range (10):
    if i%2 ==0:
        print (i)
userguess = 1000
g = 0

while userguess != randNum:
    userguess = int(input("Guess a number between 0 and 9"))
    if userguess == randNum:
        print("you are correct")
        print("you have this amount of guesses",g)
    elif userguess < randNum:
        print("your guess is lower than random number")
        g = g + 1
        print("you have this amount of guesses",g)
    elif userguess > randNum:
        print("your guess is higher than random number")
        g = g + 1
        print("you have this amount of guesses",g)

