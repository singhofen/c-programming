#include<stdio.h>
#include<stdlib.h>
main() {
	int number, factor=1, count;
	
	printf("Enter an integer: ");
	scanf_s("%i", &number);
	
	count = number;
	while (count >= 1) {//tried to debug program before entering(factor = factor * count) and it would not run so i had to use these factor loop
		//and multiply them 
		factor = factor * count;//factor loop 4*3*2*1=24. trickiest part of loop
		//factor=1 which is multiplied by count which is 4 
		//next time thru the loop we'll have 4*3 which is 12 then 12*2 which = 24. 
		count = count - 1;
	}



	printf("The factorial: %i\n", factor);
	system("pause");
}