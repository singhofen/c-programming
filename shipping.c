/*Programmer Chase Singhofen
Date 10/5/2016
Specifications:Shipping Calculations.
*/
//This program will calculate shipping charges based on miles and weight. 
//Packages less than or equal to 10lbs will cost $2.00
//Packages more than 10lbs but less than or equal to 50lbs will cost $4.50
//Packages over 50 pounds will not be shipped.
// Shipping charges will be based on every 500 miles with no pro ration.

#include<stdio.h>
#include<stdlib.h>

main()
{
	double packageWeight, packageDistance, packagePrice = 0, shippingCost;
	int segmentNum;
	printf("Enter the weight of the package:\n");
	scanf_s("%lf", &packageWeight);
	printf("The weight you have entered is %.2lf\n", packageWeight);



	// A package that weighs less than 10lbs will cost $2
	if (packageWeight <= 10)
		packagePrice = 2.00;


	// A package that weighs less than or equal to 50lbs but more than 10lbs will cost $4.50

	else

	{
		if (packageWeight <= 50)
			packagePrice = 4.50;

		// Do not ship packages weighing more than 50lbs

		else
			printf("The package will not ship.  \n");
	}


	// Shipping cost the same for 200 miles 
	//This is one 500 mile segment
	printf("How far are you sending the package? \n");
	scanf_s("%lf", &packageDistance);
	printf("The distance you entered is %.2lf\n", packageDistance);

	segmentNum = packageDistance / 500;

	if ((int)packageDistance % 500 != 0)
		segmentNum = segmentNum + 1;
	shippingCost = packagePrice*segmentNum;


	//The shipping cost 
	printf("The shipping cost is: %.2lf\n", shippingCost);



	system("pause");

}