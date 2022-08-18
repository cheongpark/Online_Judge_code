#include <iostream>
using namespace std;

int main()
{
	long long a = 0, d = 0, n = 0;
	cin >> a >> d >> n;
	for (int i = 0; i < n - 1; i++)
		a = a + d;
	cout << a;
}
