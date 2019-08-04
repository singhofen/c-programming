#include<stdio.h>
#include<stdlib.h>

main()

{
	double n = 0;
	scanf_s("%lf", &n);

	int counter = 0;
	while (counter < n) {
		printf("HI");
		counter++;
	}system("pause");
}