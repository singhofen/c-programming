/*Programmer Chase Singhofen
Date:9/29/2016
Specifications: How much in the piggy bank*/


#include<stdio.h> 
#include<stdlib.h>

//Main Funftion

main()

{
	//variables
	double hd = 0.5, q = 0.25, d = 0.1, n = 0.05, p = 0.01;
	double a1 = hd*0.5, a2 = q*0.25, a3 = d*0.1, a4 = n*0.05, a5 = p*0.01;
	
	printf("How many hd!\n");//user prompt
	scanf_s("%lf", &hd);
	a1 = hd*0.5;



	printf("How many q!\n");
	scanf_s("%lf", &q);
	a2 = q*0.25;
	
	printf("How many d!\n");
	scanf_s("%lf", &d);
	a3 = d*0.1;

	printf("How many n!\n");
	scanf_s("%lf", &n);
	a4 = n*0.05;

	printf("How many p!\n");
	scanf_s("%lf", &p);
	a5 = p*0.01;

	printf("Total is %.2lf\n", a1 + a2 + a3 + a4 + a5);


	system("pause");
}//end main






