#include <iostream>
using namespace std;

int main()
{
	long long h, b, c, s;
	double f;
	cin >> h >> b >> c >> s;
	f = h * b * c * s;
	cout << fixed;
	cout.precision(1);
	cout << f / (8 * 1024 * 1024) << " MB";
}
