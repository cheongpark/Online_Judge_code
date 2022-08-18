#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a;
	a = 2013 - a;
	if (((a / 100) % 10) == 8)
		cout << "0" << " ";
	else
		cout << (a % 100) << " ";
	if ((a / 1000) == 1)
		cout << "1";
	else if ((a / 1000) == 2)
		cout << "3";
}
