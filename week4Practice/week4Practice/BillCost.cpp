
#include <iostream>
#include <cmath>
using namespace std;

void money(double number);
//Assumes number >= 0.  
//Returns number rounded to the nearest integer.

int main()
{
	double moneyValue;
	char ans;

	do
	{
		cout << "Enter a double value: ";
		cin >> moneyValue;
		money(moneyValue);
		cout << "Again? (y/n): ";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	cout << "End of testing.\n";

	system("pause");
	return 0;


}

//Uses cmath:
void money(double number)
{
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "$" << number << endl;
	
}

//#include <iostream>
//#include <string>
//using namespace std;
//
//
//// Grade number and name
//int main(){
//
//int grade;
//string yourGrade = "";
//char ans;
//
//
//do
//
//{
//	cout << "Please enter a grade number between 1 and 12\n";
//	cin >> grade;
//
//	switch (grade)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		yourGrade = "elementary";
//		cout << "\nYour grade is: " << yourGrade << "\n";
//		break;
//	case 6:
//	case 7:
//	case 8:
//		yourGrade = "middle";
//		cout << "\nYour grade is: " << yourGrade << "\n";
//		break;
//	case 9:
//	case 10:
//	case 11:
//	case 12:
//		yourGrade = "high school";
//		cout << "\nYour grade is: " << yourGrade << "\n";
//		break;
//	default:
//		yourGrade = "INVALID";
//		cout << "\nYour grade is: " << yourGrade << "\n";
//	}
//
//	cout << "Do you want to check another grade? Y or N ?";
//	cin >> ans;
//} while (ans == 'y' || ans == 'Y');
//
//system("pause");
//return 0;
//}


//double totalCost(int numberParameter, double priceParameter);
//
//int main() {
//	double price, bill;
//	int number;
//
//	cout << "Enter the number of items purchased: ";
//	cin >> number;
//	cout << "Enter the price per item $";
//	cin >> price;
//
//	bill = totalCost(number, price);
//
//	cout.setf(ios::fixed);
//	cout.setf(ios::showpoint);
//	cout.precision(2);
//
//	cout << number << " items at " << "$" << price << " each.\n"
//		<< "Final bill, including tax, is $" << bill
//		<< endl;
//	system("pause");
//	return 0;
//
//}
//double totalCost(int numberParameter, double priceParameter) {
//	const double taxRate = 0.05;
//	double subtotal;
//
//	subtotal = priceParameter * numberParameter;
//	return (subtotal + subtotal * taxRate);
//}
//
//// Dog house example
//int main()
//{
//	const double COST_PER_SQ_FT = 10.50;
//	double budget, area, lengthSide;
//
//	cout << "Enter the amount budgeted for your dog house $";
//	cin >> budget;
//
//	area = budget / COST_PER_SQ_FT;
//	lengthSide = sqrt(area);
//
//	cout.setf(ios::fixed);
//	cout.setf(ios::showpoint);
//	cout.precision(2);
//	cout << "For a price of $" << budget << endl
//		<< "I can build you a luxurious square dog house\n"
//		<< "that is " << lengthSide
//		<< " feet on each side.\n";
//
//	system("pause");
//	return 0;
//}

//// Ice cream division
//
//void iceCreamDivision(int number, double totalWeight);
////Outputs instructions for dividing totalWeight ounces of ice cream among
////number customers. If number is 0, only an error message is output.
//
//int main()
//{
//	int number;
//	double totalWeight;
//
//	cout << "Enter the number of customers: ";
//	cin >> number;
//	cout << "Enter weight of ice cream to divide (in ounces): ";
//	cin >> totalWeight;
//
//	iceCreamDivision(number, totalWeight);
//
//	system("pause");
//	return 0;
//}
//
//void iceCreamDivision(int number, double totalWeight)
//{
//	double portion;
//
//	if (number == 0)
//	{
//		cout << "Cannot divide among zero customers.\n";
//		return;
//	}
//	portion = totalWeight / number;
//	cout << "Each one receives "
//		<< portion << " ounces of ice cream." << endl;
//}





////Computes the average yield on an experimental pea growing patch.
//
//double estimateOfTotal(int minPeas, int maxPeas, int podCount);
////Returns an estimate of the total number of peas harvested.
////The formal parameter podCount is the number of pods.
////The formal parameters minPeas and maxPeas are the minimum
////and maximum number of peas in a pod.
//
//
//
//int main()
//{
//	int maxCount, minCount, podCount;
//	double averagePea, yield;
//
//	cout << "Enter minimum and maximum number of peas in a pod: ";
//	cin >> minCount >> maxCount;
//	cout << "Enter the number of pods: ";
//	cin >> podCount;
//	cout << "Enter the weight of an average pea (in ounces): ";
//	cin >> averagePea;
//
//	yield =
//		estimateOfTotal(minCount, maxCount, podCount) * averagePea;
//
//	cout.setf(ios::fixed);
//	cout.setf(ios::showpoint);
//	cout.precision(3);
//	cout << "Min number of peas per pod = " << minCount << endl
//		<< "Max number of peas per pod = " << maxCount << endl
//		<< "Pod count = " << podCount << endl
//		<< "Average pea weight = "
//		<< averagePea << " ounces" << endl
//		<< "Estimated average yield = " << yield << " ounces"
//		<< endl;
//	system("pause");
//	return 0;
//}
//
//double estimateOfTotal(int minPeas, int maxPeas, int podCount)
//{
//	double averagePea;
//
//	averagePea = (maxPeas + minPeas) / 2.0;
//	return (podCount * averagePea);
//}