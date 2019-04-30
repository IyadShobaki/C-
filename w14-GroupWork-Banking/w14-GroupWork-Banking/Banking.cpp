#include <iostream>
#include <string>
using namespace std;

class Account {

public:
	// remember to add constructor(s)
	void fillAccountData(string nName, double cBalance, double sBalance);
	void displayBalances(Account);
	bool innerTransfer();			//Returns true if successful, false if it fails

private:
	string nickname;
	double CBalance;
	double SBalance;

};	//ALWAYS REMEMBER THIS SEMICOLON!!!!!!

void main()
{
	Account A, B;
	A.fillAccountData("Iyad", 10000000.00, 200.00);
	B.fillAccountData("Eddy", 200.00, 100.00);
	string userSelection;

	while (userSelection != "X")
	{
		cout << "Type 'B' for to check balance" << endl
			<< "'T' to transfer inside your account," << endl
			<< "'D' to make a deposit" << endl
			<< "'W' to withdraw" << endl
			<< "or 'X' to exit" << endl;
		cin >> userSelection;

		if (userSelection == "X") break;
		else if (userSelection == "B")
		{

			//displayBalances(Account)
			//ask user which account and make the function call

		}
		else if (userSelection == "T")
		{
			//innerTransfer()
			//ask user which account and make the function call

		}
		else if (userSelection == "D")
		{
			//deposit()
			//ask user which account and make the function call

		}
		else if (userSelection == "W")
		{
			//withdraw()
			//ask user which account and make the function call

		}
		else
		{

			cout << endl << "Please enter another selection!" << endl << endl;

		}
	}
	cout << endl << endl << "Thank you for banking with Insecure Bank, LLC." << endl;


}
void Account::fillAccountData(string nName, double cBalance, double sBalance)
{
	
		nickname = nName;
		CBalance = cBalance;
		SBalance = sBalance;

}
void Account::displayBalances(Account)
{

}
bool Account::innerTransfer()
{
	return true;
}