#include <iostream>
using namespace std;

int calculateAverageAndTotal(int num1, int num2, int& total, int num3 = -1 );

int calculateAverageAndTotal(int num1, int num2, int& total, int num3  ) {
	if (num3 != -1) {
		total = num1 + num2 + num3;
		return total / 3;
	}
	else {
		total = num1 + num2;
		return total / 2;
	}
}
int main()
{
	int num1, num2, num3, total , average;
	 
	
		cout << "Please enetr a number: ";
		cin >> num1;
		cout << "Please enetr a number: ";
		cin >> num2;
		cout << "Please enetr a number: ";
		cin >> num3;
		average = calculateAverageAndTotal(num1, num2, total);
		cout << "The average is " << average << " and the total is " << total << endl;
	
		system("pause");
		return 0;
}
//void getNumbers(int& input1, int& input2);
//
//void swapValues(int& variable1, int& variable2);
//
//void showResult(int output1, int output2);
//
//int main() {
//	int firstNum, secondNum;
//
//	getNumbers(firstNum, secondNum);
//	swapValues(firstNum, secondNum);
//	showResult(firstNum, secondNum);
//
//	system("pause");
//	return 0;
//
//}
//void getNumbers(int& input1, int& input2) {
//	cout << "Enetr two integers: ";
//	cin >> input1 >> input2;
//}
//void swapValues(int& variable1, int& variable2) {
//	int temp;
//
//	temp = variable1;
//	variable1 = variable2;
//	variable2 = temp;
//}
//void showResult(int output1, int output2) {
//	cout << "In reverse order the numbers are: " << output1 << " " << output2 << endl;
//}