/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Week 13 Lab
	4 / 21 / 2019 */
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


class car
{
public:
	//define your functions here, at least 5
	void setName(string carName);
	string getName();
	void setMPG(int carMPG);
	int getMPG();
	void setPrice(double carPrice);
	double getPrice();
	void setHorsepower(int carHorsePower);
	int getHorsepower();
	
	void createObject(string carName, int milepg, double carPrice, int carHorsepower);
	void showInfo();
	void compareCarsByMilage(vector<car>& newCar);
	void compareCarsByPrice(vector<car>& newCar);
	void compareCarsByHorsepower(vector<car>& newCar);

private:
	string name;
	int mpg;
	double price;
	int horsepower;
	// feel free to add more atributes
};

int main()
{
	int firstNumber;
	int secondNumber;
	int thirdNumber;
	char ans;
	char cont;
	double budget;
	vector<car> newCar;
	// create you objects, call your functions
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	car car1, car2, car3, car4, car5, compare;
	cout << left << setw(5) << " ";
	cout << left << setw(20) << "Car name";
	cout << right << setw(20) << "Milage per/hour";
	cout << right << setw(17) << "Price";
	cout << right << setw(25) << "Horsepower";
	cout << endl;
	cout << "--------------------------------------------------------------------------------------------" << endl;

	car1.createObject("Toyota Camry 2018",35, 23000, 250);
	cout << "1- ";
	car1.showInfo();
	car2.createObject("Honda Civic 2018", 37, 19000, 190);
	cout << "2- ";
	car2.showInfo();
	car3.createObject("Nissan Maxima 2018", 25, 33000, 300);
	cout << "3- ";
	car3.showInfo();
	car4.createObject("Lexus IS 2018", 25, 38000, 270);
	cout << "4- ";
	car4.showInfo();
	car5.createObject("Mazda6 2018", 30, 22000, 200);
	cout << "5- ";
	car5.showInfo();
	cout << "--------------------------------------------------------------------------------------------" << endl;

	do {
		cout << "Select 3 cars to compare by number: " << endl;
		do {
			cout << "Select 1st car: ";
			cin >> firstNumber;
			if (firstNumber == 1) {
				newCar.push_back(car1);
				break;
			}
			else if (firstNumber == 2) {
				newCar.push_back(car2);	
				break;
			}
			else if (firstNumber == 3) {
				newCar.push_back(car3);	
				break;
			}
			else if (firstNumber == 4) {
				newCar.push_back(car4);
				break;
			}
			else if (firstNumber == 5) {
				newCar.push_back(car5);
				break;
			}
			else {
				cout << "Invalid input!" << endl;
				cont = 'N';
			}
			}while (cont = 'N');
		
			do {
				cout << "Select 2nd car: ";
				cin >> secondNumber;
				if (secondNumber == firstNumber) {
					cout << "Invalid input" << endl;
					cont = 'N';
				}
				else if (secondNumber == 1) {
					newCar.push_back(car1);
					break;
				}
				else if (secondNumber == 2) {
					newCar.push_back(car2);
					break;
				}
				else if (secondNumber == 3) {
					newCar.push_back(car3);
					break;
				}
				else if (secondNumber == 4) {
					newCar.push_back(car4);
					break;
				}
				else if (secondNumber == 5) {
					newCar.push_back(car5);
					break;
				}
				else {
					cout << "Invalid input!" << endl;
					cont = 'N';
				}
			} while (cont = 'N');
			do {
				cout << "Select 3rd car: ";
				cin >> thirdNumber;
				if (thirdNumber == firstNumber || thirdNumber == secondNumber) {
					cout << "Invalid input!" << endl;
					cont = 'N';
				}
				else if (thirdNumber == 1) {
					newCar.push_back(car1);
					break;
				}
				else if (thirdNumber == 2) {
					newCar.push_back(car2);
					break;
				}
				else if (thirdNumber == 3) {
					newCar.push_back(car3);
					break;
				}
				else if (thirdNumber == 4) {
					newCar.push_back(car4);
					break;
				}
				else if (thirdNumber == 5) {
					newCar.push_back(car5);
					break;
				}
				else {
					cout << "Invalid input!" << endl;
					cont = 'N';
				}
			} while (cont = 'N');
		
		cout << "Would you like to compare them by Milage (M) or Price (P) or Horsepower(H): ";
		cin >> ans;
		ans = toupper(ans);
		cout << "****************************************************************************" << endl;
		cout << left << setw(4) << " ";
		if (ans == 'M') {
			
			compare.compareCarsByMilage(newCar);
		}
		else if (ans == 'P') {
			
			compare.compareCarsByPrice(newCar);
		}
		else if (ans == 'H') {
			
			compare.compareCarsByHorsepower(newCar);
		}
		cout << "****************************************************************************" << endl;
		cout << "Would you like to start over? Y or N: ";
		cin >> ans;
		ans = toupper(ans);
		if (ans == 'Y') {
			newCar.clear();
		}
		else {
			cout << "Thank you!!!" << endl;
			exit;
		}
	} while (ans == 'Y');
	
	
	system("pause");
	return 0;
}
// define member functions here
void car::createObject(string carName, int milepg, double carPrice, int carHorsepower){
	name = carName;
	mpg = milepg;
	price = carPrice;
	horsepower = carHorsepower;
}
void car::showInfo() {
	cout << left << setw(18) << name;
	cout << right<< setw(5)<< "|";
	cout << right << setw(13) << mpg ;
	cout << right << setw(13) << "|";
	cout << right << setw(12) << price ;
	cout << right << setw(10) << "|";
	cout << right << setw(10) << horsepower;
	cout << right << setw(8) << "|";
	cout << endl;
	
}
void car::setName(string carName) {
	name = carName;
}
string car::getName() {
	return name;
}
void car::setMPG(int carMPG) {
	if (carMPG > 0) {
		mpg = carMPG;
	}
};
int car::getMPG() {
	return mpg;
};
void car::setPrice(double carPrice) {
	if (carPrice > 0) {
		price = carPrice;
	}
};
double car::getPrice() {
	return price;
};
void car::setHorsepower(int carHorsepower) {
	if (carHorsepower > 0) {
		horsepower = carHorsepower;
	}
};
int car::getHorsepower() {
	return horsepower;
};
void car::compareCarsByMilage(vector<car>& newCar) {
	int max = newCar[0].getMPG();
	unsigned int size = newCar.size();
	for (unsigned int i = 0; i < size; i++) {
		if (newCar[i].getMPG() > max)
			max = newCar[i].getMPG();
	}
	if (max == newCar[0].getMPG() && max == newCar[1].getMPG() && max == newCar[2].getMPG()) {
		cout << "All cars milage are equal: " <<
			" ------> " << max << " mpg" << endl;
	}else if (max == newCar[0].getMPG() && max == newCar[1].getMPG()) {
		cout << newCar[0].getName() << " + " << newCar[1].getName() << " have the best milage"
			" ------> " << max << " mpg" << endl;
	}else if (max == newCar[0].getMPG() && max == newCar[2].getMPG()) {
		cout << newCar[0].getName() << " + " << newCar[2].getName() << " have the best milage"
			" ------> " << max << " mpg" << endl;
	}else if (max == newCar[1].getMPG() && max == newCar[2].getMPG()) {
		cout << newCar[1].getName() << " + " << newCar[2].getName() << " have the best milage"
			" ------> " << max << " mpg" << endl;
	}else if (max == newCar[0].getMPG()) {
		cout << "The car with best milage is: " << newCar[0].getName() <<
			" ------> " << max << " mpg" << endl;
	}else if (max == newCar[1].getMPG()) {
		cout << "The car with best milage is: " << newCar[1].getName() <<
			" ------> " << max << " mpg" << endl;
	}else if (max == newCar[2].getMPG()) {
		cout << "The car with best milage is: " << newCar[2].getName() <<
			" ------> " << max << " mpg" << endl;
	}	
};
void car::compareCarsByPrice(vector<car>& newCar) {
	double min = newCar[0].getPrice();
	unsigned int size = newCar.size();
	for (unsigned int i = 0; i < size; i++) {
		if (newCar[i].getPrice() < min)
			min = newCar[i].getPrice();
	}
	if (min == newCar[0].getPrice() && min == newCar[1].getPrice() && min == newCar[2].getPrice()) {
		cout << "All cars Price are equal: " <<
			" ------> " << " $" << min << endl;
	}
	else if (min == newCar[0].getPrice() && min == newCar[1].getPrice()) {
		cout << newCar[0].getName() << " + " << newCar[1].getName() << " have the lowest Price"
			" ------> " << " $" << min << endl;
	}
	else if (min == newCar[0].getPrice() && min == newCar[2].getPrice()) {
		cout << newCar[0].getName() << " + " << newCar[2].getName() << " have the lowset Price"
			" ------> " << " $" << min << endl;
	}
	else if (min == newCar[1].getPrice() && min == newCar[2].getPrice()) {
		cout << newCar[1].getName() << " + " << newCar[2].getName() << " have the lowest Price"
			" ------> " << " $" << min << endl;
	}
	else if (min == newCar[0].getPrice()) {
		cout << "The car with lowest Price is: " << newCar[0].getName() <<
			" ------> " << " $" << min << endl;
	}
	else if (min == newCar[1].getPrice()) {
		cout << "The car with lowest Price is: " << newCar[1].getName() <<
			" ------> " << " $" << min << endl;
	}
	else if (min == newCar[2].getPrice()) {
		cout << "The car with lowest Price is: " << newCar[2].getName() <<
			" ------> " << " $" << min << endl;
	}
};
void car::compareCarsByHorsepower(vector<car>& newCar) {
	int max = newCar[0].getHorsepower();
	unsigned int size = newCar.size();
	for (unsigned int i = 0; i < size; i++) {
		if (newCar[i].getHorsepower() > max)
			max = newCar[i].getHorsepower();
	}
	if (max == newCar[0].getHorsepower() && max == newCar[1].getHorsepower() && max == newCar[2].getHorsepower()) {
		cout << "All cars horsepower are equal: " <<
			" ------> " << max << " hp" << endl;
	}
	else if (max == newCar[0].getHorsepower() && max == newCar[1].getHorsepower()) {
		cout << newCar[0].getName() << " + " << newCar[1].getName() << " have the greatest horsepower"
			" ------> " << max << " hp" << endl;
	}
	else if (max == newCar[0].getHorsepower() && max == newCar[2].getHorsepower()) {
		cout << newCar[0].getName() << " + " << newCar[2].getName() << " have the greatest horsepower"
			" ------> " << max << " hp" << endl;
	}
	else if (max == newCar[1].getHorsepower() && max == newCar[2].getHorsepower()) {
		cout << newCar[1].getName() << " + " << newCar[2].getName() << " have the greatest horsepower"
			" ------> " << max << " hp" << endl;
	}
	else if (max == newCar[0].getHorsepower()) {
		cout << "The car with greatest horsepower is: " << newCar[0].getName() <<
			" ------> " << max << " hp" << endl;
	}
	else if (max == newCar[1].getHorsepower()) {
		cout << "The car with greatest horsepower is: " << newCar[1].getName() <<
			" ------> " << max << " hp" << endl;
	}
	else if (max == newCar[2].getHorsepower()) {
		cout << "The car with greatest horsepower is: " << newCar[2].getName() <<
			" ------> " << max << " hp" << endl;
	}
};

