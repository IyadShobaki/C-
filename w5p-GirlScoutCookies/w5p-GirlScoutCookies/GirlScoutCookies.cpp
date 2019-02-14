#include <iostream>
#include <cmath>

using namespace std;

double cookiesToCalories();
void caloriesToVegetables(double calories);
void caloriesToActivities(double calories);


void main()


{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	double totalcalories = cookiesToCalories();
	cout << "Total calories: " << totalcalories << "\n";

	caloriesToVegetables(totalcalories);
	caloriesToActivities(totalcalories);

	system("pause");

}

double cookiesToCalories()
{
	double caramelChocolate;
	double caramelDelites;
	double samoas;
	cout << "How many cookies you plan to eat of CARAMEL CHOCOLATE CHIP(170 calories per 3 cookies):\n";
	cin >> caramelChocolate;
	cout << "How many cookies you plan to eat of CARAMEL DELITES(130 calories per 2 cookies):\n";
	cin >> caramelDelites;
	cout << "How many cookies you plan to eat of SAMOAS(140 calories per 2 cookies):\n";
	cin >> samoas;

	double result = ((170 / 3) * caramelChocolate) + ((130 / 2) * caramelDelites) + ((140 / 2) * samoas);
	return result;
}
void caloriesToVegetables(double Vcalories)
{
	char ans;
	double asparagus = 91;
	double broccoli = 154;
	double potato = 318;
	double total;
	cout << "Which of thses vegetables would you like to eat instead of the cookies:\n(A) Asparagus\n(B) Broccoli\n(P) Potato\n";
		cin >> ans;
		ans = toupper(ans);
		switch (ans) {
		case  'A':
			total = Vcalories / asparagus;
			cout << "You can eat " << total << " pound " << " of Asparagus\n";
			break;
		case  'B':
			total = Vcalories / broccoli;
			cout << "You can eat " << total << " pound " << " of Broccoli\n";
			break;
		case  'P':
			total = Vcalories / potato;
			cout << "You can eat " << total << " pound " << " of Potato\n";
			break;
		default:
			cout << "Invalid choice!\n";
		}

}
void caloriesToActivities(double Acalories)
{	
	double total;
	double walking = 7.6;
	double running = 13.2;
	double cycling = 10.8;
	char ans;
	cout << "Which of thses exercises would you like to do to burn the calories you eat:\n(W) Walikng\n(R) Running\n(C) Cycling\n";
	cin >> ans;
	ans = toupper(ans);
	switch (ans) {
	case  'W':
		total = Acalories / walking;
		cout << "You need " << total << " minuts of walking to burn this amount of calories\n";
		break;
	case  'R':
		total = Acalories / running;
		cout << "You need " << total << " minuts of running to burn this amount of calories\n";
		break;
	case  'C':
		total = Acalories / cycling;
		cout << "You need " << total << " minuts of cycling to burn this amount of calories\n";
		break;
	default:
		cout << "Invalid choice!\n";
	}

}