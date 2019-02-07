/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Number Guessing Game
	1 / 29 / 2019 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	char answer;
	int number;
	int num;
	int choice;
	int attempt = 3;
	int num1 ;
	int num2 ;
	int number1;
	
	cout << "Would you like to play guessing number between 1 and 10 or between two numbers from your choice? (1) or (2)\n";
	cin >> choice;
	if (choice == 1) {
		number = rand() % 10 + 1;
		do
		{

		start:
			cout << "Guess a number between 1 and 10. You have " << attempt << " attempts\n";
			cin >> num;
			if (num < (number - 2)) {
				cout << "Your guess is too low!\n";
			}
			else if (num > (number + 2)) {
				cout << "Your guess is too high!\n";
			}
			else if (num < number) {
				cout << "Your guess is low\n";
			}
			else if (num > number) {
				cout << "Your guess is high\n";
			}
			else {
				cout << "Your guess is right. Good job!!\n";
			}
			attempt--;

		} while (num != number && attempt > 0);
		
			cout << "Would you like to play a gain? Y or N\n";
			cin >> answer;
			answer = toupper(answer);
			if (answer == 'Y') {
				attempt = 3;
				number = rand() % 10 + 1;
				goto start;
			}	
		
	}
	else if(choice == 2) {
	
		cout << "Enter first number (greater than 0)\n";
		cin >> num1;
		cout << "Enter second number(greater than first number)\n";
		cin >> num2;
		int total = num2 - num1;
		number1 = rand() % (total + 1) + num1;
		if (num1 > 0 && num2 > 0 && num2 > num1) {
			do {
			start1:
				cout << "Guess a number between " << num1 << " and " << num2 << ". You have " << attempt << " attempts\n";
				cin >> num;
				if (num < (number1 - 2)) {
					cout << "Your guess is too low!\n";
				}
				else if (num > (number1 + 2)) {
					cout << "Your guess is too high!\n";
				}
				else if (num < number1) {
					cout << "Your guess is low\n";
				}
				else if (num > number1) {
					cout << "Your guess is high\n";
				}
				else {
					cout << "Your guess is right. Good job!!\n";
				}
				attempt--;

			} while (num != number1 && attempt > 0);

			cout << "Would you like to play a gain? Y or N\n";
			cin >> answer;
			answer = toupper(answer);
			if (answer == 'Y') {
				attempt = 3;
				number1 = rand() % (total + 1) + num1;
				goto start1;
			}

		}
		else {
			cout << "All numbers should be greater than zero and second number greater than first number.\nPlease try again later\n";
		}
	}

		cout << "Thank you!\n";
		system("pause");
		return 0;
		
		


}