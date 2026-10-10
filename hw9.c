/*Programmer: Chase Singhofen
Date:
Specification:Homework 9. Array Function.
*/

//preprocessors
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
//main function.
//printf(enter number and  (-999 = quit ) 
//use for and if statements  2 each, one for input and one for output.
main() {
	int number[SIZE];// size is [50]
	int i;// should be in []along with variable int.

	for (i = 0; i < SIZE; i++) //remember to put value = 0 with the integer [i] in for loop statement.
	{
		printf("enter a value for array (-999 to quit)\n\n");
		scanf_s("%i", &number[i]);
		if (number[i] == -999) {
			break; //break the for loop and no more inputs..
		}
	}//end for statement

	for (i = 0; i < SIZE; i++)
	{
		printf("%i, %i\n", i + 1, number[i]);
		if (number[i] == -999) {
			break;//break the for loop and no more outputs will be allowed..
				  // the break statements will not allow anymore input numbers to be entered.
				  //This will automatically display all input numbers [50] that were entered.
				  //SIZE value is [50].
		}

	}//end for and if statements.
	 //end main function
	system("pause");
}
