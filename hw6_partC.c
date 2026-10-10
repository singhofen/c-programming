#include <stdio.h>
#include <stdlib.h>
main()
{
	int number = 8, count = 0, multiple = 0, sum = 0;

	while (multiple < 500) {
		multiple = number * count;
		count = ++count;
		if (multiple > 100) {
			printf("Your multiple is: %i \n", multiple);
			
			//the code above generates multiples of 8 but 
			//starting at 104 ending at 504.

			sum = multiple * count;
			count = ++count;
			printf("Your sum of the multiples are: %i \n", sum);
			//all the code shown here generates a large sum of the multiples
			
			system("pause");
		}
	}
}

____________________________________________________________________________________________________________________________________

#include <stdio.h>
#include <stdlib.h>
main()
{
	int number = 8, count = 0, multiple = 0, sum = 0;

	while (multiple < 500) {
		multiple = number * count;
		count = ++count;
		if (multiple > 100) {
			printf("Your multiple is: %i \n", multiple);

			//the code above generates multiples of 8 but 
			//starting at 104 ending at 504.

			sum = multiple + count;//using this it gives me multiples of 16 and sum (+count or *count)
			count = ++count;
			printf("Your sum of the multiples are: %i \n", sum);
			//all the code shown here generates a large sum of the multiples by 16
	system("pause");
		}
	}
}