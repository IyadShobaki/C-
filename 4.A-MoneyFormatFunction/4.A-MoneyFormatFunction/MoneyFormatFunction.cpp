/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Format Money Output Lab
	2 / 6 / 2019 */

#include <iostream>
#include <cmath>
using namespace std;

void money(double number);


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


void money(double number)
{

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "$" << number << endl;

}