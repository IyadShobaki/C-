/*--Iyad Shobaki
	SPRING 2019 C++ PROGRAMMING - CSE233
	Professor  Tyler Schrock
	Week 12 Lab
	4 / 10 / 2019 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student
{
	string firstName;
	string lastName;
	double GPA;
	double ACT;
	double SAT;
};

void getStudentInfo(Student& student);
string evaluateStudent(double gpa, double act, double sat);
int main()
{

	vector<string> vStudent;
	vector<string> vLevel;
	char ans;
	do {
		
		Student student;
		getStudentInfo(student);
		string str = "Student " + student.firstName + " " + student.lastName
			+ " is doing " + evaluateStudent(student.GPA, student.ACT, student.SAT) + "\n";
		cout << str;
		vStudent.push_back(str);
		string str1 = evaluateStudent(student.GPA, student.ACT, student.SAT);
		vLevel.push_back(str1);
		cout << "Would you like to add another student? Y or N ";
		cin >> ans;
		ans = toupper(ans);
		if (ans == 'Y') {
			system("cls");
		}
		else { 
			system("cls");
			break; }
	
	} while (1);



	for (int i = 0; i < vStudent.size(); i++) {
		cout << i+1 << "-" << vStudent[i] ;

	}
	
	if (vStudent.size() > 1) {
		cout << vStudent.size() << " students total\n";
		cout << "would you like to compare two students?";
		cin >> ans;
		ans = toupper(ans);
		if (ans == 'Y') {
			
			cout << "Enter the number of first student: ";
			int first;
			cin >> first;
			cout << "Enter the number of second student: ";
			int second;
			cin >> second;

			if (vLevel.at(first - 1) == "EXCELLENT" && vLevel.at(second - 1) == "EXCELLENT") {
				cout << "Both of students are EXCELLENT!!!";
			}
			else if (vLevel.at(first - 1) == "GOOD" && vLevel.at(second - 1) == "GOOD") {
				cout << "Both of students are GOOD!";
			}
			else if (vLevel.at(first - 1) == "OK" && vLevel.at(second - 1) == "OK") {
				cout << "Both of students are OK.";
			}
			else if (vLevel.at(first - 1) == "BAD" && vLevel.at(second - 1) == "BAD") {
				cout << "Both of students are need to study more.";
			}
			else if (vLevel.at(first - 1) == "EXCELLENT" && vLevel.at(second - 1) != "EXCELLENT") {
				cout << "Student number " << first << " is better";
			}
			else if (vLevel.at(first - 1) == "GOOD" && (vLevel.at(second - 1) != "EXCELLENT" || vLevel.at(second - 1) != "GOOD")) {
				cout << "Student number " << first << " is better";
			}
			else if (vLevel.at(first - 1) == "OK" && (vLevel.at(second - 1) != "EXCELLENT" || vLevel.at(second - 1) != "GOOD" || vLevel.at(second - 1) != "OK")) {
				cout << "Student number " << first << " is better";
			}
			else if (vLevel.at(second - 1) == "EXCELLENT" && vLevel.at(first - 1) != "EXCELLENT") {
				cout << "Student number " << second << " is better";
			}
			else if (vLevel.at(second - 1) == "GOOD" && (vLevel.at(first - 1) != "EXCELLENT" || vLevel.at(first - 1) != "GOOD")) {
				cout << "Student number " << second << " is better";
			}
			else if (vLevel.at(second - 1) == "OK" && (vLevel.at(first - 1) != "EXCELLENT" || vLevel.at(first - 1) != "GOOD" || vLevel.at(first - 1) != "OK")) {
				cout << "Student number " << second << " is better";
			}
			
			


		}
	}
	cout << endl;

	
	system("pause");
	return 0;
}

void getStudentInfo(Student& student)
{
	cout << "Enter student first name: ";
	cin >> student.firstName;
	cout << "Enter student last name: ";
	cin >> student.lastName;
	cout << "Enter student GPA (scale (0.0 - 4.0) or any other number to skip): ";
	double gpa;
	cin >> gpa;
	if (gpa < 0 || gpa > 4) {
		student.GPA = 0;
	}
	else {
		student.GPA = gpa;
	}

	
	cout << "Enter student ACT (scale (1 - 36) or any other number to skip): ";
	double act;
	cin >> act;
	if (act < 1 || act > 36 ) {
		student.ACT = 0;
	}else {
		student.ACT = act;
	}
	
	cout << "Enter student SAT (scale (400 - 1600) or any other number to skip): ";
	double sat;
	cin >> sat;
	if (sat < 400 || sat > 1600 ) {
		student.SAT = 0;
	}else {
		student.SAT = sat;
	}
}

string evaluateStudent(double gpa, double act, double sat)
{
	double actEvaluation = act / 120;
	double satEvaluation = sat / 4800;
	double gpaEvaluation = actEvaluation + satEvaluation + gpa;
	if (gpaEvaluation >= 3.7) {
		return "EXCELLENT";
	}
	else if (gpaEvaluation > 3 && gpaEvaluation < 3.7) {
		return "GOOD";
	}
	else if (gpaEvaluation > 2 && gpaEvaluation <= 3) {
		return "OK";
	}
	else {
		return "BAD";
	}
}
