/*Programmer:Chase Singhofen
Date: 11/12/16
Specification:Write switch program that tells user to input 5 numbers, then asks them to choose
option to display smallest, largest, sum and the avg. perform program 5 times including one invalid 
statement. 
*/

//preprocessors
#include <stdio.h>
#include <stdlib.h>
//main function
main() {
	//variable declaration
	int choice = 0, sum = 0, q = 0, num = 0, small, large;
	double avg = 0;
	//user enters a number
	printf("Please enter a number.\n");//enter number by user
	scanf_s("%i", &q);//user enters number

	small = q;
	large = q;
	//start while loops. user will have oppourtunity to enter 5 numbers unless he enters 
	// 5 to quit program.
	while (num < 4)
	{
		num++; //count increment +1
		sum = sum + q;

		if (small > q)//int small is greater than int q
			small = q; //line 30 will determine smallest integer entered by user

		else if (large < q)//int large is less than int q
			large = q; //line 33 will determine largest integer entered by user

		else
			q = q;//gets number

		printf("Please enter another number.\n");
		scanf_s("%i", &q);//user will enter another number
	}
		sum = sum + q;


	if (small > q)//int small is greater than int q
		small = q;  //line 47 will determine smallest integer entered by user

	else if (large < q) //int large is less than int q
		large = q; //line 50 will determine largest integer entered by user

	else
		q = q;//gets number

	while (choice != 5)//the user choice cannot = 5!. press 5 to exit program.
	{
		{

		} //while loops end.
		printf("Please choose an option.\n");
		printf("press 1 to View smallest number.\n");
		printf("press 2 to View largest number.\n");
		printf("press 3 to View the sum.\n");
		printf("press 4 to View the average.\n");
		printf(" press 5 to Quit program\n");
		scanf_s("%i", &choice);
		switch (choice)//switch starts. user can display small, large avg, & sum of thier numbers.
			//by choosing option:1-5.
		{
		case 1:
			printf("%i\n\n", small);
			break;

		case 2:
			printf("%i\n\n", large);
			break;

		case 3:
			printf("%i\n\n", sum);
			break;

		case 4:
			avg = (double)sum / 5; //type casting to keep double
			printf("%.2lf\n\n", avg);//avg displayed
			break;

		case 5:
			printf("END OF SWITCH PROGRAM.\n");
			break;

		default:
			printf("INVALID NUMBER!!!.\n\n");
			break;
		}
	}
	//user prompt
	//end main function
	system("pause");
}



