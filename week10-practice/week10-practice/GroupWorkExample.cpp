#include <iostream>
using namespace std;

int main()
{
	int classStudent[3][10] = { {1,2,3,4,5,6,7,8,9,10},{1,2,3,4,5,6,7,8,9,10} ,{1,2,3,4,5,6,7,8,9,10} };
	int sum = 0;
	int average;
	for (int x = 0; x < 3; x++)
			{
				for (int y = 0; y < 10; y++)
				{
					
					cout << "Enter grade for class " << x + 1 << " Student number " << y + 1 << ": " ;

					cin >> classStudent[x][y];

				}
		
			}

	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 10; y++)
		{

			sum += classStudent[x][y];
			average = sum / 10;
			
		}
		
		cout << "The average greades for class " << x + 1 << " is " << average << endl;
		sum = 0;
	}

	
	

	system("pause");
	return 0;
		
}