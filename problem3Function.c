/*programmer chase
instructions - write C program  that allows the user
to enter 3 grades from student and displays the average and 
percentage*/

#include<stdio.h>
#include<stdlib.h>

double askPoints() {
	double grade;
	printf("input a grade\n");
	scanf_s("%lf", &grade);
	return grade;

}

double avgPoints(double a, double b, double c) {

	double avg;
	avg = (a + b + c) / 3;
	return avg;


}


void display(double x, double y) {// not retuning any value (void)


	printf("the average is %.2lf, the percentage is%.2lf\n",x, y);

}

double percentPoints(double a, double b, double c) {

	double per;
	per = (a + b + c) / 3;
	return  per;
	}
main() {

	double num1, num2, num3, num4, num5;


	num1 = askPoints();//invoked each num or int
	num2 = askPoints();
	num3 = askPoints();

	num4 = avgPoints(num1, num2, num3);//passing by value. passing by variables all 3 arguments.
	num5 = percentPoints(num1, num2, num3);

	display(num4, num5);


	system("pause");
}
