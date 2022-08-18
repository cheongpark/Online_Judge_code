#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	double a = 0, b = 0, sum[10] = {};
	cin >> a >> b;
	sum[0] = a + b, sum[1] = b + a, sum[2] = a - b, sum[3] = b - a, sum[4] = a * b, sum[5] = b * a, sum[6] = a / b, sum[7] = b / a, sum[8] = pow(a, b), sum[9] = pow(b, a);
	sort(sum, sum + 10);
	cout << fixed;
	cout.precision(6);
	cout << sum[9];
}
