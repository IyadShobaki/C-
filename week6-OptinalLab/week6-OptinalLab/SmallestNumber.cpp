#include <iostream>

using namespace std;

int main()
{
	int a, b, c,d;
	cin >> a >> b >> c;

	d = a < b ? (a < c ? a : c) : (b < c ? b : c);
	cout << d;
#/*
		int a = 0, b = 0, x = 2147483647;
		while (a < 3)
		{
			cin >> b;
			if (b < x) x = b;
			a++;
		}
		cout << x;*/

		system("pause");
		return 0;
	

}