/*Programmer Chase Singhofen
Date 10/8/16
Specifications: While-loops*/
//output the multiples 5 less than 100


#include<stdio.h>
#include<stdlib.h>

main() {

	int count = 5;

	while (count < 100) {
		printf("%i", count);
		count = count + 5;
	}

	system("pause");

}