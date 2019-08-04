#include <stdio.h>
#include <stdlib.h>
main()
{
	int sum = 0;
	for (int i = 1; i <=400; i++)
	{
		if (i % 8 == 0)
		{
			sum++;

		}
	}
	printf("the sum of the multiples of 8 is %i\n", sum);
	
	system("pause");
}

