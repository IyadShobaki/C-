//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//const int NUMBER_OF_PLANTS = 4;
//
//void inputData(int a[], int lastPlantNumber);
//
//void scale(int a[], int size);
//
//void graph(const int asteriskCount[], int lastPlantNumber);
//
//void getTotal(int& sum);
//
//int round(double number);
//
//void printAsterisks(int n);
//
//int main()
//{
//	int production[NUMBER_OF_PLANTS];
//
//	cout << "This program displays a graph showing\n"
//		<< "production for each plant in hte company.\n";
//
//	inputData(production, NUMBER_OF_PLANTS);
//	scale(production, NUMBER_OF_PLANTS);
//	graph(production, NUMBER_OF_PLANTS);
//
//	system("pause");
//	return 0;
//
//
//}
//
//void inputData(int a[], int lastPlantNumber)
//{
//	for (int plantNumber = 1; plantNumber <= lastPlantNumber; plantNumber++)
//	{
//		cout << endl
//			<< "Enter production data for plant number "
//			<< plantNumber << endl;
//		getTotal(a[plantNumber - 1]);
//
//	}
//}
//void getTotal(int& sum)
//{
//	cout << "Enter number of units produced by each department.\n"
//		<< "Append a negative number to the end of the list.\n";
//	sum = 0;
//	int next;
//	cin >> next;
//	while (next >= 0)
//	{
//		sum = sum + next;
//		cin >> next;
//	}
//	cout << "Total = " << sum << endl;
//}
//
//void scale(int a[], int size)
//{
//	for (int index = 0; index < size; index++)
//		a[index] = round(a[index] / 1000.0);
//}
//
//int round(double number)
//{
//	return static_cast<int>(floor(number + 0.5));
//}
//
//void graph(const int asteriskCount[], int lastPlantNumber)
//{
//	cout << "\nUnits produced in thousands of units:\n";
//	for (int plantNumber = 1; plantNumber <= lastPlantNumber; plantNumber++)
//	{
//		cout << "Plant #" << plantNumber << " ";
//		printAsterisks(asteriskCount[plantNumber - 1]);
//		cout << endl;
//	}
//
//}
//
//void printAsterisks(int n)
//{
//	for (int count = 1; count <= n; count++)
//		cout << "*";
//}