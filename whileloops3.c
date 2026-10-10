/*Programmer Chase Singhofen
Date 10/8/16
Specifications: While-loops*/
//output the even numbers in decending order from 70 to 50, inclusive.


#include<stdio.h>
#include<stdlib.h>

main() {

	int count = 70;

	while (count >= 50) {
		printf("%i", count);
		count = count - 2;
	}

	system("pause");

}