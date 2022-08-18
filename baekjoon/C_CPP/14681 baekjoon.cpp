#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0, Q = 0;

	cin >> x >> y;

	if (0 < x && 0 < y) Q = 1;
	else if (0 > x && 0 < y) Q = 2;
	else if (0 < x && 0 > y) Q = 4;
	else Q = 3;

	cout << Q;
}