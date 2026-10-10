/*Programmer-
Date-
Specafication- */
//Preproccessor directives
#include<stdio.h>
#include<stdlib.h>
//main function
main() {
	//Variable Decleration
	int choice=0;
	double r = 0,circle=0,side=0,square=0;
	while(choice != 3)
	{
	printf("Press 1 for area of circle\n");
	printf("Press 2 for area of square\n");
	printf("Press 3 to CY@\n");
	scanf_s("%i", &choice);
	switch (choice) {
	case 1:
		printf("Enter the radius.\n\n");
		scanf_s("%lf", &r);
		circle = 3.14*r*r;
		printf("Area of circle is %.2lf\n", circle);
		break;
	case 2:
		printf("Enter a side.\n");
		scanf_s("%lf", &side);
		square = side*side;
		printf("Area of square is %.2lf\n\n", square);

		break;
	case 3:
		printf("=======================\n==========CY@==========\n=======================\n");
		system("pause");
	default:
		printf("you entered incorrect choice.\n");



	}
	}
	//End main
	system("pause");
}