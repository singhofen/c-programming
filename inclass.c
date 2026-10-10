/*programmer Chase Singhofen
date 10/18/16
specifications 
*/

#include<stdio.h>
#include<stdlib.h>
main()

{
	int value = 0, count = 0, num = 0;
	scanf_s("%i", &value);
	while (count < value)
	{
		printf("enter a number\n");
		scanf_s("%i", &num);
		count++;
	}
	

	system("pause");

}