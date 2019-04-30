/* The purpose of this program is to create a student database.
	This version of the program is using vector to save student data.*/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <iomanip>
using namespace std;

class Student
{
private:
	string firstName;
	string lastName;
	int gradeYear;
	vector<string> courses;
	double payment;
	double tuitionBalance = 0.0;
	const int costOfCourse = 500;
	int id = 1000;
	int studentID;
public:
	Student();
	~Student();
	void input(string fname, string lname, int year);
	void setStudentID(int increament);
	string getStudentID();
	void courseEnrollment();
	void setTuitionBalance(double balance);
	double getTuitionBalance();
	string getStudentFirstName();
	void makePayment();
	void output();
	void clearCourseEnrollment();
};

int main()
{
	char ans;
	int choice;
	string fname;
	string lname;
	int year;
	string answer;
	vector<Student *> vStudent;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	int numberOfStudent = 0;
	int s = 0;
	
	while (1) {
		vStudent.push_back(new Student());
		cout << "Enter student first name: ";
		cin >> fname;
		cout << "Enter student last name: ";
		cin >> lname;
		cout << "Enter student garde year:\n1- Freshman\n2- Sophmore\n3- Junior\n4- Senior\n";
		cin >> year;
		
		while ((year < 1) || (year > 4)){
			
			cout << "Enter a number between 1 - 4: ";
			cin >> year;

		} 
		
		
		vStudent[numberOfStudent]->input(fname, lname, year);
		vStudent[numberOfStudent]->setStudentID(numberOfStudent + 1);
		cout << "*************************" << endl;
		cout << "Student ID: " << vStudent[numberOfStudent]->getStudentID() << endl;
		cout << "*************************" << endl;
		vStudent[numberOfStudent]->courseEnrollment();
		cout << "*************************" << endl;
		cout << "Your tuition balance: $" << vStudent[numberOfStudent]->getTuitionBalance() << endl;
		cout << "*************************" << endl;
		vStudent[numberOfStudent]->makePayment();

		cout << "Would you like to add another student? Y or N: ";
		cin >> ans;
		ans = toupper(ans);
		if (ans == 'Y') {
			numberOfStudent++;
		}
		else {
			break;
		}
	}
	
	do {
		
		cout << "*************************" << endl;
		cout << "Search/Update menu: " << endl;
		cout << "*************************" << endl;
		cout << left << setw(4) << "";
		cout << "1-> Show all records" << endl;
		cout << left << setw(4) << "";
		cout << "2-> Search for student by studentID" << endl;
		cout << left << setw(4) << "";
		cout << "3-> Update record" << endl;
		cout << left << setw(4) << "";
		cout << "4-> Delete record" << endl;
		cout << left << setw(4) << "";
		cout << "5-> Add a student" << endl;
		cin >> choice;
		while ((choice < 1) || (choice > 5)) {
			cout << "Enter a number between 1 - 5: ";
			cin >> choice;
		}
		if (choice == 1) {
			for (int i = 0; i < vStudent.size(); i++) {
				cout << "************************************" << endl;
				if (vStudent[i]->getStudentFirstName() == "") {
					cout << vStudent[i]->getStudentID() << " Deleted record!" << endl;
				}
				else {
					vStudent[i]->output();
				}
				cout << "************************************" << endl;
			}
		}
		if (choice == 2) {
			cout << "Enter student id: ";
			cin >> answer;
			for (int i = 0; i < vStudent.size(); i++) {
				if (vStudent[i]->getStudentID() == answer) {
					s = i;
					break;
				}
				else {
					s = -1;

				}
			}
			if (s != -1) {
				if (vStudent[s]->getStudentFirstName() == "") {
					cout << vStudent[s]->getStudentID() << " Deleted record!" << endl;
				}
				else {
					vStudent[s]->output();
				}
			}
			else {
				cout << "Student not found!" << endl;
			}

		}

		if (choice == 3) {
			cout << "Enter student id: ";
			cin >> answer;
			for (int i = 0; i < vStudent.size(); i++) {
				if (vStudent[i]->getStudentID() == answer) {
					s = i;
					break;
				}
				else {
					s = -1;

				}
			}
			if (s != -1) {
				if (vStudent[s]->getStudentFirstName() == "") {
					cout << vStudent[s]->getStudentID() << " Deleted record! Can not be updated." << endl;
				}
				else {
				cout << "Enter student first name: ";
					cin >> fname;
					cout << "Enter student last name: ";
					cin >> lname;
					cout << "Enter student grade year\n1- Freshman\n2- Sophmore\n3- Junior\n4- Senior\n";
					cin >> year;
					vStudent[s]->input(fname, lname, year);
					if (vStudent[s]->getStudentID() == answer) {
				
					}
					else {
						cout << "*************************" << endl;
						cout << "Student grade year has been updated. Your new Student ID: " << vStudent[s]->getStudentID() << endl;
						cout << "*************************" << endl;
					}
					
					cout << "Would you like to add course/s, start over or keep the same courses? A, S or K: ";
					cin >> ans;
					ans = toupper(ans);
					if (ans == 'A') {
						vStudent[s]->courseEnrollment();
					}
					else if (ans == 'S') {
						vStudent[s]->clearCourseEnrollment();
						cout << "Enter course/s name/s: " << endl;
						vStudent[s]->courseEnrollment();
					}
					else {
						cout << "Your courses will be the same!" << endl;
					}
					cout << "Your tuition balance: $" << vStudent[s]->getTuitionBalance() << endl;
					vStudent[s]->makePayment();
				}

			}
			else {
				cout << "Student not found!" << endl;
			}
		}
		if (choice == 4) {
			cout << "Enter student id: ";
			cin >> answer;
			for (int i = 0; i < vStudent.size(); i++) {
				if (vStudent[s]->getStudentID() == answer) {
					s = i;
					break;
				}
				else {
					s = -1;

				}
			}
			if (s != -1) {								

				vStudent[s]->~Student();
				cout << "Record deleted!" << endl;

			}
			else {
				cout << "Student not found!" << endl;
			}

		}
		if (choice == 5) {
			vStudent.push_back(new Student());
			numberOfStudent++;
			cout << "Enter student first name: ";
			cin >> fname;
			cout << "Enter student last name: ";
			cin >> lname;
			cout << "Enter student garde year:\n1- Freshman\n2- Sophmore\n3- Junior\n4- Senior\n";
			cin >> year;

			while ((year < 1) || (year > 4)) {

				cout << "Enter a number between 1 - 4: ";
				cin >> year;

			}


			vStudent[numberOfStudent]->input(fname, lname, year);
			vStudent[numberOfStudent]->setStudentID(numberOfStudent + 1);
			cout << "*************************" << endl;
			cout << "Student ID: " << vStudent[numberOfStudent]->getStudentID() << endl;
			cout << "*************************" << endl;
			vStudent[numberOfStudent]->courseEnrollment();
			cout << "*************************" << endl;
			cout << "Your tuition balance: $" << vStudent[numberOfStudent]->getTuitionBalance() << endl;
			cout << "*************************" << endl;
			vStudent[numberOfStudent]->makePayment();
		}
		cout << "Would you like to go back to Search/Update menu? (Y) or (N to quit): ";
		cin >> ans;
		ans = toupper(ans);
		if (ans == 'Y') {

		}
		else {
			break;
		}
	} while (1 != 0);

	
	for (vector< Student *>::iterator it = vStudent.begin(); it != vStudent.end(); ++it)
	{
		delete (*it);
	}
	vStudent.clear();

	system("pause");
	return 0;
}

Student::Student()
{

}
Student::~Student()
{
	
	clearCourseEnrollment();
}
string Student::getStudentFirstName() {
	return firstName;
}
void Student::courseEnrollment()
{
	int numbers = 0;
	string course;
	cout << "Enter course name ('English', 'Math' 'English Composition', 'History', ...) to enroll: or S to STOP:" << endl;
	while (1) {
		numbers++;
		cout << numbers << "- COURSE NAME: ";
		do {
			getline(cin, course);
		} while (course.empty());

		transform(course.begin(), course.end(), course.begin(), ::toupper);
		if (course == "S")
		{
			break;
		}
		else {
			courses.push_back(course);
		}
	}
	

}
void Student::clearCourseEnrollment() {
	courses.clear();
	tuitionBalance = 0.0;
}
void Student::input(string fname, string lname, int year)
{

	firstName = fname;
	lastName = lname;
	gradeYear = year;


}
void Student::setStudentID(int increament) {
	
		studentID = id + increament;
	
	
}
string Student::getStudentID() {
	string str;
	str = to_string(gradeYear) + "" + to_string(studentID);
	return str;
}
void Student::makePayment()
{
	char ans;
	double amount;
	cout << "Would you like to make a payment? Y or N: ";
	cin >> ans;
	ans = toupper(ans);
	if (ans == 'Y') {
		cout << "Enter amount: $";
		cin >> amount;
		if (amount > 0) {
			payment = amount;
		}
		else {
			cout << "Invalid number!" << endl;
		}
	}
}
double Student::getTuitionBalance() {
	tuitionBalance = 0.0;
	for (unsigned int i = 0; i < courses.size(); i++) {
		tuitionBalance = tuitionBalance + costOfCourse;
	}
	return tuitionBalance;
}
void Student::setTuitionBalance(double balance) {
	tuitionBalance = balance;
}
void Student::output()
{
	cout << endl;
	cout << "StudentID: " << getStudentID() << endl;
	cout << "Student first name: " << firstName << endl;
	cout << "Student last name: " + lastName << endl;
	cout << "Student grade year: ";
	switch (gradeYear) {
			case 1:
				cout << "Freshman" << endl; 
				break;
			case 2:
				cout << "Sophmore" << endl;
				break;
			case 3:
				cout << "Junior" << endl;
				break;
			case 4:
				cout << "Senior" << endl;
			}
	cout << "Student courses: " << endl;
	for (int counter = 0; counter < courses.size(); counter++)
	{
		cout << left << setw(4) << "";
		cout << to_string(counter + 1) + "-" + courses[counter] << endl;

	}
	cout << "Student tutition balance: " << endl;

	if ((payment > 0)) {
		cout << left << setw(4) << "";
		cout << "Your original tuition balance: $" << tuitionBalance << endl;
		cout << left << setw(4) << "";
		cout << "Your tuition balance after the payment of ($" << payment << ") is $" << tuitionBalance - payment << endl;
	}
	else {
		cout << left << setw(4) << "";
		cout << "Your tuition balance: $" << tuitionBalance << endl;
	}

}
