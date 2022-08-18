#include <iostream>
using namespace std;

int main()
{
	double a[4] = {};
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	a[0] /= a[1], a[2] /= a[3];
	if (a[0] > a[2])
		cout << ">";
	else if (a[0] < a[2])
		cout << "<";
	else if(a[0]=a[2])
		cout << "=";
}
