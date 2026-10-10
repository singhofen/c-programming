/*Programmer Chase Singhofen
Date: 9/13/2016
Specifications: Finding average grades*/

//*Pre Processor directives
#include <stdio.h>
#include <stdlib.h>
//main function
main()
{
	//variable declarations
	double r = 0, area = 0, c = 0;
	printf("Please enter radius\n");//user prmpt;
	scanf_s("%lf", &r); // user input
	//process
	area = 3.14 * r * r;
	c = 2 * 3.14 * r;
	//output
	printf("The area is : %.2lf square inches\n", area);
	printf("The circumference is :%.2lf inches\n", c);
	system("pause");
}//end main
 