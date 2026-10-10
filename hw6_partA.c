/*Programmer Chase Singhofen
Date 10/18/16
Specifications: Write a program that will Create a
loop that will output all the multiples of 5
that are greater than zero and less than 60 (do not include 60)
*/



#include<stdio.h>
#include<stdlib.h>

main()
{
	int i;
	for (i = 5; i < 60; i++) {//greater than zero and less than 60
		if (i % 5 == 0)//equal too
		{
			printf("\n%i", i);
		}
	}
		system("pause");
}