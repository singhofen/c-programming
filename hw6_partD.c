/*Programmer Chase Singhofen
Date 10/18/16
Specifications: Create a loop that will output
the sum of all odd numbers between 20 and 100.
*/



#include <stdio.h>
#include <stdlib.h>
main()
{
printf("Odd numbers between 20 to 100\n");

int counter = 0;
for (counter = 20; counter <= 100; counter++) {//the counter will start at 20 and not exceed 100. 
	
	if (counter % 2 == 1) {	// odd numbers do not divide evenly. odd numbers leave a remainder of 1. 
							//if counter number is divisible it will not print odd numbers
							//because there will be no remainder.
		
		printf("%i ", counter);// print all odd numbers.
	}
}
		system("pause");
}