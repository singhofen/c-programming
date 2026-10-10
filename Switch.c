/*Programmer-Chase Singhofen
Date-
Specafication- */
//Preproccessor directives
#include<stdio.h>
#include<stdlib.h>
//main function
void main() {
	//Variable Decleration
	int choice;
	float r ,circle,side,square;
	while(choice != 3)
	{
	printf("Press 1 for area of circle\n");
	printf("Press 2 for area of square\n");
	printf("Press 3 to CY@\n");
	scanf("%d", &choice);
	switch (choice) {
	case 1:
		printf("Enter the radius.\n\n");
		scanf("%f", &r);
		circle = 3.14*r*r;
		printf("Area of circle is %f\n", circle);
		break;
	case 2:
		printf("Enter a side.\n");
		scanf("%f", &side);
		square = side*side;
		printf("Area of square is %f\n", square);

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


______________________________________________________________________________________________________________

/*Programmer Chase Singhofen
Date: 11/4/16
Specifications: Switch : Case 1 ask user for radius of circle
calculate area of circle, display area of circle
case 2 ask for side of square, calculate area of square, display area of square*/

#include<stdio.h>
#include<stdlib.h>
//main function
void main() {
	//Variable Decleration
	int choice = 0;
	float r = 0, circle = 0, side = 0, square = 0;
	
	{
	    while(choice!=3){
		printf("Press 1 for area of circle\n");
		printf("Press 2 for area of square\n");
		printf("Press 3 to exit\n");
		scanf("%d", &choice);
		switch (choice) {
		case 1:
			printf("Enter the radius.\n");
			scanf("%f", &r);
			circle = 3.14*r*r;
			printf("Area of circle is %f\n", circle);
			break;
		case 2:
			printf("Enter a side.\n");
			scanf("%f", &side);
			square = side*side;
			printf("Area of square is %f\n", square);
			break;
    	case 3:
    	   printf("program terminated");
			break;
		default:
			printf("you entered incorrect choice.\n");
			break;
		}
		}
	}
	//End main
	system("pause");
}

	+
