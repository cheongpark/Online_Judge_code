#include <iostream>

using namespace std;

int main()
{
	double a = 0, b = 0;
	cin >> a >> b;

	cout << fixed;
	cout.precision(9);
	cout << a / b;
}