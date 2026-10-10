/*Programmer: Chase Singhofen
Date:
Specification: Array’s Introduction
*/

//preprocessors
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4//defined constant.
//main function
main() {

	int grade[3], sum = 0;
	double average;

	for (int i=0; i < SIZE; i++)
	{
		printf("enter grade:\n");
		scanf_s("%i", &grade[i]);
		printf("you enterd %i\n", grade[i]);
		sum += grade[i];
		printf("sum of your grades so far is %i", sum);


	}

	average = (double)sum / SIZE;
	printf("average is %.2lf\n", average);


	//end main function
	system("pause");
}
