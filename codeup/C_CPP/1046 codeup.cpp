#include <iostream>
using namespace std;

int main()
{
	long long a[3];
	for (int i = 0; i <= 2; i++)
		cin >> a[i];
	cout << a[0] + a[1] + a[2] << endl;
	double f = (double)(a[0] + a[1] + a[2]) / 3;
	cout << fixed;
	cout.precision(1);
	cout << f;
}
