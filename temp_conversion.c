/*Programmer Chase Singhofen
Date 9/28/2016
Specifications: Convert Fahrenheit to Celcius
*/

#include<stdio.h>
#include<stdlib.h>
main()
{
	
		float celsius, fahrenheit;

		// Reads temperature in Fahrenheit from user
		printf("Enter temperature in Fahrenheit: ");
		scanf_s("%f", &fahrenheit);

		// Converts fahrenheit to celsius
		celsius = (fahrenheit - 32) * 5 / 9;

		printf("\n%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

		
		system("pause");
}