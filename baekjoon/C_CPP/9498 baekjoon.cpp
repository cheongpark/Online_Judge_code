#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	char score = ' ';

	cin >> a;

	switch (a / 10)
	{
	case 10:
	case 9:
		score = 'A';
		break;
	case 8:
		score = 'B';
		break;
	case 7:
		score = 'C';
		break;
	case 6:
		score = 'D';
		break;
	default:
		score = 'F';
		break;
	}

	cout << score;
}