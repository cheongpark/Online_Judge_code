#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a = 0, b = 0;
	cin >> a >> b;
	cout << fixed;
	cout.precision(1);
	cout << a / b << endl << (int)(a / b) << endl << (int)pow(a, b);
}
