/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Coin Counter Lab
	2 / 6 / 2019 */
#include <iostream>
#include <cmath>
using namespace std;

double totalCoins(int penny, int nickel, int dime, int quarter);


int main()
{
	int penny;
	int nickel;
	int dime;
	int quarter;
	char ans;
	cout << "Enter how many pennies you have:\n";
	cin >> penny;
	cout << "Enter how many nickles you have:\n";
	cin >> nickel;
	cout << "Enter how many dimes you have:\n";
	cin >> dime;
	cout << "Enter how many quarters you have:\n";
	cin >> quarter;
	
	if (penny >= 0 && nickel >= 0 && dime >= 0 && quarter >= 0) {
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "The total value of the coins is: $" << totalCoins(penny, nickel, dime, quarter) << endl;
		
	}
	else {

		cout << "Please insert positive numbers.\n";
		cout << "Do you want to start again? Y or N?\n";
		cin >> ans;
		if (ans == 'y' || ans == 'Y') {
			main();
		}
		else {
			exit(1);
		}
	}
	
	system("pause");
	return 0;

}

double totalCoins(int penny, int nickel, int dime, int quarter )
{
	int total;
	total = (penny + (nickel * 5) + (dime * 10) + (quarter * 25));

	double subtotal = 0;
	subtotal = ((float)total / 100);
	
	return subtotal;

}