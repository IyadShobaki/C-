/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Car Facts Lab
	1 / 16 / 2019 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string make;
	string model;
	int year;
	double mileage;
	string color;

	cout << "Please enter a car make:\n";
	cin >> make;
	cout << "Please enter a car model:\n";
	cin >> model;
	cout << "Please enter a car year:\n";
	cin >> year;
	cout << "Please enter a car mileage:\n";
	cin >> mileage;
	cout << "Please enter a car color:\n";
	cin >> color;
	 
	cout << "The car is " << color <<" " << year << " " << make << " " << model << " with " << mileage << " miles.\n";

	if (mileage > 100000)
		cout << "The car has a lot of miles!\n";


	system("pause");
	return 0;
}