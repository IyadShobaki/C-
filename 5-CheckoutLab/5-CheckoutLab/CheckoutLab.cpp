/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Week 5 - Checkout Lab
	2 / 13 / 2019 */
#include <iostream>
using namespace std;

double totalItemsPrice();
double totalAfterTax(double tax);
double totalAfterCoupon(int coupon, double total);

int main() 
{
	int coupon;
	double total = totalItemsPrice();
	if (total > 0) {
		double newTotal = totalAfterTax(total);
		cout << "Total after tax = " << newTotal << endl;
		
		cout << "Please enetr coupon number: ";
		cin >> coupon;
		double finalBill = totalAfterCoupon(coupon, newTotal);
		if (finalBill <= 5 && (coupon % 10 == 1 || coupon % 10 == 5)) {
			cout << "Your Final bill is: 0\n"; 
		}
		else {
			cout << "Your Final bill is: " << finalBill << endl;
		}
	
	}
	else {
		cout << "Your total is: " << total << endl;
	}
	
	
	system("pause");


}


double totalItemsPrice()
{
	
	int item = 0;
	double price;
	int quantity;
	double total;
	double sum = 0;
	char ans;


		
		do {
			item++;
			cout << "Please enter item " << item << " Price:\n";
			cin >> price;
			while (price < 0) {
				cout << "\nPlease enter a number greater than -1! ";
				cout << "\nitem price: \n";
				cin >> price;
				
			}
			cout << "Please enetr item " << item << " quantity:\n";
			cin >> quantity;
			while (quantity < 0) {
				cout << "\nPlease enter a number greater than -1! ";
				cout << "\nitem quantity: \n";
				cin >> quantity;

			}
			total = price * quantity;
			sum = sum + total;
			cout << "Would you like to add another item? Y or N\n";
			cin >> ans;
			ans = toupper(ans);

		} while (ans == 'Y');
		
		

	
	

		return sum;
}
double totalAfterTax(double tax) {
	
	return tax + tax * .05;
}
double totalAfterCoupon(int coupon, double total) {
	if (coupon % 10 == 1) {
		return total / 2;
	}
	else if (coupon % 10 == 5) {
		return total - 5;
	}
	else {
		cout << "Invalid coupon\n";
		return total;
	}
}