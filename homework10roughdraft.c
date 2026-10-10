/*Programmer: Chase Singhofen
Date:
Specification: Array’s Introduction
*/

//preprocessors
#include <stdio.h>
#include <stdlib.h>
//celsius to fahrenheit...

int celsius, fahrenheit;

int main() {

	int celsius, fahrenheit;
	printf("\nEnter temp in celsius:");
	scanf_s("%i", &celsius);
	

	fahrenheit = ( 9/5) * ( 32);
	printf("\n temp in fahrenheit :%i ", fahrenheit);
	
	system("pause");

//end main

}


//fahrenheit to celsius...

/*int degree()
{

	int result;
	printf("Please Enter the temperature in Fahrenheit: \n");
	scanf_s("%i", &fahrenheit);

	// Convert the temperature from fahrenheit to celsius
	celsius = (-32) * (5 / 9);


	printf("\n temp in celsius: %i", celsius);
	system("pause");

}
*/

int degree()
{

	float fh, cl;
	int choice;

	printf("\n1: Convert temperature from Fahrenheit to Celsius.");
	printf("\n2: Convert temperature from Celsius to Fahrenheit.");
	printf("\nEnter your choice (1, 2): ");
	scanf_s("%d", &choice);

	if (choice == 1) {
		printf("\nEnter temperature in Fahrenheit: ");
		scanf_s("%f", &fh);
		cl = (fh - 32) / 1.8;
		printf("Temperature in Celsius: %.2f", cl);
	}
	else if (choice == 2) {
		printf("\nEnter temperature in Celsius: ");
		scanf_s("%f", &cl);
		fh = (cl*1.8) + 32;
		printf("Temperature in Fahrenheit: %.2f", fh);
	}
	else {
		printf("\nInvalid Choice !!!");
	}
	return 0;
}


