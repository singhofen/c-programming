/*Programmer Chase Singhofen
Date 10/18/16
Specifications: Create a loop that will output
all the numbers less than 200 that are evenly
divisible by both 2 and 7.
*/



#include <stdio.h>
#include <stdlib.h>
main()


{

	int counter = 0;

	while (counter <= 200) {
		if (counter % 2 == 0 && counter % 7 == 0)

			printf("\n%i", counter);
		counter++;

	}
	system("pause");
}

