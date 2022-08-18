#include <iostream>
using namespace std;

int main()
{
	long long w, h, b;
	double f;
	cin >> w >> h >> b;
	f = w * h * b;
	cout << fixed;
	cout.precision(2);
	cout << f / (8 * 1024 * 1024) << " MB";
}
