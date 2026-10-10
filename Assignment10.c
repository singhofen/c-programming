/*Programmer: chase
Date: 11/22/2016
Specification: Assignment 10
*/

//preprocess directives
//standard libraries
#include <stdio.h>
#include <stdlib.h>

int askNumFahrenheit() {//begin fahrenheit function

	int fahrenheit;
	printf("Enter a temperature in Fahrenheit:\n");
	scanf_s("%i", &fahrenheit);
	return fahrenheit;//return fahrenheit value
} // ask for the fahrenheit function

int convFahrenheit(int a) {//conversion function fahrenheit to celsius

	int newcelsius;
	newcelsius = (a - 32) / 1.8;
	return newcelsius;// returns celsius
} // fahrenheit to celsius conversion

void printCelsius(int a) {//returns no value

	printf("The converted temperature is %i\xf8 Celsius\n", a); // \xf8 prints degree symbol

}// print converted Celsius function


int askNumCelsius() {// function asking for celsius

	int celsius;
	printf("Enter a temperature in Celsius:\n");
	scanf_s("%i", &celsius);
	return celsius;//returns celsius value
} // ask for the Celsius function

int convCelsius(int a) {

	int newFahrenheit;
	newFahrenheit = (a * 1.8) + 32;
	return newFahrenheit;//function returns farenheit

} // Celsius to Fahrenheit conversion formula's


void printFahrenheit(int a) {//function returns no value

	printf("The converted temperature is %i\xf8 fehrenheit\n", a);

}// print converted Fahrenheit function

 //main function
main() {

	int choice = 0, num1, num2;//declarations variables

	while (choice != 3)//enter 3 to quit program.
	{
		printf("Choose an option:\n1.) Convert Fahrenheit to Celsius.\n2.) Convert Celsius to Fahrenheit.\n3.) Quit the Program\n\n");
		scanf_s("%i", &choice);
		switch (choice)
		{

		case 1:
			num1 = askNumFahrenheit();
			num2 = convFahrenheit(num1);
			printCelsius(num2);
			break;


		case 2:
			num1 = askNumCelsius();
			num2 = convCelsius(num1);
			printFahrenheit(num2);
			break;

		case 3:
			printf("\nend of program--need a Headache medicine-");
			break;
			}
	}//end  main
	system("pause");

}