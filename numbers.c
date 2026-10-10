/*Programmer Chase Singhofen
Date: 9/13/2016
Specifications:input output numbers */

//*Programmer directions: Enter numbers greater, smaller, and equal.

#include<stdio.h>
#include<stdlib.h>

main()//main functions
{
	int num1, num2, messege1, messege2, messege3; //Variable declarations
	printf("Enter two numbers here! \n");//user prompt
	scanf_s("%lf %lf", &num1, &num2);

	printf("First number is greater than second number \n");
	scanf_s("%lf %lf", &num1, &num2);

	printf("First number is smaller than second number \n");
	scanf_s("%lf %lf", &num1, &num2);

	printf("Got it! Both numbers are the same!\n");
	scanf_s("%lf %lf", &num1, &num2);

	system("pause");
}//end main 
