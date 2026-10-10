/*Programmer Chase Singhofen
Date: 9/13/2016
	Specifications: Finding average grades*/

//*Programmer directions

#include <stdio.h>
#include <stdlib.h>

//main funtion

main()

{
	//Variable declarations
	double grade1, grade2, grade3, avg;
	//user input
	printf("Enter three grades:\n");
	scanf_s("%lf %lf %lf", &grade1, &grade2, &grade3);
	//check
	printf("grades entered are %.2lf, %.2lf, %.2lf\n", grade1, grade2, grade3);
	//process
	avg = (grade1 + grade2 + grade3) / 3;
	printf("Average of the grades %.2lf %.2lf %.2lf is %.2lf\n", grade1, grade2, grade3, avg);
	if (avg >= 90)
		printf("Your grade is A \n");
	else if (avg >= 80)
		printf("Your grade is B \n");
	else if (avg >= 70)
		printf("Your grade is C \n");
	else if (avg >= 60)
		printf("Your grade is D \n");
	else
		printf("Your grade is F \n");


	



system("pause");


}
//end main
