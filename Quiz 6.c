/*Programmers: Isaah Santos, Chase Singhofen, Brandt Barry
Date: 12-1-16
Specifications: Quiz 6*/
#include<stdio.h>
#include<stdlib.h>

double circleInput()
{
	double radius;
	printf("Please enter the radius of your circle:\n");
	scanf_s("%lf", &radius);
	return radius;
}

double circleArea(double a)
{
	double area;
	area = 3.14 * (a * a);
	return area;
}

double circleCircum(double a)
{
	double circum;
	circum = 2 * 3.14 * a;
	return circum;
}

void displayCircle(double a, double b)
{
	printf("The area of your circle is %.2lf\nThe circumference of your circle is %.2lf.\n", a, b);
}

double triangleBaseInput()
{
	double base;
	printf("Please enter the base of the triangle:\n");
	scanf_s("%lf", &base);
	return base;
}

double triangleHtInput()
{
	double height;
	printf("Please enter the height of the triangle:\n");
	scanf_s("%lf", &height);
	return height;
}

double triangleArea(double a, double b)
{
	double tArea;
	tArea = (a * b) *0.5;
	return tArea;
}

void displayResults(double a)
{
	printf("The area of your triangle is %.2lf\n", a);
}

double sqInput()
{
	double length;
	printf("Please enter the length of the side of your square:\n");
	scanf_s("%lf", &length);
	return length;
}

double sqArea(double a)
{
	double area;
	area = a * a;
	return area;
}

double sqPeri(double a)
{
	double perimeter;
	perimeter = a * 4;
	return perimeter;
}

void displayArea(double a, double b)
{
	printf("The area of your square is %.2lf.\nThe perimeter is %.2lf.\n", a, b);
}

main()
{
	int selection = 0;
	double a = 0.0, b = 0.0, area = 0.0, circum = 0.0, cnum1 = 0.0, cnum2 = 0.0, cnum3 = 0.0, tnum1 = 0.0, tnum2 = 0.0, tnum3 = 0.0, snum1 = 0.0, snum2 = 0.0, snum3 = 0.0;
	do  
	{
		printf("Select an option from the following list:\n");
		printf("1. Circle\n2. Triangle\n3. Square\n4. Exit\n");
		scanf_s("%i", &selection);

		if (selection == 1)
		{
			cnum1 = circleInput();
			cnum2 = circleArea(cnum1);
			cnum3 = circleCircum(cnum1);
			displayCircle(cnum2, cnum3);
		}

		else if (selection == 2)
		{
			tnum1 = triangleBaseInput();
			tnum2 = triangleHtInput();
			tnum3 = triangleArea(tnum1, tnum2);
			displayResults(tnum3);
		}

		else if (selection == 3)
		{
			snum1 = sqInput();
			snum2 = sqArea(snum1);
			snum3 = sqPeri(snum1);
			displayArea(snum2, snum3);
		}

		else if (selection == 4)
		{
			printf("Thank you for using this program!\n");
		}

		/*else
		{
			printf("That is not an option!\n");
		}*/
	} while (selection != 4);

	system("pause");
}