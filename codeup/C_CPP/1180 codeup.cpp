#include <iostream>
using namespace std;

int main()
{
	int a = 0, aray[2] = { 0, }, num = 0;
	cin >> a;
	for (int i = 0; i < 2; i++)
	{
		aray[i] = a % 10;
		a /= 10;
	}
	num = ((aray[0] * 10) + aray[1]) * 2;
	num %= 100;
	cout << num << endl;
	if (num <= 50)
		cout << "GOOD";
	else
		cout << "OH MY GOD";
}
