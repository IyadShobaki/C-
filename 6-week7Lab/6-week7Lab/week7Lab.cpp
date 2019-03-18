/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Week 7 Lab
	2 / 25 / 2019 */
/*This program prompt the user for 3 numbers and calculate
the total and the average of these numbers */
#include <iostream>

using namespace std;
// Declare functions

double calculateAverageAndTotal(double number1, double number2, double& total);
double calculateAverageAndTotal(double number1, double number2, double number3, double& total);
double addNumbers(double number1, double number2, double number = 1);
int main()
{
	double number1, number2, number3, total, average;
	
	cout << "Please enetr first number: ";
	cin >> number1;
	cout << "Please enetr second number: ";
	cin >> number2;
	
	average = calculateAverageAndTotal(number1, number2, total);
	cout << "The average of the two numbers is " << average << " and the total is " << total << endl;
	cout << endl;
	cout << "Enter third number or (0) to quit: ";
	cin >> number3;
	if (number3 == 0) {

		exit;
	}
	else {
		average = calculateAverageAndTotal(number1, number2, number3,total);
		cout << "The average of the three numbers is " << average << " and the total is " << total << endl;
	}
	
	cout << endl;
	cout << "(addNumbers function with two arguments and the third argument is default) Total = " <<  addNumbers(number1, number2) << endl;
	
	system("pause");
	return 0;
}
// Create function passes 3 parameters (number1 and number2 by value) and total by reference

double calculateAverageAndTotal(double number1, double number2, double& total)
{
	total = number1 + number2;
	return total / 2;
}
// Overloaded the previous function (calculateAverageAndTotal) to take 4 parameters
double calculateAverageAndTotal(double number1, double number2,double number3, double& total)
{
	total = number1 + number2 + number3;
	return total / 3;
}
// Create a new function to calculate total for 3 parameters, one of them is defalut
double addNumbers(double number1, double number2, double number) {
	return number1 + number2 + number ;
}
