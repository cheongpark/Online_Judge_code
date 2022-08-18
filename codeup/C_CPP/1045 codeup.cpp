#include <iostream>
using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;
	cout << a + b << endl << a - b << endl << a * b << endl << a / b << endl << a % b << endl;
	double f = (float)a / b;
	cout << fixed;
	cout.precision(2);
	cout << f;
}
