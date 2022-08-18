#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a;
	cout << a;
	if (a <= 13 && a >= 11)
	{
		cout << "th";
		return 0;
	}
	b = a % 10;
	switch (b)
	{
		default:
			cout << "th";
			break;
		case 1:
			cout << "st";
			break;
		case 2:
			cout << "nd";
			break;
		case 3:
			cout << "rd";
			break;
	}
}
