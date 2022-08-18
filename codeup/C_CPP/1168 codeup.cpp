#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	a /= 10000;
	if (b == 1 || b == 2)
		a += 1900;
	if (b == 3 || b == 4)
		a += 2000;
	cout << (2012 - a) + 1;
}
