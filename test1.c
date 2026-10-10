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

	int score, sum = 0, count = 0, grades = 0, avg = 0;
	printf("Enter a test score(-1 to quit):");
	scanf_s("%i", &score);
	while (score != -1) {
		sum = sum + score;
		printf("Enter a test score(-1 to quit):");
		scanf_s("%i", &score);

	}
	printf("\nThe sum of the scores is : %i\n", sum);

	{
		printf("Do not count this grade as passing");
		scanf_s("%i", &grades);
		if (score < 0 || score > 100);
		else ("Count this grade as passing");
		count = count + grades;

		

	
		{
			printf("\nThe passing grades are : %i\n", grades);
		}
			{
				 printf("Count this as passing grades");
				 scanf_s("%i", &count);
				 if (score >= 70 && score <= 100);
				 else ("Dont count grade as passing");
				 if (score < 0 || score > 100);
				 grades = grades + passing;
			
				 {

				 printf("\nThe count of the scores is : %i\n", count);
			}
			
}
		 printf("What is average of valid grades");
		 scanf_s("%i", &avg);
		 grades + sum + avg;
		 {
		 printf("\nThe avg of the scores is : %i\n", avg);
		}		
	{
}

	system("pause");
}