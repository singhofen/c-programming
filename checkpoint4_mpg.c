#include<stdio.h>>
#include<stdlib.h>
main() {
	double miles, gallons, milesPerGallon;//sum up all of miles traveled and all of the gas used and then caluculate overall mpg using those total figures.use this to get overall mpg.
	double totalMiles = 0.0, totalGallons= 0.0, overallMilesPerGallon;
	//summary of whats going on.
	
	//priming read is prinf statement below.
	printf("Enter the gallons of gas used (-1 to quit):");
	scanf_s("%lf", &gallons);
	//then a loop that checks for a sentinal value.
	while (gallons != -1) {
		totalGallons = totalGallons + gallons;
		printf("Enter the miles driven:");
		scanf_s("%lf", &miles);

		milesPerGallon = miles / gallons;//calculation 
		totalMiles = totalMiles + miles;
		printf("For this tak you got %.2lf miles per gallon.\n", milesPerGallon);
		//repeating read occurs at bottom of the loop
		printf("Enter the gallons of gas used (-1 to quit):");
		scanf_s("%lf", &gallons);

	}
	overallMilesPerGallon = totalMiles / totalGallons;//additional calculation of overall miles which was accumulated inside the loop
	printf("Your average for these tanks is: %.2lf miles per gallon.\n", overallMilesPerGallon);
	system("pause");
}
