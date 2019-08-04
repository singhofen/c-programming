#include<stdio.h>
#include<stdlib.h>
main() {
	int userNumber = 0, sum = 0, count = 0, highNumber = 0, lowNumber = 0;
	double average;


	printf("enter a number greater than 0:(enter -1 to stop)\n");
	scanf_s("%i", &userNumber);
	highNumber = userNumber;
	lowNumber = userNumber;

	while (userNumber != -1)
	{
		if (userNumber > lowNumber && userNumber > highNumber) {

			highNumber = userNumber;

		}
		else if (userNumber < lowNumber)

			lowNumber = userNumber;

		count = count + 1;
		sum = sum + userNumber;

		printf("Enter a number:(-1 to stop)\n");
		scanf_s("%i", &userNumber);
	}
	average = (double)sum / count;

	printf("the sum is : %i\n", sum);
	printf("%i numbers were input \n", count);
	printf("the average is %.2lf\n", average);
	printf("the highest number entered was : %i\n", highNumber);
	
	printf("the lowest number entered was: %i\n", lowNumber);
	system("pause");
}