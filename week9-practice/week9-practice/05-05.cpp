//#include <iostream>
//using namespace std;
//const int MAX_NUMBER_SCORES = 10;
//
//void fillArray(int a[], int size, int& numberUsed);
//
//double computeAverage(const int a[], int numberUsed);
//
//void showDifference(const int a[], int numberUsed);
//
//int main()
//{
//	int score[MAX_NUMBER_SCORES], numberUsed;
//
//	cout << "This program reads golf scores and shows\n"
//		<< "how much each differs from the average.\n";
//
//	cout << "Enter golf scores:\n";
//	fillArray(score, MAX_NUMBER_SCORES, numberUsed);
//	showDifference(score, numberUsed);
//
//	system("pause");
//	return 0;
//}
//void fillArray(int a[], int size, int& numberUsed)
//{
//	cout << "Enter up to " << size << " nonnegative whole numbers.\n"
//		<< "Mark the end of the list with a negative number.\n";
//
//	int next, index = 0;
//	cin >> next;
//	while ((next >= 0) && (index < size))
//	{
//		a[index] = next;
//		index++;
//		cin >> next;
//	}
//	numberUsed = index;
//}
//
//double computeAverage(const int a[], int numberUsed)
//{
//	double total = 0;
//	for (int index = 0; index < numberUsed; index++)
//		total = total + a[index];
//	if (numberUsed > 0)
//	{
//		return (total / numberUsed);
//	}
//	else
//	{
//		cout << "ERROR: number of elements is 0 in computeAverage.\n"
//			<< "computeAverage returns 0.\n";
//		return 0;
//	}
//
//}
//
//void showDifference(const int a[], int numberUsed)
//{
//	double average = computeAverage(a, numberUsed);
//	cout << "Average of the " << numberUsed
//		<< " scores = " << average << endl
//		<< "The scores are:\n";
//	for (int index = 0; index < numberUsed; index++)
//		cout << a[index] << " differs from average by "
//		<< (a[index] - average) << endl;
//}