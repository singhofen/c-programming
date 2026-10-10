/*Programmer Chase Singhofen
Date 10/8/2016
Specifications: Logical Operators*/

//Creating small program to see if they will be true or false statements. 

#include<stdio.h>
#include<stdlib.h>

main()

{
	int a = 10, b = 6, c = 4;


	if (a <= b || c >= 4)
		printf_s("First Condition is TRUE!\n");

	if ( c < a && a == 10)
		printf_s("Second Condition is FALSE!");

	if (!(b==c + 6))
		printf_s("Third Condition is TRUE!");
	
	
	system("pause");
}