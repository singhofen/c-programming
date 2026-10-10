/*Programmer Chase Singhofen
Date 10/8/16
Specifications: Ask the user to enter test scores.
When they have entered all the tests scores, 
they will enter the value of -1. The Program
will sum up all the scores entered, and output sum.
70, 80, 90, -1. Expected 240*/


#include<stdio.h>
#include<stdlib.h>

main() {

	int score, sum = 0;
	printf("Enter a test score(-1 to quit):");
	scanf_s("%i", &score);
	while (score != -1) {
		sum = sum + score;
		printf("Enter a test score(-1 to quit):");
		scanf_s("%i", &score);
		
	}
	printf("\nThe sum of the scores is : %i\n", sum);
	system("pause");

}