/*programmer - chase 
functions in class 11/22/16
use of functions*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void myFuntion(int a)//passing value to function (int a). of type int."how to pass"
{
	//printf("this is my function\n a = %i\n\n", a);
	printf("this is my function\n");
}//end myfunction

main()//main doesnt know what my function is.(5)
{
	int a;
	printf("this is main function.\n a = %i\n\n",a);
	myFunction(5);//CALLED OR INVOKED MY FUNCTION //int a is replaced by (5)
	system("pause");

	int shape1, shape2;
	int square(int a);

	{
		printf("this is square\n");
		shape1 = askSquare();
		shape2 = askCube();
	}
	int cube(int a);
		printf("this is cube\n");
		shape1 = askSquare();
		shape2 = askCube();

}//end main

int askNum()
{
	int x;
	printf("enter a number\n");
	scanf_s("%i", &x);
	return x;

}

int addNum(int a, int b)//parameters or arguments
{
	int sum;
	sum = a + b;
	return sum;
}
void display(int a)
{
	printf("the result is %i\n", a);


	

		
	int num1, num2, num3, prod;
	//printf("this is main funtion\n");
	num1 = askNum ();//invoking
	num2 = askNum();//invoking
	addNum(num1 , num2);
	num3 = addNum(num1, num2);//2 argumnents
	//prod = multi(num1, num2);
	display(num3);
	//display(1000);
	//printf("the additions is %i\n", num3);
	//myfunctions(1);
	//myfunction(5);

	system("pause");
}//end main


//google all function, you can create your own functions.


	