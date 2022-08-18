#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0;

	cin >> x >> y;
	cout << (y % 10) * x << endl << ((y % 100) / 10) * x << endl << (y / 100) * x << endl << x * y;
}