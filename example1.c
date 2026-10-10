/*Programmer Chase Singhofen
date 10/25/2016
Specifications:in class work*/

#include<stdio.h>
#include<stdlib.h>
main() {

	int num = 1, sum = 0, i = 0, total = 4;
	double avg = 0;
	printf("enter four numbers\n");

	for (i = 1; i < 4; i++)
	{
		scanf_s("%i\n", &num);
		sum = sum + num;//sum = sum + new number 
		
	}
	avg = (double)sum / 4;//type casting 
	printf("print average %lf\n", avg);

	system("pause");
}
//end main