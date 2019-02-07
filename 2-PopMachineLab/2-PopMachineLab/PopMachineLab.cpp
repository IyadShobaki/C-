/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Pop Machine Lab
	1 / 24 / 2019 */
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	double money;
	char Pop;
	double price;
	string select;
	double sum = 0;
	
	

		
		cout << "Please enter amount of money:\n";
		start:
		cin >> money;
		if (money > 0) {

			cout << "Please enter a char from A - F:\n";
			cin >> Pop;
			Pop = toupper(Pop);

			switch (Pop)
			{
			case 'A':
				select = "Coca Cola";
				price = 3.00;
				sum = money - price;
				break;
			case 'B':
				select = "Pepsi";
				price = 2.30;
				sum = money - price;
				break;
			case 'C':
				select = "MtnDew";
				price = 1.90;
				sum = money - price;
				break;
			case 'D':
				select = "Dr.Pepper";
				price = 2.50;
				sum = money - price;
				break;
			case 'E':
				select = "Sprite";
				price = 3.20;
				sum = money - price;
				break;
			case 'F':
				select = "Diet Coca Cola";
				price = 2.00;
				sum = money - price;
				break;
			case 'G':
				select = "Diet Pepsi";
				price = 2.00;
				sum = money - price;
				break;
			default:
				select = "invalid choice";
				price = 0;

				
			}
			cout << fixed;
			cout << setprecision(2);

			cout << "\nYou choosed " << select << " and it cost $" <<  price << "\n";
			if (sum >= 0) {
				cout << "\nYour change is $" << sum << "\n\n";

			}
			else if (sum < 0) {
				cout << "\nYou didn't enter enough money, Please try again\nEnter amount of money:\n";
				goto start;
			}
		}
		else {
			cout << "Please enter valid amount of money:\n";
			goto start;
		}
	
	system("pause");
	return 0;
}