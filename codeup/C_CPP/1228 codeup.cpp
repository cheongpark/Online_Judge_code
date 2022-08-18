#include <iostream>
using namespace std;

int main()
{
	double a, b, s, n;
	cin >> a >> b;
	s = (a - 100) * 0.9;
	n = (b - s) * 100 / s;
	if (n <= 10)
		cout << "정상";
	else if (n <= 20)
		cout << "과체중";
	else
		cout << "비만";
}
