#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, n = 0;
	cin >> a >> b >> c >> n;
	for (int i = 0; i < n - 1; i++)
		a = a * b + c;
	cout << a;
}
