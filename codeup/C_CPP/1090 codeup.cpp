#include <iostream>
using namespace std;

int main()
{
	long long a = 0, r = 0, n = 0;
	cin >> a >> r >> n;
	for (int i = 0; i < n - 1; i++)
		a = a * r;
	cout << a;
}
