//#include <iostream>
//using namespace std;
//const int DECLARED_SIZE = 20;
//
//void fillArray(int a[], int size, int& numberUsed);
//
//int search(const int a[], int numberUsed, int target);
//
//int main()
//{
//	int arr[DECLARED_SIZE], listSize, target;
//
//	fillArray(arr, DECLARED_SIZE, listSize);
//
//	char ans;
//	int result;
//	do
//	{
//		cout << "Enter a number to search for: ";
//		cin >> target;
//
//		result = search(arr, listSize, target);
//		if (result == -1)
//			cout << target << " is not on the list.\n";
//		else
//			cout << target << " is stored in array postion "
//			<< result << endl
//			<< " (Remember: The first position is 0.)\n";
//	
//		cout << "Search again? (y/n followed by return): ";
//		cin >> ans;
//
//	} while ((ans != 'n') && (ans != 'N'));
//
//	cout << "End of program.\n";
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
//
//	}
//	numberUsed = index;
//}
//
//int search(const int a[], int numberUsed, int target)
//{
//	int index = 0;
//	bool found = false;
//	while ((!found) && (index < numberUsed))
//		if (target == a[index])
//			found = true;
//		else
//			index++;
//	if (found)
//		return index;
//	else
//		return -1;
//}