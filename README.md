# CS215 Introduction to Program Design, Abstraction, and Problem Solving
### Assignments / Projects in C++

## Lab 1

**The purpose of this lab assignment is** :
 - to get familiar with Microsoft Visual Studio IDE 
 - to compile and run your first C++ program
 - follow Coding Style Guide criteria when writing code 
 - implement simple input and output code 
 - test behavior of the code 
 
## Lab 2

**The purpose of this lab assignment is** :
 - to get familiar with Microsoft Visual Studio IDE
 - to practice using input/output
 - to practice using variables, constants, fundamental data types and basic operations.
 
**Goal**: <br>
Write a program that directs a cashier how to give change. The program has two inputs: the amount due and the amount received from the customer (expressed in dollars). Display the dollars, dimes, nickels, and pennies that the customer should receive in return.

## Lab 3

**The purpose of this lab assignment is** :
 - to get familiar with Microsoft Visual Studio IDE
 - to continue practicing using input/output
 - to continue practicing using variables, constants, fundamental data types and basic operations
 - to practice using conditional statement.

**Prompt** : <br>
Students plan to rent some vehicles to drive from location A to location B. Suppose 
there are several choices for them:
 - A bus allows 56 passengers
 - A van allows 13 passengers
 - A SUV allows 7 passengers
 - A sedan allows 3 passengers. 
 
The restriction is that each vehicle must be used as full capacity as possible, in order 
to minimize the total number of vehicles to rent. If there is only one passenger, for 
example, we rent a sedan instead of other larger size vehicles. We also know that there 
are at maximum 4 buses and at maximum 5 vans available on that day, and no limited 
number for either SUVs or sedans.

Write a program to read the total number of students (as passengers), and determine the minimum number of vehicles they need to rent. For example, if there are 97 students, they need one bus, three vans, zero suv and one sedan. Your program should print the number of each type of vehicle needed, neatly formatted as shown in the sample output. However if the number of specified type of vehicle needed is zero, its name should not display. 

## Lab 4

**The purpose of this lab assignment is** :
 - to continue practicing conditional statements
 - to practice loop statements
 - to get familiar with Visual Studio Debugger
 
**Prompt** : <br>
Write a program that performs Credit Card Number Check. Your program should repeatedly ask the user to input an 8-digit number to check if it is valid, until the user enters -1 to quit. (Please note that for simplicity, now you can assume the user will always enter 8-digit numbers to check except for quitting the program with -1. Later we will learn how to handle the user input validation). 

**The program will implement the following algorithm** : <br> 
The last digit of a credit card number is the check digit, which protects against transactions errors such as an error in a single digit or switching two digits. The following method is for numbers with 8 digits:
 - Starting from the rightmost digit, form the sum of every other digit. For example, if the credit card number is 43589795. Then you form the sum 5 + 7 + 8 + 3 = 23
 - Double each of the digits, which were not included in the preceding step. Add all digits of the resulting numbers. For example, with the number given above, doubling the digits, starting with the next-to-last one, yields 18 18 10 8. Adding all digits in these values yields 1 + 8 + 1 + 8 + 1 + 0 + 8 = 27.
 - Add the sums of the two preceding steps. If the last digit of the result is 0, the number is valid. In our case, 23 + 27 = 50, so the number is valid. 

After the user supplies an 8-digit number, your program should implement the above algorithm, then print out whether the number is a valid credit card number or not. If it is not valid, you should print out the value of the check digit that would make the number valid.

## Lab 5
## Lab 6
## Lab 7
## Lab 8
## Lab 9
## Lab 10
## Lab 11
