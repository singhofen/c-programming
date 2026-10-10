/*Programmer Chase Singhofen
Date 10/8/16
Specifications: Ask the user to enter test scores.
When they have entered all the tests scores,
they will enter the value of -1. The Program
will find total percent of passing grades and exclude failing
grades*/

#include<stdio.h>
#include<stdlib.h>

main() {
	//variables and declarations, while loop- grade cannot = -1.
	double score, sum = 0, grade = 0, gradeNum = 0, avg = 0, pass = 0, totalGrades = 0;
	printf("Enter a test score(-1 to quit):");
	scanf_s("%lf", &grade);
	while (grade != -1)
	{
		// if statement where grade is less than or equal to 100 & grade is greater than or equal to 70.
		// present passing grade if grades or in range.
		// in this if statement the grades cannot be lower than 70 or higher than 100.
		
		if (grade <= 100 && grade >= 70) {
			pass++;
			printf("Pass: %.2lf\n", pass);
		//if statement where grade is greater than 100 and less than zero.
		// present error messege if any entered grades are greater than 100 or less than 0.
		}
		if (grade > 100 || grade <0) {
			printf("Error, grade is not in grade range\n");

		//total grades that are greater or equal to 0 and less than or equal to 100.
		
		}
		if (grade >= 0 && grade <= 100) {
			totalGrades++;

		//enter test scores here
		}
		printf("Enter a test score(-1 to quit):");
		scanf_s("%lf", &grade);

		//statement that divides the total passing grades by 100 to get average 
		//of passing grades.
	}
	avg = 100 * pass / totalGrades;
	printf("\nThe percent of passing grades is : %.2lf\n", avg);
	system("pause");

}