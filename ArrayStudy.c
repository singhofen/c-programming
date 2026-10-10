/*Programmer:Chase Singhofen
Date:
Specification:Array's Introduction
*/

//preprocessors
#include <stdio.h>
#include <stdlib.h>
#define SIZE 20//defined contant.
//main function
main() {
	//indexes of an array start with 0. 
	//int grade1, grade2, grade3 ect.... DON'T USE THIS IN ARRAY!!!!!!!!!!!!!!!!!!!!!!!!!
	//declared an ARRAY of int variables that has 10 elements in it
	int grades[10] = { 87, 65, 98, 45 };//initializer are whats in brackets.
	int i;
	double rainfall[SIZE];//size is not a variable its an identifier. subs from define (constant).
	grades[0] = 100;

	printf("the first element is %i\n", grades[0]);//
	//loop to each element.
	for (i = 0; i < 10; i++) {//uses loop for control variable to go thru each element of arry 
		//goes thu zero thru one less than given number.
		printf("element %i has %i \n", i, grades[i]);//%i not the variables. they are used each time through the loop
	}

	for (i = 0; i < SIZE; i++) {

		printf("ENTER A RAINFALL AMOUNT: ");
		scanf_s("%lf", &rainfall[i]);
		printf("rainfall %i has  %.2lf\n", i, rainfall[i]);

}





	//end main function
	system("pause");
}