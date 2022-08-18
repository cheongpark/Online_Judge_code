#include <iostream>
using namespace std;

int main()
{
	int a, s = 0, i;
	cin >> a;
	for (i = 0; i <= 1000; i++)
	{
		s = s + i;
		if (a <= s)
			break;
	}
	cout << i;
}
