/*Programmer Chase Singhofen
Date: 9/18/2016
Specification: Three Prices*/

#include<stdio.h>
#include<stdlib.h>
main() {
	//variable declarations
	double item1Price, item2Price, item3Price;
	double totalPrice, tax, grandTotal;
	
	// get the data from the user
	printf("Enter the first price:\n");
	scanf_s("%lf", &item1Price);
	printf("You entered %.2lf\n", item1Price);
	printf("Enter the second price:\n");
	scanf_s("%lf", &item2Price);
	printf("You entered %.2lf\n", item2Price);
	printf("Enter the thrid price:\n");
	scanf_s("%lf", &item3Price);
	printf_s("You entered %.2lf\n", item3Price);
	
	//calculate the results
	totalPrice = item1Price + item2Price + item3Price;
	tax = totalPrice * 0.07;
	grandTotal = totalPrice + tax;
	
	//output the results
	printf("The total price is : %.2lf\n", totalPrice);
	printf("The tax is: %.2lf\n", tax);
	printf("The grand total is: %.2lf\n", grandTotal);






	system("pause");
} //end main