/*Programmer Chase Singhofen
Date: 9/13/2016
Specifications: Finding Length Square and Perimeter*/

//*Pre Processor directives
#include <stdio.h>
#include <stdlib.h>
//main function
main()
{
	//variable declarations
	double length = 0.0, area = 0.0, peri= 0.0, perift=0.0, periInch;
	printf("Side please in inches \n");//user prmpt;
	scanf_s("%lf", &lenght); // user input
						//process
	printf("You entered %.2lf:\n", lenght);
	//process
	area = length* length;
	printf("sides of the square is %.2lf square inches\n", area);
	printf("add all the sides of hte square is %.2lf inches\n", peri);
	perift = (int)peri / 12;
	periInch = (int)peri % 12;
	printf = ("\n\inPerimeter of square is .%i feet and %i inches\n" , perift, periInch);

	

	system("pause");
	//end main
}