#include <iostream>
using namespace std;

int main()
{
	double Ct = 0, a[4] = {}, b[2] = {};
	for (int i = 0; i < 4; i++)
		cin >> a[i];
	for (int i = 0; i < 2; i++)
		cin >> b[i];
	Ct = ((((a[0] * (a[1] / 100) * 0.7984) / (a[2] * ((a[3] == 1) ? 0.7 : 0.6))) / 10) - (0.015 * (((b[0] * 60 + b[1]) - 30) / 60)));
	if (Ct < 0) Ct = 0;
	cout << fixed;
	cout.precision(3);
	cout << Ct << " ";
	if (Ct < 0.02) printf("pass");
	else if (Ct < 0.07) printf("stop");
	else printf("cancel"); 
}
