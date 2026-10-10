/*Programmer Chase Singofen
date 10/17/2016
specifications: practice problems, mixed arithmetic problems, double, int,
modulous, and minus operators*/

#include<stdio.h>
#include<stdlib.h>

main()

{
	int a = 2, b = 4, c = 11, result;
	double d1 = 3.4, d2 = 1.7, doubleResult;

	result = a + c / b;
	printf("a + c / b = %i\n", result);

	result = (a + c) / b;
	printf_s("(a + c) / b = %i\n", result);

	result = (b * a) + c / a;
	printf(" (b * a) + c / a = %i\n", result);

	result = (int)d1 + (int)d2;
	printf("(int)d1 + (int)d2 = %i\n", result);

	result = (int)(d1 + d2);
	printf("(int)(d1 + d2) = %i\n", result);

	doubleResult = c / b + 6;
	printf("c / b + 6 = %lf\n", doubleResult);

	doubleResult = (double)c / b + a;
	printf("(double)c / b + a = %lf\n", doubleResult);

	doubleResult = d1 + d2 * a;
	printf("d1 + d2 * a = %lf\n", doubleResult);

	doubleResult = (a + c) % a * d2;
	printf("(a + c) %% a * d2 = %lf\n", a + c % a * d2);

	doubleResult = a * -d2;
	printf("a * -d2 = %lf\n", a * -d2);


	system("pause");
}