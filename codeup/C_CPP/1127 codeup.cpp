#include <iostream>
using namespace std;

int main()
{
	float a[3], s = 0;
	int b[3];
	for (int i = 0; i <= 2; i++)
		cin >> a[i] >> b[i];
	for (int i = 0; i <= 2; i++)
		s = s + a[i] * b[i];
	cout << fixed;
	cout.precision(1);
	cout << s;
}
