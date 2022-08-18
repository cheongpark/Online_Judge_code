#include <iostream>
using namespace std;

int main()
{
	int n = 0, all = 0, b = 0, x[150] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> x[i];
	for (int j = 0; j < n; j++)
	{
		if (b >= n) break;
		if (x[b] == 1)
		{
			for (int i = 1; i <= n; i++)
			{
				if (x[b] == 0) break;
				all += i;
				b++;
			}
		}
		b++;
	}
	cout << all;
}
