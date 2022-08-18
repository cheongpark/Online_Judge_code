#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	while (1)
	{
		cout << a % 10;
		a /= 10;
		if (a == 0)
			break;
	}
}
