//#include <iostream>
//using namespace std;
//
//struct CDAccountV1
//{
//	double balance;
//	double interestRate;
//	int term;
//};
//struct SavingAccount
//{
//	double balance;
//};
//
//void getData(CDAccountV1& theAcoount);
//
//int main()
//{
//	double trans;
//	char ans;
//	CDAccountV1 account;
//	SavingAccount sAccount;
//	getData(account);
//
//
//	double rateFraction, interest;
//	rateFraction = account.interestRate / 100.0;
//	interest = account.balance*(rateFraction*(account.term / 12.0));
//	account.balance = account.balance + interest;
//
//	cout.setf(ios::fixed);
//	cout.setf(ios::showpoint);
//	cout.precision(2);
//	cout << "When your CD matures in "
//		<< account.term << " months,\n"
//		<< "it will have a balance of $"
//		<< account.balance << endl;
//	cout << "Would you like to add money to your saving account? Y or N\n";
//	cin >> ans;
//	ans = toupper(ans);
//	if (ans == 'Y')
//	{
//		cout << "How much would you like to transfer?\n";
//		cin >> trans;
//		if (trans > account.balance || trans < 0)
//		{
//			cout << "Invalid amount!" << endl;
//		}
//		else
//		{
//			account.balance = account.balance - trans;
//			cout << "New CD account balance is: $" << account.balance << endl;
//			sAccount.balance = trans;
//			cout << "New saving account balance is: $" << sAccount.balance << endl;
//		}
//	}
//	
//	system("pause");
//	return 0;
//}
//void getData(CDAccountV1& theAccount)
//{
//	cout << "Enter account balance: $";
//	cin >> theAccount.balance;
//	cout << "Enter account interest rate: ";
//	cin >> theAccount.interestRate;
//	cout << "Enter the number of months until maturity: ";
//	cin >> theAccount.term;
//}