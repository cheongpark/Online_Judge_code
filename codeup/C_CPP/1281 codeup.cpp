#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, sum = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			cout << "-" << i;
			sum -= i;
		}
		else
		{
			if (i == a)
				cout << i;
			else
				cout << "+" << i;
			sum += i;
		}
	}
	cout << "=" << sum;
}
