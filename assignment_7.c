/*Programmer Chase Singhofen
Date: 10/26/16
Specifications: Write C program that will allow user to enter infinite numbers one number 
at a time and all numbers greateer than zero. must have a way 
for user to stop entering values. once the user stops -screen 
will display highest, lowest, number of values entered, and avg of numbers */

#include <stdio.h>
#include <stdlib.h>
main() {

	int userNumber = 0, sum = 0, count = 0, highNumber = 0, lowNumber = 0, lastNumber = 0;
	double average;


	printf("Enter a number greater than 0: (Enter -1 to stop) \n");//user number must be greater than zero or program doesnt run.
	scanf_s("%i", &userNumber);//user starts entering their numbers.
	highNumber = userNumber;
    	lowNumber = userNumber;
 

	while (userNumber != -1) {//while loop lets user stop program using (-1)-- after entering infinite amount of numbers .
		if (userNumber > lowNumber && userNumber > highNumber)//conditions set for the user so when they enter any number 
			highNumber = userNumber;						// high or low- both the lowest and highest numbers are considered.

		else if (userNumber < lowNumber)//condition is set [IF] the if statement isnt acheived
			lowNumber = userNumber;//user number is recognized & gets low number.
		count = count + 1;
		sum = sum + userNumber;//user number plus the sum gets the sum of all entered numbers.
		
		printf("Enter a number:(-1 to stop)\n");//allows user to enter (-1) to stop or continue.
		scanf_s("%i", &userNumber);//user's number is displayed on screen. 
	}
	average = (double)sum / count;//[casting!!] a variable. must use when finding an average or it will display as an INT, not double.
	//divides the count by the sum of numbers entered to calculate the average of total numbers entered by user. 

	//statement below automaticlly show at end of program.
	printf(" The sum is: %i\n", sum);//sum appears on screen
	printf(" %i numbers were input\n", count);//number of numbers appears on screen
	printf(" The average is %.2lf\n", average);//average is displayed on screen
	printf("The highest number entered was: %i\n", highNumber);//highest number is displayed on screen
	printf("The last number entered was: %i\n", lastNumber);//last number is displayed on screen
	printf("The lowest number entered was: %i\n", lowNumber);//lowest number is displayed on screen
	system("pause");
}
