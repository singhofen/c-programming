/*Programmer: Chase Singhofen
Date:
Specification: Array’s Introduction
*/

//preprocessors
#include <stdio.h>
#include <stdlib.h>
#define NUMBERS 50
//main function
main() {
	int number[NUMBERS];
	int i;

	number [0]=50;
	//printf(enter number and  (-1 = quit ) 
	//use for and if statements  2 each
	//1st for then if ....
	//2nd for then if....

	printf("enter numbers   %i\n", number[NUMBERS]);
	scanf_s("%i", &number[NUMBERS]);
	for (i = 0; i < NUMBERS; i++) {
		printf("element %i has %i\n", i, number[i]);
		}


	

		
	//end main function
	system("pause");
}
