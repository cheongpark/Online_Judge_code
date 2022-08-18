#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
			sum -= i;
		else
			sum += i;
	}
	cout << sum;
}
