#include <iostream>
using namespace std;

int main()
{
	int a[2], num = 0;
	for (int i = 0; i < 2; i++)
	{
		cin >> a[i];
		if ((a[i] % 2) == 0)
			num += a[i] / 2 * 10;
		else
			num += (a[i] + 1) / 2;
	}
	cout << num;
}
