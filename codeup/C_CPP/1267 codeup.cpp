#include <iostream>
using namespace std;

int main()
{
	int a[1000] = {}, c = 0, n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		if (a[i] % 5 ==0)
			c += a[i];
	cout << c;
}
