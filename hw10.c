#include <stdio.h>
#include <stdlib.h>


main()
{
		int celsius, fahrenheit = 0, condition = 0, temperture = 0;

		
		
		while (condition != -1)
		{

			printf("\nEnter temp in celsius:");
			scanf_s("%i", &celsius);

			

			fahrenheit = (celsius * 1.8) + 32;
			printf("\n temp in fahrenheit :%i ", fahrenheit);

			





			printf("\nEnter temp in fahrenheit:");
			scanf_s("%i", &fahrenheit);

			

			celsius = (fahrenheit - 32) / 1.8;
			printf("\n temp in celsius :%i ", celsius);


			


				printf("\ncontinue -1 to exit", &condition);
				scanf_s("%i", &condition);

			}
		
		system("pause");
	}




			/*

			//examples and examples of prototypes.
			int multi(int a);
			void cube(int a);

			main(void) {

			int var;

			var = multi(4);    //16

			printf("%i\n", var);

			printf("%i\n", multi(9));

			}

			void cube(int a) {//function definitions. 

			int result;

			result = a*a*a;

			printf("%i", result);
			}

			int multi(int a) {//example of another functions

			int result;

			result = a * a;

			return result;
			}*/











