#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a;
	while (1)
	{
		b++;
		a /= 10;
		if (a == 0)
			break;
	}
	cout << b;
}
