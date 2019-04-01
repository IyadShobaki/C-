//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string myList[20];
//	int locationTotal;
//	string listItem;
//
//	for (locationTotal = 0; locationTotal < 20; locationTotal++)
//	{
//		cout << "Please enter an item for your list (or STOP to stop entering): \n";
//		cin >> listItem;
//		if (listItem == "STOP")
//		{
//			break;
//		}
//		myList[locationTotal] = listItem;
//
//	}
//	for (int counter = 0; counter < locationTotal; counter++)
//	{
//		if (counter == locationTotal - 1)
//		{
//			cout << myList[counter] << endl;
//			break;
//		}
//		cout << myList[counter] << ", ";
//	}
//
//	system("pause");
//	return 0;
//}